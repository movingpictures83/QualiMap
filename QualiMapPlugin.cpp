#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "QualiMapPlugin.h"

void QualiMapPlugin::input(std::string file) {
 inputfile = file;
}

void QualiMapPlugin::run() {
   
}

void QualiMapPlugin::output(std::string file) {
 // spades.py -o 02_QualiMap -1 $1 -2 $2 --careful
 // assembly-stats -t ./All_assemblies/*.fasta > ./All_assemblies/00_Metrics_all_assemblies.txt
 // qualimap bamqc -bam assembly_map_long-reads.bam -outfile Qualimap_map_long.pdf
	std::string command = "qualimap bamqc -bam "+inputfile+" -outfile "+file.substr(file.find_last_of('/')+1)+"; cp "+std::string(PluginManager::prefix())+"/*stats/* "+std::string(PluginManager::prefix());
 std::cout << command << std::endl;

 system(command.c_str());

}

PluginProxy<QualiMapPlugin> QualiMapPluginProxy = PluginProxy<QualiMapPlugin>("QualiMap", PluginManager::getInstance());
