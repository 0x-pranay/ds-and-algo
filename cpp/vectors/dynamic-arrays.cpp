#include <iostream>
using namespace std;

/**
 * @brief Implementing a vector
 * 	Using array to implement a vector<int>
 *  - size() : get size of the dynamic array. 
 *  - max_size(): returns the max size a vector can hold.
 * 	- bool empty() : returns true if empty. 
 *  - void push_back(int): add an element at the end of the array.
 *  - void pop_back(): remove element at the end of the array. 
 *  - display(): Display all elements in a array.
 * 
 * @return int 
 */

class MyVector {
public:
    int* arr = new int[1];
    int max_size = 1;
    int size = 0;

    void push_back(int x)
    {
        if (size + 1 < max_size) {
            arr[size] = x;
            size++;
        } else {
            // create a new array with double the size and copy all elements from old array.
            int* temp = new int[2 * max_size];
            for (int i = 0; i < size; i++) {
                temp[i] = arr[i];
            }
            temp[size] = x;
            arr = temp;
            max_size = 2 * max_size;
            size++;
        }
    }

    void display()
    {
        cout << "size: " << size << ", max_size: " << max_size << ", Array: [";
        for (int i = 0; i < size; i++) {
            cout << *(arr + i) << ", ";
        }
        cout << "]" << endl;
    }
};

int main()
{
    MyVector dArray;
    dArray.push_back(10);
    dArray.display();
    dArray.push_back(11);
    dArray.display();
    dArray.push_back(12);
    dArray.display();
    dArray.push_back(13);
    dArray.display();
}