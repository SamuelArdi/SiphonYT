#include "handler.h"
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
  auto elem = std::find(vec.begin(), vec.end(), elemToFind);
  if (elem != vec.end()) {
    return true;
  } else {
    return false;
  }
}

void handler(std::vector<std::string> args, bool &exit, std::string &command) {
  // single subtitles
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

  if (findVecElem(args, "--verbose") == true) {
    verbose(command);
  }

  if (findVecElem(args, "--skip-download") == true) {
    skipDownload(command);
  }

  if (findVecElem(args, "--quiet") == true) {
    quiet(command);
  }

  // value subtitles
  if (findVecElem(args, "--sub-format") == true) {
    subFormats(args, command, true);
  }

  if (findVecElem(args, "--sub-langs") == true) {
    subLangs(args, command, true);
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

  if (findVecElem(args, "--proxy") == true) {
    proxy(args, command, false);
  }

  if (findVecElem(args, "cookies-from-browser") == true) {
    cookiesFromBrowser(args, command, true);
  }

  if (findVecElem(args, "-N") == true) {
    concurrentFragments(args, command, false);
  } else if (findVecElem(args, "--concurrent-fragments") == true) {
    concurrentFragments(args, command, true);
  }

  if (findVecElem(args, "--preset-alias") == true) {
    presetAlias(args, command, true);
  } else if (findVecElem(args, "-t") == true) {
    presetAlias(args, command, false);
  }
}
