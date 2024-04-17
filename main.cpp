//
// Created by Маша on 17.04.2024.
//
#include <iostream>


class Figure{
 private:
  std::string name;
 public:
  void setName(std::string n) {
    name = n;
  }
  std::string getName() {
    return name;
  }
};

int main(){
  std::cout << "hello" << std::endl;
}