#include <RotaryEncoder.h>
#include "gtest/gtest.h"

TEST(RotaryEncoderTest, getValue) {
  RotaryEncoder* encoder = new RotaryEncoder(0,0,NULL);
  encoder->setValue(5);
  EXPECT_EQ(5, encoder->getValue());
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
