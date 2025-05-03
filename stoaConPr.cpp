// String to ASCII converter program

#include <iostream>
#include <string>

int main() {
  std::cout << "String to ASCII converter program" << std::endl;
  std::cout << "Type words/letter to convert to ASCII seperated by commas ,"
            << std::endl;

  std::cout << "> ";
  std::string str;
  std::cin >> str;

  std::string output = "";
  for (int i = 0; i < str.length(); i++) {
    output += std::to_string(static_cast<int>(str[i])) += " ";
    if (str[i] == ',') {
      output += ",\n";
    }
  }

  std::cout << output;

  return 0;
}
