#include <gtest/gtest.h>

#include "my_add.hpp"


TEST(Add, Simple) {
    EXPECT_EQ(my_add(2, 2), 4);
    EXPECT_EQ(my_add(7, 5), my_add(5, 7));
    EXPECT_EQ(my_add(-3, 0), -3);

    // EXPECT_NEAR(0.1 + 0.1 + 0.1, 0.3, 1e-7);

}