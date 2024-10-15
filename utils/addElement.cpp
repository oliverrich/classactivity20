//
// Created by xxtex on 10/14/2024.
//
#include "resizeArray.hpp"

#include "addElement.hpp"
void addElement(int*& array, int& currentSize, int& maxSize, int input) {
    if (currentSize == maxSize) {
        resizeArray(array, maxSize);
    }
    array[currentSize] = input;
    currentSize++;
}