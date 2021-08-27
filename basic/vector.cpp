// Bryn Mawr College, 2021

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char** argv) {

  vector<float> values = {1.0, -2.0, 3.0};
  values.push_back(-4.0);

  for (unsigned int i = 0; i < values.size(); i++) {
     cout << values[i] << endl;
  }

  values.clear();
  values = vector<float>(10);
  for (unsigned int i = 0; i < 10; i++) {
    values[i] = i;
  }

  values[1] *= 10.0;
  for (float v : values) {
    cout << v << endl;
  }
}
