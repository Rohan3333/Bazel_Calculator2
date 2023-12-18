#include"gtest/gtest.h"
#include"code//Addition.h"
#include"code//Sub.h"
#include"code//Mul.h"
#include"code//Div.h"
#include"code//Merge.h"


/*
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
 
*/

TEST(CalculatorTest, merge1) {
    EXPECT_EQ(merge(2, 3,'+'), 5);
}


TEST(CalculatorTest, merge2) {
    EXPECT_EQ(merge(10, 3,'-'), 7);
}


TEST(CalculatorTest, merge3) {
    EXPECT_EQ(merge(6, 3,'/'), 2);
}


TEST(CalculatorTest, merge4) {
    EXPECT_EQ(merge(2, 3,'*'), 6);
}
 
 