#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

TEST_CASE("Test can create Cards") {
    Card c1;
    CHECK(c1.suit == 0);
    CHECK(c1.rank == 0);
    Card c2(3, 4);
    CHECK(c2.suit == 3);
    CHECK(c2.rank == 4);
}

TEST_CASE("Test can render Cards") {
    Card c3(3, 12);
    CHECK(c3.to_string() == "Queen of Hearts");
    Card c4(2, 10);
    CHECK(c4.to_string() == "10 of Diamonds");
    Card c5;
    CHECK(c5.to_string() == "Joker");
}
TEST_CASE("Test == of Cards") {
    Card c1(2, 9);
    Card c2(2, 9);
    Card c3(1, 9);
    CHECK((c2 == c1) == true);
    CHECK((c3 == c2) == false);
    CHECK((c1 == c3) == false);
}

TEST_CASE("Test comparison of Cards") {
    Card c1(2, 9);
    Card c2(1, 9);
    Card c3(1, 10);
    CHECK((c2 < c1) == true);
    CHECK((c3 <= c2) == false);
    CHECK((c1 >= c3) == true);
}

