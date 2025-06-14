#include <iostream>
#include <string>
#include <vector>

#include "handler.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "No URL present, type '-h' for help" << std::endl;
    return 0;
  }

  std::vector<std::string> args;
  for (int i = 1; i < argc; i++) {
    args.push_back(argv[i]);
  }

#ifdef _WIN32
  std::string url = "\"" + std::string(argv[argc - 1]) + "\"";
#elif unix
  std::string url = "'" + std::string(argv[argc - 1]) + "'";
#endif

  std::string command = "yt-dlp";
  command += " ";

  bool exitCli = false;
  handler(args, exitCli, command);
  command += url;

  // debugging
  // REMEMBER TO COMMENT ONCE DONE DEBUGGING
  for (int i = 0; i < args.size(); i++) {
    std::cout << "Arg " << i + 1 << ": " << args[i]
              << "\n"; // "\n" instead of std::endl for performance
  }
  std::cout << command << std::endl;

  // for single use commands
  if (exitCli == true) {
    return 0;
  }

  // command activation
  system(command.c_str());
  return 0;
}
