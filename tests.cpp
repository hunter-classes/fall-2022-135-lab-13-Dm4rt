#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest.h"
#include "funcs.h"

TEST_CASE("printRange"){
	CHECK("0 1 2 3 4 5"==printRange(0,5));
	CHECK("-2 -1 0 1 2 3"==printRange(-2,3));
}

TEST_CASE("sumRange"){
	CHECK(15==sumRange(0,5));
	CHECK(52==sumRange(-2,10));
}


