// Bryn Mawr College, 2021

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char** argv) {
  map<string,int> names2age;
  names2age["giles"] = 54;
  names2age["buffy"] = 18;
  names2age["joyce"] = 38;

  cout << "Number of items: " << names2age.size() << endl;

  for (auto it = names2age.begin(); it != names2age.end(); ++it) {
    cout << it->first << ", " << it->second << endl;
  }

  names2age.clear();
  names2age = { {"giles", 54}, {"buffy", 18}, {"drusilla", 176} };

  for (auto [key, value] : names2age) { 
    cout << key << ", " << value << endl;
  } 
}
