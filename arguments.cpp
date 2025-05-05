#include "arguments.h"
#include <vector>

// required functions
std::string lowerStr(std::vector<std::string> args, int valueIndex) {
  std::string lowercase;
  for (char c : args[valueIndex]) {
    lowercase += std::tolower(c);
  }

  return lowercase;
}

int getValueIndex(std::vector<std::string> vec, std::string arg) {
  auto id = std::find(vec.begin(), vec.end(), arg);
  if (id != vec.end()) {
    return std::distance(vec.begin(), id) + 1;
  } else {
    std::cerr << "Not found";
    return 404;
  }
}

// single arguments
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
  std::cout << "SiphonYT pre-alpha testing" << std::endl;
  std::cout << "Version: 0.1.6.alpha" << std::endl;
}

void extractAudio(std::string cmd) {
  cmd += "-x";
  cmd += " ";
}

// value arguments
void formatArgument(std::vector<std::string> args, std::string &cmd,
                    bool isLong) {
  int valueIndex;
  if (isLong == true) {
    valueIndex = getValueIndex(args, "--format");
  } else {
    valueIndex = getValueIndex(args, "-f");
  }

  std::string value = lowerStr(args, valueIndex);
  cmd += "-S 'res,ext:" + value + "' --recode '" + value + "'";
  cmd += " ";
}

void qualityArgument(std::vector<std::string> args, std::string &cmd,
                     bool isLong) {
  int valueIndex;
  if (isLong == true) {
    valueIndex = getValueIndex(args, "--quality");
  } else {
    valueIndex = getValueIndex(args, "-q");
  }

  std::string value = lowerStr(args, valueIndex);
}
