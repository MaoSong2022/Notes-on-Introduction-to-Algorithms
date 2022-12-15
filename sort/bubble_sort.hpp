//
// Created by Mao Song on 2022/12/15.
//

#ifndef NOTES_ON_INTRODUCTION_TO_ALGORITHMS_BUBBLE_SORT_HPP
#define NOTES_ON_INTRODUCTION_TO_ALGORITHMS_BUBBLE_SORT_HPP

#include <vector>

namespace Sort{
    /**
     * @brief sort the array with bubble sort method
     *
     * @tparam T : type of elements in array
     * @tparam compare [optional] : comparator, increasing order if not given
     * @param array : the array to sort
     */
    template<typename T = int, typename compare = std::less<T>>
    void bubble_sort(std::vector<T> &array) {
        int n = array.size();
        for (int i = 0; i < n; ++i){
            for (int j = n - 1; j > i; --j){
                if (compare()(array[j], array[j - 1])){
                    std::swap(array[j], array[j - 1]);
                }
            }
        }
    }
}

#endif //NOTES_ON_INTRODUCTION_TO_ALGORITHMS_BUBBLE_SORT_HPP
