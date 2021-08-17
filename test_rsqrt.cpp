#include <gtest/gtest.h>
#include "rsqrt.hpp"

TEST(inverse_square_root, test) {
    for (float f = 0.1; f < 100; f += 0.1)
        EXPECT_FLOAT_EQ(fast_rsqrt(f), rsqrt(f));
}