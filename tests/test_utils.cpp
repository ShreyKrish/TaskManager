// tests/test_utils.cpp
#include "utils.h"
#include <cassert>
#include <iostream>

void testTrim() {
    assert(trim("  Hello  ") == "Hello");
    assert(trim("Hello") == "Hello");
    assert(trim("  Hello World  ") == "Hello World");
    std::cout << "testTrim passed.\n";
}

void testIsValidDate() {
    assert(isValidDate("2024-05-25"));
    assert(!isValidDate("2024-13-25"));
    assert(!isValidDate("2024-05-32"));
    assert(isValidDate("2020-02-29"));  // Leap year
    assert(!isValidDate("2019-02-29")); // Non-leap year
    std::cout << "testIsValidDate passed.\n";
}

void testIsValidPriority() {
    assert(isValidPriority("High"));
    assert(isValidPriority("Medium"));
    assert(isValidPriority("Low"));
    assert(!isValidPriority("Urgent"));
    std::cout << "testIsValidPriority passed.\n";
}

int main() {
    testTrim();
    testIsValidDate();
    testIsValidPriority();
    std::cout << "All tests passed.\n";
    return 0;
}
