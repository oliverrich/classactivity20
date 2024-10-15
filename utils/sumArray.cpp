//
// Created by xxtex on 10/14/2024.
//

#include "sumArray.hpp"

int sumArray(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}