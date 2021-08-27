// Bryn Mawr College, 2021

#include <iostream>  // cout, cin
#include "Box.h"

using namespace std;
using example::Box;

int main(int argc, char** argv)
{
   Box b1; // what does this call?
   Box b2 = b1;
   Box b3(3.0);
   Box b4 = Box(4.0);

   b2.setSize(2.0);
   cout << b2 << endl;

   b2 = b4;
   b2 = b2;
}

