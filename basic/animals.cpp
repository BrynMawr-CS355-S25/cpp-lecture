// Bryn Mawr College, 2021

#include <iostream>  // cout, cin
#include <vector>
using namespace std;

class Animal {
 public:
  Animal() {}
  virtual ~Animal() {}
  virtual string say() const = 0;
};

class Cow : public Animal {
 public:
  Cow() {}
  string say() const override { return "Mooo"; }
};

class Cat : public Animal {
 public:
  Cat() {}
  string say() const override { return "Meow"; }
};

int main(int argc, char** argv) {
  vector<Animal*> animals;
  animals.push_back(new Cow());
  animals.push_back(new Cat());
  animals.push_back(new Cow());

  for (Animal* animal : animals) {
    cout << animal->say() << endl;
  }

  // cleanup
  for (unsigned int i = 0; i < animals.size(); i++) {
    delete animals[i];
  }
  animals.clear();
}