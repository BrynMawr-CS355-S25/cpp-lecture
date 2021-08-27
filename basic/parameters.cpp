// Bryn Mawr College, 2021

#include <iostream>
using namespace std;

class Box {
 public:
  Box() {}
  float size = 10;  
};

void example1(Box b) {
  b.size = 20;
}

//void example2(const Box& b) {
  //b.size = 20;
//}

void example3(Box& b) {
  b.size = 20;
}

int main(int argc, char** argv) {

  Box b;
  example1(b);
  //example2(b);
  example3(b);
}
