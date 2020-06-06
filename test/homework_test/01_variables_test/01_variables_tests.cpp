#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(get_sales_tax_amount(100) == 6.75);
	REQUIRE(get_tip_amount(100, .20) == 20);
	REQUIRE(get_tip_amount(100, .15) == 15);
}

