#ifndef READER_H
#define READER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Reader {
public:
  Reader() = default;
  Reader(const std::string &s) : fileName(s) {}
  void getNames();
  void print();
private:
  std::ifstream fileName;
  std::vector<std::string> names;
};
#endif
