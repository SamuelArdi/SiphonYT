#include "arguments.h"

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
