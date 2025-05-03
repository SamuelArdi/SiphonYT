#include "arguments.h"

void showHelp() {
  std::cout << "siphonyt [Arguments] [video/playlist url]" << std::endl;

  std::cout << "\nArguments:" << std::endl;
  std::cout << "-h                  Print this help text and exit" << std::endl;
  std::cout << "-v                  Print program version and exit"
            << std::endl;
  std::cout << "-x                  Extract audio (no video)" << std::endl;
  std::cout
      << "-f <audio format>   Convert to selected audio format (default: opus)"
      << std::endl;
}

void showVersion() {
  std::cout << "SiphonYT alpha testing" << std::endl;
  std::cout << "Version: 0.0.1.alpha" << std::endl;
}
