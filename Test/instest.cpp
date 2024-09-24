
#include <catch2/catch.hpp>
#include <Project2/insertion_sort.h>
#include <Project2/insertion_sort.cpp>
TEST_CASE("InsSort Test") {
    int arr1[] = { 7, 2, 5, 1, 8, 3 };
    int n1 = 6;
    inssort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 4, 3, 9, 2, 1 };
    int n2 = 5;
    inssort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 10, 5, -3, 6, 2, 1 };
    int n3 = 6;
    inssort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}