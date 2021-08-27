// Bryn Mawr College, 2021
#include "Box.h"
using namespace std;

namespace example {
Box::Box() {
  cout << "Default ctor, size = " << mySize << endl;
} 

Box::Box(float s) {
  mySize = s;    
  cout << "ctor, size = "<< mySize << endl;
} 

Box::Box(const Box& b) {
  mySize = b.mySize;    
  cout << "copy ctor, size = "<< mySize << endl;
} 

Box::~Box() {
  cout << "destructor" << endl;
} 

Box& Box::operator=(const Box& b) {
  if (&b == this) {
    // guard against self assignment
    return *this;
  }

  mySize = b.mySize;
  cout << "assignment, size =" << mySize << endl;
  return *this;
}

float Box::getSize() const {
  return mySize;
} 

void Box::setSize(float v) { 
  mySize = v;
}

std::ostream& operator<<(std::ostream& os, const Box& b) {
  os << "Box: " << b.mySize;
  return os;
}

}  // end namesapce example