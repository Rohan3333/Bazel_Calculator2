#include"gtest/gtest.h"
#include"Addition.h"
#include"Sub.h"
#include"Mul.h"
#include"Div.h"



TEST(CalculatorTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
}


TEST(CalculatorTest, Sub) {
    EXPECT_EQ(subs(10, 3), 7);
}


TEST(CalculatorTest, Div) {
    EXPECT_EQ(divi(6, 3), 2);
}


TEST(CalculatorTest, Mul) {
    EXPECT_EQ(multi(2, 3), 6);
}
 

 
 