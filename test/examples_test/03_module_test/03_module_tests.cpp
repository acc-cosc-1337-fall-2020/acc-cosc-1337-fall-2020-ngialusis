#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test menu") 
{
	REQUIRE(menu(1)=="1");
	REQUIRE(menu(2)=="2");
	REQUIRE(menu(3)=="3");
	REQUIRE(menu(4)=="4");
	REQUIRE(menu(5)=="invalid");
}


