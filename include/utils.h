// include/utils.h
#ifndef UTILS_H
#define UTILS_H

#include <string>

// Trims whitespace from the beginning and end of a string
std::string trim(const std::string &str);

// Checks if the given date string is in the format YYYY-MM-DD and is a valid date
bool isValidDate(const std::string &date);

// Checks if the given priority is one of the allowed values: "High", "Medium", "Low"
bool isValidPriority(const std::string &priority);

#endif /* UTILS_H */
