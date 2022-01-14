#include <iostream>

using namespace std;

class MyVector
{

public:
	int size;
	int capacity;
	int *data;

	MyVector()
	{
		cout << "MyVector class is initialized" << endl;
		size = 0;
		capacity = 1;
		data = (int *)malloc(sizeof(int));
		cout << "Array created." << endl;
	}

	int push_back(int x)
	{
		if (size < capacity)
		{
			*(data + size) = x;
		}
		else
		{
			int *temp = (int *)malloc(sizeof(int) * capacity * 2);
			// copy items from old arry into new array
			for (int i = 0; i < size; i++)
			{
				*(temp + i) = *(data + i);
			}
			free(data);
			*(temp + size) = x;
			data = temp;
			capacity *= 2;
			// free(temp);
		}

		size++;
		return size;
	}
	void display()
	{
		for (int i = 0; i < size; i++)
		{
			cout << *(data + i) << ", ";
		}
		cout << endl;
	}

	bool isEmpty()
	{
		if (size > 0)
			return true;
		return false;
	}

	int at(int index)
	{
		if (index <= size)
		{
			return *(data + index);
		}
		cout << "Index out of bound. TODO throw an error";
		return 0;
	}

	// todo:
	// insert(index, item)
	// prepend(item) insert item at index 0
	// pop() remove from end and return that value
	// delete(index) remove an item at the given index
	// remove(item) - looks for that items and removes at multiple places
	// find(item) - looks for that item and returns the first index, -1 if not found;
};

int main()
{
	MyVector v;
	v.push_back(10);
	v.display();
	cout << "v.size: " << v.size << endl;
	cout << "v.capacity " << v.capacity << endl;
	v.push_back(20);
	v.display();
	cout << "v.size: " << v.size << endl;
	cout << "v.capacity " << v.capacity << endl;
	v.push_back(30);
	v.display();
	cout << "v.size: " << v.size << endl;
	cout << "v.capacity " << v.capacity << endl;
	v.push_back(40);
	cout << "v.size: " << v.size << endl;
	cout << "v.capacity " << v.capacity << endl;
	v.display();
	return 0;
}