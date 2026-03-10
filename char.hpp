#ifndef __MORLOC_CHAR_HPP__
#define __MORLOC_CHAR_HPP__

#include <string>
#include <vector>
#include <cstdint>
#include <cctype>

bool morloc_isUpper(uint8_t c) {
    return std::isupper(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isLower(uint8_t c) {
    return std::islower(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isAlpha(uint8_t c) {
    return std::isalpha(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isDigit(uint8_t c) {
    return std::isdigit(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isAlphaNum(uint8_t c) {
    return std::isalnum(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isSpace(uint8_t c) {
    return std::isspace(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isPunct(uint8_t c) {
    return std::ispunct(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isPrint(uint8_t c) {
    return std::isprint(static_cast<unsigned char>(c)) != 0;
}

bool morloc_isControl(uint8_t c) {
    return std::iscntrl(static_cast<unsigned char>(c)) != 0;
}

uint8_t morloc_toUpperChar(uint8_t c) {
    return static_cast<uint8_t>(std::toupper(static_cast<unsigned char>(c)));
}

uint8_t morloc_toLowerChar(uint8_t c) {
    return static_cast<uint8_t>(std::tolower(static_cast<unsigned char>(c)));
}

int morloc_digitToInt(uint8_t c) {
    return c - 48;
}

uint8_t morloc_intToDigit(int n) {
    return static_cast<uint8_t>(n + 48);
}

uint8_t morloc_ord(const std::string& s) {
    return static_cast<uint8_t>(s[0]);
}

std::string morloc_chr(uint8_t c) {
    return std::string(1, static_cast<char>(c));
}

std::vector<uint8_t> morloc_encode(const std::string& s) {
    std::vector<uint8_t> result;
    for (char c : s) {
        result.push_back(static_cast<uint8_t>(c));
    }
    return result;
}

std::string morloc_decode(const std::vector<uint8_t>& xs) {
    std::string result;
    for (uint8_t c : xs) {
        result.push_back(static_cast<char>(c));
    }
    return result;
}

#endif
