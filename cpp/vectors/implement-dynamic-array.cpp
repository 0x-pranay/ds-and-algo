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