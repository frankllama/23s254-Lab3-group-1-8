#include <iostream>
#include "reader.h"

int main(int argc, char *argv[])
{
  try {
    Reader readNames(argv[1]);
    readNames.getNames();
    readNames.print();
  } catch (std::logic_error err) {
    std::string file;

    std::cout << "Enter the name of the file you want to read names from: ";
    std::cin >> file;
    
    Reader readNames(file);
    
    readNames.getNames();
    readNames.print();
  }

  return 0;
}
