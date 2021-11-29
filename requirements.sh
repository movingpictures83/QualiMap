sudo apt-get install -y --no-install-recommends libxml2-dev libcurl4-openssl-dev unzip

curl -sSLO https://bitbucket.org/kokonech/qualimap/downloads/qualimap_v2.2.1_src.zip

unzip ./qualimap_v2.2.1_src.zip

mv -u ./qualimap-v2.2.1-src /usr/local/share/qualimap

ln -sf /usr/local/share/qualimap/cli/qualimap /usr/local/bin/qualimap