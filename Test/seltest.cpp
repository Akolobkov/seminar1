#include <catch2/catch.hpp>
#include <Project2/selection_sort.h>
#include <Project2/selection_sort.cpp>
TEST_CASE("SelSort Test") {
    int arr1[] = { 7 };
    int n1 = 1;
    selsort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 4, 3, 9, 2, 1, -1, 10, 1777 };
    int n2 = 8;
    selsort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { -10, -5, -3, -6, -2, -1 };
    int n3 = 6;
    selsort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}