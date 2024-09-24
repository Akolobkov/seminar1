#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <Project2/exchange_sort.h>
#include <Project2/exchange_sort.cpp>
TEST_CASE("ExSort") {
    int arr1[] = { 7, 2, 5, 1, 8, 3 };
    int n1 = 6;
    exsort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    double arr2[] = { 4, -3, -9, -2, 1 };
    int n2 = 5;
    exsort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 10, 5, 3, 6, 2, 1 };
    int n3 = 6;
    exsort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}