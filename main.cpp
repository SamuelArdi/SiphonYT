#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "arguments.h"

int stoa(std::string str) {
  // converts string into ascii numbers

  std::string ascii = "";
  for (int i = 0; i < str.length(); i++) {
    ascii += std::to_string(static_cast<int>(str[i]));
  }

  return std::stoi(ascii);
}

void handler(int item, bool &exit, std::string value = "") {
  switch (item) {
  case 45104: // -h
    showHelp();
    exit = true;
    break;
  case 45118: // -v
    showVersion();
    exit = true;
    break;
  }
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "No arguments present, type '-h' for help" << std::endl;
    return 0;
  }

  bool exit = false;
  for (int i = 1; i < argc; i++) {
    handler(stoa(argv[i]), exit);
  }

  if (exit == true) {
    return 0;
  }

  /*
  if (args.find("-h") != args.end()) {
    showHelp();
    return 0;
  }

  if (args.find("-l") != args.end()) {
    std::cout << "URL: " << args["-l"] << std::endl;
  } else {
    std::cerr << "Error: No URL Provided" << std::endl;
    return 1;
  }

  std::string format = (args.find("-f") != args.end()) ? args["-f"] : "mp3";
  std::cout << "Format: " << format << std::endl;
  */

  return 0;
}
