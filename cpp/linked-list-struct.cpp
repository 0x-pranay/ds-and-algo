#include<iostream>

// Leetcode: add-two-numbers problem

using namespace std;

struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode* insert(int val){
	struct ListNode* node = (struct ListNode*) malloc(sizeof(ListNode));
	node->val = val;
	node->next = NULL;
	return node;
}

void display(ListNode* head){
	struct ListNode* ptr = head;

	while(ptr != NULL){
		cout<< ptr->val << " ";
		ptr = ptr->next;
	}
	cout<<endl;
}

struct ListNode* sum(ListNode* l1, ListNode* l2){
	struct ListNode* res = NULL;

	struct ListNode* ptr1 = l1;
	struct ListNode* ptr2 = l2;
	struct ListNode* ptr3 = res;
	
	int carry = 0;

	while(ptr1 != NULL && ptr2 != NULL){
		int sum = ptr1->val + ptr2->val;
		if(sum >9){
			// ptr = insert(carry + sum - 10);
			sum = carry + sum - 10;
			carry = 1;
		}else{
			// ptr3->val = carry + sum;
			sum = carry + sum;
			carry = 0;
		}
		cout<<ptr1->val << " + "<< ptr2->val<<" = "<< sum <<endl;

		if(ptr3 == NULL){
			// cout<<"ptr3->next is null"<<endl;
			res = insert(sum);
			ptr3 = res;
		}else{
			ptr3->next = insert(sum);
			ptr3 = ptr3->next;
		}
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	if(ptr1 != NULL){
		cout<<"Remaining ptr1 with carry : "<<carry<<endl;
		ptr1->val = ptr1->val + carry;
		ptr3->next = ptr1;
		// display(ptr1);
	}
	if(ptr2 != NULL){
		cout << "Reaminaing ptr2 with carry" <<carry << endl;
		ptr2->val = ptr2->val + carry;
		ptr3->next = ptr2;
		// display(ptr2);
	}	
	return res;
}



int main(){
	struct ListNode* head = NULL;
	struct ListNode* l1 = NULL;
	struct ListNode* l2 = NULL;

	l1 = insert(0);
	l1->next = insert(4);
	l1->next->next = insert(3);


	l2 = insert(5);
	l2->next = insert(6);
	// l2->next->next = insert(4);

	display(l1);
	display(l2);

	head = sum(l1, l2);
	display(head);
	return 0;	
}