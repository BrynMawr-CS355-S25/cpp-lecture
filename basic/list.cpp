// Bryn Mawr College, 2021

#include <iostream>
#include <string>
#include <list>
#include <algorithm> // std::find
using namespace std;

int main(int argc, char** argv) {

  list<int> values = {1, -2, 3};
  values.push_back(-4);

  for (auto it = values.begin(); it != values.end(); it++) {
     cout << *it << endl;
  }

  values.clear();
  values.push_front(25);
  values.push_back(13);
 
  // Insert a int before 16 by searching
  auto it = find(values.begin(), values.end(), 13);
  if (it != values.end())
      values.insert(it, 42);
 
  cout << "l = { ";
  for (int n : values)
     cout << n << ", ";
  cout << "};\n";
}
