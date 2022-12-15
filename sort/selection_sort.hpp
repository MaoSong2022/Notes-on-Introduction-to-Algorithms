//
// Created by Mao Song on 2022/12/15.
//

#ifndef NOTES_ON_INTRODUCTION_TO_ALGORITHMS_SELECTION_SORT_HPP
#define NOTES_ON_INTRODUCTION_TO_ALGORITHMS_SELECTION_SORT_HPP

#include <vector>

namespace Sort {
    /**
     * @brief sort the array with selection sort method
     *
     * @tparam T : type of elements in array
     * @tparam compare [optional] : comparator, increasing order if not given
     * @param array : the array to sort
     */
    template<typename T = int, typename compare = std::less<T>>
    void selection_sort(std::vector<T> &array) {
        int n = array.size();
        for (int i = 0; i < n; ++i) {
            T min_val = array[i];
            int index = i;
            for (int j = i + 1; j < n; ++j) {
                if (compare()(array[j], min_val)) {
                    index = j;
                    min_val = array[j];
                }
            }
            std::swap(array[i], array[index]);
        }
    }
}

#endif //NOTES_ON_INTRODUCTION_TO_ALGORITHMS_SELECTION_SORT_HPP
