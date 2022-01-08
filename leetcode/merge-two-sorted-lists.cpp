// https://leetcode.com/problems/merge-two-sorted-lists/

#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
	ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
	{
		ListNode *result = NULL;
		ListNode *ptr1 = list1;
		ListNode *ptr2 = list2;
		ListNode *ptr;

		while (ptr1 != NULL && ptr2 != NULL)
		{
			if (result == NULL) // handle first node
			{
				if (ptr1->val <= ptr2->val)
				{
					cout << "HERE-1" << endl;
					result = new ListNode(ptr1->val);
					ptr1 = ptr1->next; //inc ptr1
				}
				else
				{
					result = new ListNode(ptr2->val);
					ptr2 = ptr2->next;
				}
				ptr = result;
			}
			else
			{
				if (ptr1->val <= ptr2->val)
				{
					ptr->next = new ListNode(ptr1->val);
					ptr1 = ptr1->next;
				}
				else
				{
					ptr->next = new ListNode(ptr2->val);
					ptr2 = ptr2->next;
				}
				ptr = ptr->next;
			}
		}
		if (ptr1 == NULL && ptr2 != NULL)
		{
			if (result == NULL)
			{
				result = ptr2;
			}
			else
			{
				ptr->next = ptr2;
			}
		}
		if (ptr2 == NULL && ptr1 != NULL)
		{
			if (result == NULL)
			{
				result = ptr1;
			}
			else
			{
				ptr->next = ptr1;
			}
		}
		return result;
	}

	ListNode *createList(int arr[], int size)
	{
		cout << "Creating a linked list from array of size: " << size << endl;
		ListNode *head = NULL;
		ListNode *ptr;

		for (int i = 0; i < size; i++)
		{
			if (i == 0)
			{
				head = new ListNode(arr[i]);
				ptr = head;
			}
			else
			{
				ptr->next = new ListNode(arr[i]);
				ptr = ptr->next;
			}
		}
		return head;
	}

	void display(ListNode *head)
	{
		if (head == NULL)
		{
			cout << "empty list" << endl;
			return;
		}
		ListNode *ptr = head;
		while (ptr != NULL)
		{
			cout << ptr->val << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}
};

int main()
{
	Solution sol;
	// sol.mergeTwoLists()
	int list1[] = {1, 2, 5, 10, 100};
	int list2[] = {1, 4, 8};

	ListNode *linkedList1 = sol.createList(list1, sizeof(list1) / sizeof(int));
	sol.display(linkedList1);
	ListNode *linkedList2 = sol.createList(list2, sizeof(list2) / sizeof(int));
	sol.display(linkedList2);

	ListNode *result = sol.mergeTwoLists(linkedList1, linkedList2);
	sol.display(result);
}