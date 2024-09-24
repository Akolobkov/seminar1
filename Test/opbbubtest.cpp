
#include <catch2/catch.hpp>
#include <Project2/optimized_bubble_sort.cpp>
#include <Project2/optimized_bubble_sort.h>
TEST_CASE("OpBubSort Test") {
    int arr1[] = { 7, -2, 5, -1, 8, -3 };
    int n1 = 6;
    opbubsort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 4, 4 };
    int n2 = 2;
    opbubsort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 10, -5, 3, 6, 2, 1, 0, 0, 0, 0 };
    int n3 = 10;
    opbubsort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}