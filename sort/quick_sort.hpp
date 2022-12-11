//
// Created by Mao Song on 2022/12/11.
//

#ifndef NOTES_ON_INTRODUCTION_TO_ALGORITHMS_QUICK_SORT_HPP
#define NOTES_ON_INTRODUCTION_TO_ALGORITHMS_QUICK_SORT_HPP

#include <vector>
#include <random>

namespace Sort {
    template<typename T, typename compare = std::less<T>>
    int partition(std::vector<int> &array, int left, int right) {
        int pivot = array[right];
        int i = left - 1;
        for (int j = left; j < right; ++j) {
            if (compare()(array[j], pivot)) {
                ++i;
                std::swap(array[i], array[j]);
            }
        }
        std::swap(array[i + 1], array[right]);
        return i + 1;
    }

    template<typename T, typename compare = std::less<T>>
    int randomized_partition(std::vector<int> &array, int left, int right) {
        int index = left + std::rand() % (right - left + 1);
        std::swap(array[index], array[right]);
        partition<T, compare>(array, left, right);
    }

    template<typename T, typename compare = std::less<T>>
    void quick_sort(std::vector<int> &array, int left, int right) {
        if (left < right) {
            int index = partition<T, compare>(array, left, right);
            quick_sort<T, compare>(array, left, index - 1);
            quick_sort<T, compare>(array, index + 1, right);
        }
    }

    template<typename T = int, typename compare = std::less<T>>
    void quick_sort(std::vector<int> &array) {
        int n = array.size();
        quick_sort<T, compare>(array, 0, n - 1);
    }
} // namespace Sort

#endif // NOTES_ON_INTRODUCTION_TO_ALGORITHMS_QUICK_SORT_HPP
