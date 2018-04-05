#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv){
  if(argc<2){
    cout << "ERROR!" << endl;
    return -1;
  }

  string name = argv[1];
  string lang = "en";
  string charset = "UTF-8";
  ofstream outFile;

  outFile.open(name + ".html", ofstream::out); // File, Opening mode (Seek to end-of-file before each write)
  outFile << "<!DOCTYPE html>" << endl;
  outFile << "<html lang=\"" << "en\">" << endl;
  outFile << "<head>" << endl;
  outFile << "  <meta charset=\"UTF-8\">" << endl;
  outFile << "  <title>" << name << "</title>" << endl;
  outFile << "</head>" << endl;
  outFile << "<body>" << endl;
  outFile << "</body>" << endl;
  outFile << "</html>" << endl;
	outFile << endl;
	outFile.close();

  return 0;
}
