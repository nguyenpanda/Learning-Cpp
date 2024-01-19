#ifndef COLOR_H
#define COLOR_H

#include <iostream>

const std::string RESET = "\033[0m";

const std::string RED = "\033[1;91m";
const std::string GREEN = "\033[1;92m";
const std::string YELLOW = "\033[1;93m";
const std::string BLUE = "\033[1;94m";
const std::string MAGENTA = "\033[1;95m";
const std::string CYAN = "\033[1;96m";

const std::string RED_BACKGROUND = "\033[41;98m";
const std::string GREEN_BACKGROUND = "\033[42;97m";
const std::string YELLOW_BACKGROUND = "\033[43;97m";
const std::string BLUE_BACKGROUND = "\033[44;97m";
const std::string MAGENTA_BACKGROUND = "\033[45;97m";
const std::string CYAN_BACKGROUND = "\033[46;97m";

#endif //COLOR_H