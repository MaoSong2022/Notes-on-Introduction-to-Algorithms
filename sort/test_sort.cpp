#include <vector>
#include <iostream>
#include <functional>

#include "heap_sort.hpp"

template<typename T>
void output_array(const std::vector<T> &array) {
    for (int i = 0; i < array.size(); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
};

int main() {
    std::vector<int> array{5, 4, 3, 8, 6, 2, 1, 9, 7, 0};
    std::cout << "The original array: " << std::endl;
    output_array(array);

    Sort::heap_sort(array); // increasing order, small root
//    Sort::heap_sort<int, std::greater<int>>(array); // decreasing order, big root
    std::cout << "The array after" << "heap sort" << std::endl;
    output_array(array);

    return 0;
}