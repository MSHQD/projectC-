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
  void info(){
    std::cout << "This is a figure" << std::endl;
  }
};

int main(){
  std::cout << "hello" << std::endl;
}