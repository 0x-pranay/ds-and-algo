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

	void insert(int index, int item)
	{
		if (index >= size)
		{
			cout << "Error: Index out of bound" << endl;
			return;
		}
		int temp2 = item;
		int temp;
		for (int i = index; i < size; i++)
		{
			temp = *(data + i);
			*(data + i) = temp2;
			temp2 = temp;
		}
		push_back(temp2);
		return;
	}

	void prepend(int item)
	{
		insert(0, item);
		return;
	}

	int pop()
	{
		int last_elem = *(data + size - 1);
		size--;
		return last_elem;
	}

	void del(int index)
	{
		for (int i = index; i < size; i++)
		{
			*(data + i) = *(data + i + 1);
		}
		size--;
		return;
	}

	// todo:
	// del(index) remove an item at the given index
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

	v.insert(0, 100);
	v.display();
	v.insert(0, 200);
	v.display();
	v.prepend(300);
	v.display();
	cout << v.pop() << endl;
	v.display();
	v.del(0);
	v.display();
	return 0;
}