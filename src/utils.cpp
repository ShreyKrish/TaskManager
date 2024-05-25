// src/utils.cpp
#include "utils.h"
#include <algorithm>
#include <cctype>
#include <sstream>
#include <vector>

std::string trim(const std::string &str) {
    auto start = str.begin();
    while (start != str.end() && std::isspace(*start)) {
        start++;
    }

    auto end = str.end();
    do {
        end--;
    } while (std::distance(start, end) > 0 && std::isspace(*end));

    return std::string(start, end + 1);
}

bool isValidDate(const std::string &date) {
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
        return false;
    }
    std::istringstream ss(date);
    std::vector<int> dateParts;
    std::string token;
    while (std::getline(ss, token, '-')) {
        dateParts.push_back(std::stoi(token));
    }
    if (dateParts.size() != 3) {
        return false;
    }

    int year = dateParts[0];
    int month = dateParts[1];
    int day = dateParts[2];

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    // Simplistic check for month days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }

    // February check
    if (month == 2) {
        bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        if (day > (isLeapYear ? 29 : 28)) {
            return false;
        }
    }

    return true;
}

bool isValidPriority(const std::string &priority) {
    return (priority == "High" || priority == "Medium" || priority == "Low");
}
