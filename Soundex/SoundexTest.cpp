#include <gtest/gtest.h>
#include <iostream>

class Soundex {
public:
  std::string encode(const std::string &word) const { return "A"; }
};

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
  Soundex soundex;
  auto encoded = soundex.encode("A");
  ASSERT_EQ(encoded, "A");
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
