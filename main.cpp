#include <iostream>
using namespace std;


int main(){
    int* intArray = nullptr;
    int currentSize = 0;
    int maxSize = 1;
    int input;


    intArray = new int[maxSize];

    cout << "Enter values for the array (enter anything but an integer to stop):" << endl;


    while (cin >> input) {

        if (currentSize == maxSize) {
            // Double the capacity
            maxSize *= 2;


            int* tempArray = new int[maxSize];


            for (int i = 0; i < currentSize; i++) {
                tempArray[i] = intArray[i];
            }


            delete[] intArray;


            intArray = tempArray;
        }


        intArray[currentSize] = input;
        currentSize++;
    }


    int sum = 0;
    for (int i = 0; i < currentSize; i++) {
        sum += intArray[i];
    }

    cout << "The sum of the array is: " << sum << endl;


    delete[] intArray;

    return 0;
}
