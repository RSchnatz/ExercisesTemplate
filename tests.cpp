// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "aufgaben.hpp" // student implementations

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[example]")
{
    REQUIRE(add(0,0) == 0);
    REQUIRE(add(-1,2) == 1);
    REQUIRE(add(2,-1) == 1);
    REQUIRE(add(1,1) == 2);
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Ex2", "[example]")
{
    REQUIRE(mul(0,0) == 0);
    REQUIRE(mul(1,0) == 0);
    REQUIRE(mul(2,2) == 4);
    REQUIRE(mul(-2,-2) == 4);
    REQUIRE(mul(-2,2) == -4); 
}

