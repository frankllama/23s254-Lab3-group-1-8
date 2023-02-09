#include "Reader.h"

void Reader::getNames() 
{
  std::string name;

  if (fileName.is_open()) {
    while (std::getline(fileName, name)) {
      names.push_back(name);
    }
  } else {
    std::cerr << "Unable to open the file." << std::endl;
  }
}

void Reader::print()
{
  std::cout << "Group 1 8 members:" << std::endl;

  for (auto name : names) {
    std::cout << name << std::endl;
  }
}
