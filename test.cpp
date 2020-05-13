#include <iostream>
 2 #include<fstream>
 3 #include <string>
 4
 5 using namespace std;
 6
 7 int main(int argc, char const *argv[])
 8 {
 9         ofstream myfile;
10         myfile.open("example.bat");
11         myfile<<"Can the file be overriden?\n";
12         myfile.close();
13         return 0;
14 }
