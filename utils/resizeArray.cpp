//
// Created by xxtex on 10/14/2024.
//

#include "resizeArray.hpp"
void resizeArray(int*& array, int& maxSize) {
    maxSize *= 2;
    int* tempArray = new int[maxSize];
    for (int i = 0; i < maxSize / 2; i++) {
        tempArray[i] = array[i];
    }
    delete[] array;
    array = tempArray;
}