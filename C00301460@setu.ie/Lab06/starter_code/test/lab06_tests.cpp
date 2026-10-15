// Lab 06 - Logic coverage: predicate, clause, fixtures, gcov
// Name  :
// Student ID:
//
// The unit under test is Discount::eligible in src/discount.cpp. 
// The predicate is:
//     (isMember && spendOverThreshold) || hasCoupon


#include <gtest/gtest.h>
#include "discount.hpp"

class DiscountFixture : public ::testing::Test {
protected:
    Discount d;   // fresh instance per test
};

// 
// Row 01: a coupon alone makes the customer eligible.
TEST_F(DiscountFixture, WorkedExample_CouponAlone) {
    EXPECT_TRUE(d.eligible(false, false, true)); // This is row 2!
}

// TODO(Task 2 - predicate coverage): add ONE more test so the suite has at
// least one row where the predicate is false and one where it is true.
TEST_F(DiscountFixture, PredicateCoverage_FalseRow) {
    EXPECT_FALSE(d.eligible(false, false, false)); // This is row 1!
}

// TODO(Task 3 - clause coverage): add tests so that isMember,
// spendOverThreshold and hasCoupon each take the value true in some test and
// false in some test. State in your report which rows you used.
TEST_F(DiscountFixture, ClauseCoverage_Rows) {
    EXPECT_FALSE(d.eligible(true, false, false)); // This is row 5!
    EXPECT_FALSE(d.eligible(false, false, false)); // This is row 1!
    EXPECT_FALSE(d.eligible(false, true, false)); // This is row 3!
    EXPECT_TRUE(d.eligible(true, true, false)); // This is row 7!
    EXPECT_TRUE(d.eligible(false, false, true)); // This is row 2!
    
}

// TODO(Task 3 - continued): add the rows that make (isMember &&
// spendOverThreshold) true with no coupon, and isMember true with
// spendOverThreshold false. These complete branch coverage of the && and ||.
TEST_F(DiscountFixture, ClauseCoverage_Rows_2) {
    EXPECT_TRUE(d.eligible(true, false, true)); // This is Row 6!
}