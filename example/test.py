def test(file1, file2):
   firstfile = open(file1, 'r')
   secondfile = open(file2, 'r')

   lines1 = []
   lines2 = []
   found = False
   for line in firstfile:
       if line.startswith(">>>>>>> Reference"):
           found=True
       if found:
           lines1.append(line)

   found = False
   for line in secondfile:
       if line.startswith(">>>>>>> Reference"):
           found=True
       if found:
           lines2.append(line)
   if (len(lines1) != len(lines2)):
       return False
   else:
       for i in range(len(lines1)):
           if (lines1[i] != lines2[i]):
               return False
   return True
