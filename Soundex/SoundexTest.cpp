#include <gtest/gtest.h>
#include <iostream>

class Soundex {
public:
  std::string encode(const std::string &word) const { return zeroPad(word); }

private:
  std::string zeroPad(const std::string &word) const { return word + "000"; }
};

class SoundexEncoding : public testing::Test {
public:
  Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
  ASSERT_EQ(soundex.encode("A"), "A000");
}

TEST_F(SoundexEncoding, PadsWithZerosToEnsureThreeDigits) {
  ASSERT_EQ(soundex.encode("I"), "I000");
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
