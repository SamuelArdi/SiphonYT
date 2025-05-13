#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <algorithm>
#include <iostream>
#include <vector>

void showHelp();
void showVersion();
void extractAudio(std::string cmd);
void keepOrgFile(std::string cmd);
void showAvailableFormats(std::string cmd);

void formatArgument(std::vector<std::string> args, std::string &cmd,
                    bool isLong);
void qualityArgument(std::vector<std::string> args, std::string &cmd,
                     bool isLong);
void outputArgument(std::vector<std::string> args, std::string &cmd, bool isLong);

#endif // ARGUMENTS_H
