#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <Project2/bubble_sîrt.h>
#include "Project2/bubble_sîrt.cpp"
#include <Project2/selection_sort.h>
#include <Project2/selection_sort.cpp>
#include <Project2/exchange_sort.h>
#include <Project2/exchange_sort.cpp>
#include <Project2/optimized_bubble_sort.cpp>
#include <Project2/optimized_bubble_sort.h>
#include <Project2/insertion_sort.h>
#include <Project2/insertion_sort.cpp>
TEST_CASE("Bubsort Test") {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = 7;
    bubsort(n, arr);
    for (int i = 0; i < n - 1; i++) {
        REQUIRE(arr[i] <= arr[i + 1]);
    }
    int arr2[] = { 3, 7, 2, 9, 1 };
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
TEST_CASE("ExSort") {
    int arr1[] = { 7, 2, 5, 1, 8, 3 };
    int n1 = 6;
    exsort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 4, -3, -9, -2, 1 };
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