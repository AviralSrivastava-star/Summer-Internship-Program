Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

 

Example 1:


Input: head = [1,2,3,4]
Output: [2,1,4,3]
Example 2:

Input: head = []
Output: []
Example 3:

Input: head = [1]
Output: [1]
 

Constraints:

The number of nodes in the list is in the range [0, 100].
0 <= Node.val <= 100
  
  
  
  
  
  
  class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *p1,*p2,*p3;
        if(head==NULL || head->next==NULL){
            return head;
        }
        p1=head;
        p2=p1->next;
        p3=p2->next;
        p2->next=p1;
        p1->next=swapPairs(p3);
        return p2;
    }
};
