#include <catch2/catch.hpp>
#include <Project2/bubble_sîrt.h>
TEST_CASE("Bubsort Test") {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = 7;
    bubsort(n, arr);
    for (int i = 0; i < n - 1; i++) {
        REQUIRE(arr[i] <= arr[i + 1]);
    }
    double arr2[] = { 3, 7, 2, 9, 1 };
    int n2 = 5;
    bubsort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }
    int arr3[] = { 1, 1, 1, 1, 1 };
    int n3 = 5;
    bubsort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}