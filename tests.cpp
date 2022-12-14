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

TEST_CASE("sumArray"){
	int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
	CHECK(sumArray(arr,size)==43);
	CHECK(sumArray(arr,5)==34);
	
	delete[] arr;
}

TEST_CASE("isAlphanumeric"){
CHECK(isAlphanumeric("ABCD")==true);
CHECK(isAlphanumeric("Abcd1234xyz")==true);
CHECK(isAlphanumeric("KLMN 8-7-6")==false);
}