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
    ListNode* middleNode(ListNode* head) {
        int count=0,middle=0,start=0;
        struct ListNode* middle_ptr;
        middle_ptr=head;
        while(head!=nullptr)
        {
            head=head->next;
            count+=1;
        }
        if(count%2!=0)
        {
            middle=(count-1)/2;
        }
        else
        {
            middle=count/2;
        }
        start=0;
        while(start<middle)
        {
            middle_ptr=middle_ptr->next;
            start+=1;
        }
        return middle_ptr;
    }
};