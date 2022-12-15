//
// Created by mao song on 2022/12/12.
//

#include <vector>

#include <gtest/gtest.h>

#include "merge_sort.hpp"
#include "quick_sort.hpp"
#include "heap_sort.hpp"
#include "selection_sort.hpp"
#include "bubble_sort.hpp"


class SortTest : public ::testing::Test {
public:
    std::vector<int> original_array;
    std::vector<int> reuse_array;
    std::vector<int> array_increase;
    std::vector<int> array_decrease;

protected:
    void SetUp() override {
        original_array = {5, 4, 3, 8, 6, 2, 1, 9, 7, 0};
        reuse_array = original_array;
        array_increase = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        array_decrease = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    }
};


TEST_F(SortTest, QuickSort) {
    Sort::quick_sort(reuse_array);
    ASSERT_EQ(array_increase.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_increase.size(); ++i) {
        EXPECT_EQ(array_increase[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;

    Sort::quick_sort<int, std::greater<int>>(reuse_array);
    ASSERT_EQ(array_decrease.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_decrease.size(); ++i) {
        EXPECT_EQ(array_decrease[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;
};

TEST_F(SortTest, HeapSort) {
    Sort::heap_sort(reuse_array);
    ASSERT_EQ(array_increase.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_increase.size(); ++i) {
        EXPECT_EQ(array_increase[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;

    Sort::heap_sort<int, std::greater<int>>(reuse_array);
    ASSERT_EQ(array_decrease.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_decrease.size(); ++i) {
        EXPECT_EQ(array_decrease[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;
};

TEST_F(SortTest, MergeSort) {
    Sort::merge_sort(reuse_array);
    ASSERT_EQ(array_increase.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_increase.size(); ++i) {
        EXPECT_EQ(array_increase[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;

    Sort::merge_sort<int, std::greater<int>>(reuse_array);
    ASSERT_EQ(array_decrease.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_decrease.size(); ++i) {
        EXPECT_EQ(array_decrease[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;
};

TEST_F(SortTest, SelectionSort) {
    Sort::selection_sort(reuse_array);
    ASSERT_EQ(array_increase.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_increase.size(); ++i) {
        EXPECT_EQ(array_increase[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;

    Sort::selection_sort<int, std::greater<int>>(reuse_array);
    ASSERT_EQ(array_decrease.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_decrease.size(); ++i) {
        EXPECT_EQ(array_decrease[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;
};

TEST_F(SortTest, BubbleSort) {
    Sort::bubble_sort(reuse_array);
    ASSERT_EQ(array_increase.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_increase.size(); ++i) {
        EXPECT_EQ(array_increase[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;

    Sort::bubble_sort<int, std::greater<int>>(reuse_array);
    ASSERT_EQ(array_decrease.size(), reuse_array.size()) << "Vectors result and array are of unequal length";
    for (int i = 0; i < array_decrease.size(); ++i) {
        EXPECT_EQ(array_decrease[i], reuse_array[i]) << "Vectors result and array differ at index " << i;
    }
    reuse_array = original_array;
};

