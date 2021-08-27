// Bryn Mawr College, 2021
#ifndef BOX_H_
#define BOX_H_

#include <iostream>

namespace example {
class Box {
 public:
  Box(); // default ctor
  Box(float s); // ctor
  Box(const Box& b); // copy ctor
  virtual ~Box(); // destructor
  Box& operator=(const Box& b); // assignment operator

  float getSize() const; // getter method
  void setSize(float v); //setter method

  // stream operator (for printing with cout)
  friend std::ostream& operator<<(std::ostream& os, const Box& b);

private:
  float mySize = 1.0f;
};
}
#endif
