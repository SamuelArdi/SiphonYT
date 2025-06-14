#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <algorithm>
#include <iostream>
#include <vector>

// sinle subtitles
void writeSubs(std::string &cmd);
void listSubs(std::string &cmd);
void enableAutoSubs(std::string &cmd);
void disableAutoSubs(std::string &cmd);

void showHelp();
void showVersion();
void extractAudio(std::string &cmd);
void keepOrgFile(std::string &cmd);
void showAvailableFormats(std::string &cmd);
void playlistDownload(std::string &cmd);
void verbose(std::string &cmd);
void skipDownload(std::string &cmd);
void quiet(std::string &cmd);

//  value subtitles
void subFormats(std::vector<std::string> args, std::string &cmd, bool isLong);
void subLangs(std::vector<std::string> args, std::string &cmd, bool isLong);

// value arguments
void formatArgument(std::vector<std::string> args, std::string &cmd,
                    bool isLong);
void qualityArgument(std::vector<std::string> args, std::string &cmd,
                     bool isLong);
void outputArgument(std::vector<std::string> args, std::string &cmd,
                    bool isLong);
void proxy(std::vector<std::string> args, std::string &cmd, bool isLong);
void cookiesFromBrowser(std::vector<std::string> args, std::string &cmd,
                        bool isLong);
void concurrentFragments(std::vector<std::string> args, std::string &cmd,
                         bool isLong);
void presetAlias(std::vector<std::string> args, std::string &cmd, bool isLong);

#endif // ARGUMENTS_H
