// Bryn Mawr College, 2021

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
  string phrase = "the quick, brown dog";

  if (phrase.find("quick") != string::npos) {
    cout << "Found quick in phrase!\n";
  }

  if (phrase.find("cat") == string::npos) {
    cout << "cat is not in phrase\n";
  }

  cout << "The string length is " << phrase.size() << std::endl;
  
  // turn vowels into numbers
  string newphrase = "";
  for (unsigned int i = 0; i < phrase.size(); i++) {
     if (phrase[i] == 'i') newphrase += "1";
     else if (phrase[i] == 'o') newphrase += "0";
     else if (phrase[i] == 'e') newphrase += "3";
     else newphrase += phrase[i];
  }

  cout << "newphrase: " << newphrase << endl;

  string filename = "hello.txt";
  string newfilename = filename.substr(0, filename.size()-4) + ".bvh";
  cout << "newfilename: " << newfilename << endl;
  return 0;
}


