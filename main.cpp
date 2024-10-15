#include <iostream>
using namespace std;


int main(){
    int* intArray = new int[1];
    int currentSize = 0;
    int maxSize = 1;
    int input;

    cout << "Enter values for the array (enter anything but an integer to stop):" << endl;

    while (cin >> input) {
        addElement(intArray, currentSize, maxSize, input);
    }

    int sum = sumArray(intArray, currentSize);
    cout << "The sum of the array is: " << sum << endl;

    delete[] intArray;
    return 0;
}
