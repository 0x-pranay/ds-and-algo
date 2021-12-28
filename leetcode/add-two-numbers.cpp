/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *node;
        struct ListNode* res = NULL;
        
        struct ListNode* ptr1 = l1;
        struct ListNode* ptr2 = l2;
        struct ListNode* ptr3 = res;
        
        int carry = 0;
        
        while(ptr1 != NULL || ptr2 != NULL){
            int sum = carry;
            if(ptr1 != NULL){
                sum += ptr1->val;            
            }
            if(ptr2 != NULL){
                sum += ptr2->val;    
            }
            
            if(sum <= 9){
                carry = 0;
            }else{
                sum -= 10;
                carry = 1;
            }
            
            if(ptr3 == NULL ){
                node = new ListNode(sum);
                res = node;
                ptr3 = res;
            }else{
                node = new ListNode(sum);
                ptr3->next = node;
                ptr3 = ptr3->next;  
            }
            if(ptr1 != NULL){
                ptr1 = ptr1->next;    
            }
            if(ptr2 != NULL){
                ptr2 = ptr2->next;    
            }
        }

        if(carry == 1){
            node = new ListNode(1);
            ptr3->next = node;
            ptr3 = ptr3->next;
        }
        return res;
    }
    
    void display(ListNode* head){
        struct ListNode* ptr = head;
        while(ptr != NULL){
            cout<< ptr->val << endl;
            ptr = ptr->next;
        }
    }
};