#ifndef Soundex_h
#define Soundex_h
#include <string>

static const size_t MaxCodeLength{4};

class Soundex {
public:
  std::string encode(const std::string &word) const {
    return zeroPad(head(word) + encodedDigits(word));
  }

private:
  std::string zeroPad(const std::string &word) const {
    auto zerosNeeded = MaxCodeLength - word.length();
    return word + std::string(zerosNeeded, '0');
  }

  std::string head(const std::string &word) const { return word.substr(0, 1); }

  std::string encodedDigits(const std::string &word) const {
    if (word.length() > 1)
      return encodedDigit();
    return "";
  }

  std::string encodedDigit() const { return "1"; }
};

#endif