#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_set>
#include <vector>

#include "arguments.h"

/*
int stoa(std::string str) {
  // converts string into ascii numbers

  std::string ascii = "";
  for (int i = 0; i < str.length(); i++) {
    ascii += std::to_string(static_cast<int>(str[i]));
  }

  return std::stoi(ascii);
}
*/

bool findVecElem(std::vector<std::string> vec, std::string elemToFind) {
  auto it = std::find(vec.begin(), vec.end(), elemToFind);
  if (it != vec.end()) {
    return true;
  } else {
    return false;
  }
}

void handler(std::vector<std::string> args, bool &exit) {
  if (findVecElem(args, "-h") == true) {
    showHelp();
    exit = true;
  }
  if (findVecElem(args, "-v") == true) {
    showVersion();
    exit = true;
  }
};

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "No URL present, type '-h' for help" << std::endl;
    return 0;
  }

  std::vector<std::string> args;
  for (int i = 1; i < argc; i++) {
    args.push_back(argv[i]);
  }

  bool exitCli;
  handler(args, exitCli);

  if (exitCli == true) {
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
