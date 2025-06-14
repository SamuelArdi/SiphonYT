#include "arguments.h"

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

// single subtitles
void writeSubs(std::string &cmd) {
  cmd += "--write-subs";
  cmd += " ";
}

void listSubs(std::string &cmd) {
  cmd += "--list-subs";
  cmd += " ";
}

void enableAutoSubs(std::string &cmd) {
  cmd += "--write-auto-subs";
  cmd += " ";
}

void disableAutoSubs(std::string &cmd) {
  cmd += "--no-write-auto-subs";
  cmd += " ";
}

// single arguments
void showHelp() {
  std::cout << "usage: siphonyt <Arguments> <Video/Playlist URL>" << std::endl;

  std::cout << "\nArguments:" << std::endl;
  std::cout << "-h                  Print this help text and exit" << std::endl;
  std::cout << "-v                  Print program version and exit"
            << std::endl;
  std::cout << "-x                  Extract audio (no video)" << std::endl;
  std::cout << "-f <audio format>    Convert to selected audio format"
            << std::endl;
}

void showVersion() {
  std::cout << "SiphonYT" << std::endl;
  std::cout << "Version: 1.0.2" << std::endl;
}

void extractAudio(std::string &cmd) {
  cmd += "-x";
  cmd += " ";
}

void keepOrgFile(std::string &cmd) {
  cmd += "-k";
  cmd += " ";
}

void showAvailableFormats(std::string &cmd) {
  cmd += "-F";
  cmd += " ";
}

void playlistDownload(std::string &cmd) {
  cmd += "--yes-playlist";
  cmd += " ";
}

void verbose(std::string &cmd) {
  cmd += "--verbose";
  cmd += " ";
}

void skipDownload(std::string &cmd) {
  cmd += "--verbose";
  cmd += " ";
}

void quiet(std::string &cmd) {
  cmd += "--quiet";
  cmd += " ";
}

// value subtitle
void subFormats(std::vector<std::string> args, std::string &cmd, bool isLong) {
  int valueIndex;
  if (isLong) {
    valueIndex = getValueIndex(args, "--sub-format");
  }

  std::string value = lowerStr(args, valueIndex);
#ifdef _WIN32
  cmd += "--sub-format \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "--sub-format '" + value + "'";
  cmd += " ";
#endif
}

void subLangs(std::vector<std::string> args, std::string &cmd, bool isLong) {
  int valueIndex;
  if (isLong) {
    valueIndex = getValueIndex(args, "--sub-langs");
  }

  std::string value = lowerStr(args, valueIndex);
#ifdef _WIN32
  cmd += "--sub-langs \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "--sub-langs '" + value + "'";
  cmd += " ";
#endif
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
#ifdef _WIN32
  cmd += "-S \"ext:" + value + "\" --recode \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "-S 'ext:" + value + "' --recode '" + value + "'";
  cmd += " ";
#endif
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
#ifdef _WIN32
  cmd += "-S \"height:" + value + "\" -f \"bv*+ba/b\"";
  cmd += " ";
#elif unix
  cmd += "-S 'height:" + value + "' -f 'bva*+ba/b'";
  cmd += " ";
#endif
}

void outputArgument(std::vector<std::string> args, std::string &cmd,
                    bool isLong) {
  int valueIndex;
  if (isLong == true) {
    valueIndex = getValueIndex(args, "--output");
  } else {
    valueIndex = getValueIndex(args, "-o");
  }

  std::string value = lowerStr(args, valueIndex);
#ifdef _WIN32
  cmd += "-o \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "-o '" + value + "'";
  cmd += " ";
#endif
}

void proxy(std::vector<std::string> args, std::string &cmd, bool isLong) {
  int valueIndex;
  valueIndex = getValueIndex(args, "--proxy");

  std::string value = lowerStr(args, valueIndex);
#ifdef _WIN32
  cmd += "--proxy \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "--proxy '" + value = "'";
  cmd += " ";
#endif
}

void cookiesFromBrowser(std::vector<std::string> args, std::string &cmd,
                        bool isLong) {
  int valueIndex;
  valueIndex = getValueIndex(args, "--cookies-from-browser");

  std::string value = lowerStr(args, valueIndex);
#ifdef _WIN32
  cmd += "--cookies-from-browser \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "--cookies-from-browser " + value + "'";
  cmd += " ";
#endif
}

void concurrentFragments(std::vector<std::string> args, std::string &cmd,
                         bool isLong) {
  int valueIndex;
  if (isLong == true) {
    valueIndex = getValueIndex(args, "--concurrent-fragments");
  } else {
    valueIndex = getValueIndex(args, "-N");
  }

  std::string value = lowerStr(args, valueIndex);
#ifdef _WIN32
  cmd += "--conccurent-fragments \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "--concurrent-fragments '" + value + "'";
  cmd += " ";
#endif
}

void presetAlias(std::vector<std::string> args, std::string &cmd, bool isLong) {
  int valueIndex;
  if (isLong == true) {
    valueIndex = getValueIndex(args, "--preset-alias");
  } else {
    valueIndex = getValueIndex(args, "-t");
  }

  std::string value = lowerStr(args, valueIndex);
#ifdef _WIN32
  cmd += "--preset-alias \"" + value + "\"";
  cmd += " ";
#elif unix
  cmd += "--preset-alias '" + value + "'";
  cmd += " ";
#endif
}
