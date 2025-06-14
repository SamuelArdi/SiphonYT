#include <iostream>
#include <string>
#include <vector>

#include "handler.h"

/*
bool findVecElem(std::vector<std::string> vec, std::string elemToFind) {
  auto elem = std::find(vec.begin(), vec.end(), elemToFind);
  if (elem != vec.end()) {
    return true;
  } else {
    return false;
  }
}

void handler(std::vector<std::string> args, bool &exit, std::string &command) {
  // single arguments
  if (findVecElem(args, "-h") == true || findVecElem(args, "--help") == true) {
    showHelp();
    exit = true;
    return;
  }

  if (findVecElem(args, "-v") == true ||
      findVecElem(args, "--version") == true) {
    showVersion();
    exit = true;
    return;
  }

  if (findVecElem(args, "-x") == true) {
    extractAudio(command);
  }

  if (findVecElem(args, "-F") == true) {
    showAvailableFormats(command);
  }

  if (findVecElem(args, "--yes-playlist") == true) {
    playlistDownload(command);
  }

  // subtitles
  if (findVecElem(args, "--write-subs") == true) {
    writeSubs(command);
  }

  if (findVecElem(args, "--no-write-subs") == true) {
    disableAutoSubs(command);
  }

  if (findVecElem(args, "--write-auto-subs") == true) {
    enableAutoSubs(command);
  }

  if (findVecElem(args, "--no-write-auto-subs") == true) {
    disableAutoSubs(command);
  }

  if (findVecElem(args, "--list-subs") == true) {
    listSubs(command);
  }

  // value arguments
  if (findVecElem(args, "-f") == true) {
    formatArgument(args, command, false);
  } else if (findVecElem(args, "--format") == true) {
    formatArgument(args, command, true);
  }

  if (findVecElem(args, "-q") == true) {
    qualityArgument(args, command, false);
  } else if (findVecElem(args, "--quality") == true) {
    qualityArgument(args, command, true);
  }

  if (findVecElem(args, "-o") == true) {
    outputArgument(args, command, false);
  } else if (findVecElem(args, "--output") == true) {
    outputArgument(args, command, true);
  }

  // subtitles
  if (findVecElem(args, "--sub-format") == true) {
    subFormats(args, command, true);
  }

  if (findVecElem(args, "--sub-langs") == true) {
    subLangs(args, command, true);
  }
}
*/

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
#elifdef unix
  std::string url = "'" + std::string(argv[argc - 1]) + "'";
#elifndef
#endif
  std::string command = "yt-dlp";
  command += " ";

  bool exitCli = false;
  handler(args, exitCli, command);
  command += url;

  // debugging
  for (int i = 0; i < args.size(); i++) {
    std::cout << "Arg " << i + 1 << ": " << args[i]
              << "\n"; // "\n" instead of std::endl for performance
  }
  std::cout << command << std::endl;

  if (exitCli == true) {
    return 0;
  }

  // command activation
  // system(command.c_str());
  return 0;
}
