Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

 

Example 1:


Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: l1 = [], l2 = []
Output: []
Example 3:

Input: l1 = [], l2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both l1 and l2 are sorted in non-decreasing order.
  
  
  
  
  class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode temp(0);    //made a new node with value 0
        ListNode* l3=&temp;   // made a pointer that stores the head of the sorted answer list
        while(l1 != NULL && l2!= NULL)
        {
            if(l1->val < l2->val)
            {       l3->next=l1;
                    l1=l1->next;            
            }
            else
            {
                l3->next=l2;
                l2=l2->next;
            }
            l3=l3->next;
        }
		
        if(l1!=NULL)
            l3->next=l1;
        else
            l3->next=l2;
        
        return temp.next;
    }
};
