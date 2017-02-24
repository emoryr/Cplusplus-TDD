class Soundex {};

#include <gtest/gtest.h>

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) { Soundex soundex; }

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
