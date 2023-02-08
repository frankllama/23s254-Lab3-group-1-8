#include "reader.h"

#include "reader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void Reader::getNames() {
  std::string name;

  if (fileName.is_open()) {
    while (std::getline(fileName, name)) {
      names.push_back(name);
    }
  } else {
    std::cerr << "Unable to open the file." << std::endl;
  }
}

void Reader::print() {
  std::cout << "Group 1 8 members:" << std::endl;

  for (auto name : names) {
    std::cout << name << std::endl;
  }
}

int main() {
  std::string fileName;
  std::cout << "Enter the name of the file: ";
  std::cin >> fileName;

  Reader reader(fileName);
  reader.getNames();
  reader.print();

  return 0;
}

