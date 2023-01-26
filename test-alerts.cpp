#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
  REQUIRE(inferBreach(26, 19, 45) == NORMAL);
  REQUIRE(inferBreach(45, 20, 35) == TOO_HIGH);
  REQUIRE(inferBreach(28, 25, 40) == NORMAL);
  REQUIRE(inferBreach(8, 20, 45) == TOO_LOW);
  REQUIRE(inferBreach(62, 25, 35) == TOO_HIGH);
}
