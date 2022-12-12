//
// Created by mao song on 2022/12/12.
//

#include <vector>

#include <gtest/gtest.h>

#include "merge_sort.hpp"
#include "quick_sort.hpp"
#include "heap_sort.hpp"

TEST(SORT, QuickSort){
    std::vector<int> array{5, 4, 3, 8, 6, 2, 1, 9, 7, 0};
    std::vector<int> result{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Sort::quick_sort(array);

    ASSERT_EQ(result.size(), array.size()) << "Vectors result and array are of unequal length";

    for (int i = 0; i < result.size(); ++i) {
        EXPECT_EQ(result[i], array[i]) << "Vectors result and array differ at index " << i;
    }
};

TEST(SORT, HeapSort){
    std::vector<int> array{5, 4, 3, 8, 6, 2, 1, 9, 7, 0};
    std::vector<int> result{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Sort::heap_sort(array);

    ASSERT_EQ(result.size(), array.size()) << "Vectors result and array are of unequal length";

    for (int i = 0; i < result.size(); ++i) {
        EXPECT_EQ(result[i], array[i]) << "Vectors result and array differ at index " << i;
    }
};

TEST(SORT, MergeSort){
    std::vector<int> array{5, 4, 3, 8, 6, 2, 1, 9, 7, 0};
    std::vector<int> result{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Sort::merge_sort(array);

    ASSERT_EQ(result.size(), array.size()) << "Vectors result and array are of unequal length";

    for (int i = 0; i < result.size(); ++i) {
        EXPECT_EQ(result[i], array[i]) << "Vectors result and array differ at index " << i;
    }
};

