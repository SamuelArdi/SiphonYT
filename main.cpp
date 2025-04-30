#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

void showHelp() {
  std::cout << "siphonyt [options]" << std::endl;

  std::cout << "\nOptions:" << std::endl;
  std::cout << "-h              Print this help text and exit" << std::endl;
  std::cout << "-v              Print program version and exit" << std::endl;
  std::cout << "-l <url>        The YouTube video link to convert" << std::endl;
  std::cout << "-f <format>     Converts to available formats" << std::endl;
  std::cout << "-o <output>     The output file name" << std::endl;
}

void showVersion() {
  std::cout << "SiphonYT alpha testing" << std::endl;
  std::cout << "Version: 0.0.1.alpha" << std::endl;
}

int main(int argc, char *argv[]) {

  std::map<std::string, std::string> args;

  std::vector<std::string> singleArguments{"-h", "-v"};
  std::vector<std::string> coupleArguments("-l", "-f");

  if (args.empty()) {
    std::cout << "No arguments present, type '-h' for help" << std::endl;
    return 0;
  }

  if (args[0] == "-h") {
    showHelp();
    return 0;
  } else if (args[0] == "-v") {
    showVersion();
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
