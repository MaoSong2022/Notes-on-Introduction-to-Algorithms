#include <vector>

namespace Sort {
    /**
     * @brief make sure the root value is "smaller" than its children and successors.
     *        will call itself recursively until the whole tree satisfy the above requirements.
     * @tparam T :type of elements in array
     * @tparam compare [optional]: exact meaning of "smaller"
     * @param array : the array to maintain
     * @param index : the index of root
     * @param size  : the range of array, may not equal to the size of array
     */
    template<typename T, typename compare = std::less<T> >
    void heapify(std::vector<T> &array, int index, int size) {
        int max_index = index;

        if (2 * index + 1 < size && compare()(array[index], array[2 * index + 1])) {
            max_index = 2 * index + 1;
        }
        if (2 * index + 2 < size && compare()(array[max_index], array[2 * index + 2])) {
            max_index = 2 * index + 2;
        }
        if (max_index == index) {
            return;
        }
        std::swap(array[index], array[max_index]);
        heapify(array, max_index, size);
    }

    /**
     * @brief sort the array with heap sort method
     *
     * @tparam T : type of elements in array
     * @tparam compare [optional] : comparator, small root if not given
     * @param array : the array to sort
     */
    template<typename T = int, typename compare = std::less<T> >
    void heap_sort(std::vector<T> &array) {
        int n = array.size();
        // build heap
        for (int i = n / 2; i >= 0; --i) {
            heapify<T, compare>(array, i, n);
        }
        // sort
        for (int i = n - 1; i >= 1; --i) {
            std::swap(array[0], array[i]);
            heapify<T, compare>(array, 0, i);
        }
    }
}