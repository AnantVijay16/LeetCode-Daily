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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        else if(head->next==NULL) return head;
        else if(head->next->next==NULL) return head;
        else
        {
            ListNode *slow=head->next;
            ListNode *temp2=slow;
            ListNode *fast=head;
            ListNode *temp1=head;
            ListNode *temp=head;
            ListNode *anant=head->next;
            
            int i=0;
            while(temp!=NULL)
            {
                temp=temp->next;
                i++;
            }
            if(i%2!=0)
            {
                 fast=fast->next->next;
                    temp1=fast;
                    head->next=fast;
                slow=slow->next->next;
                temp2->next=slow;
                temp2=slow;
                while(fast->next!=NULL)
                {
                    fast=fast->next->next;
                    temp1->next=fast;
                    temp1=fast;
                    slow=slow->next->next;
                    temp2->next=slow;
                    temp2=slow;
                }
                fast->next=anant;
                return head;
            }
            else{
            fast=fast->next->next;
                    temp1=fast;
                    head->next=fast;
                slow=slow->next->next;
                temp2->next=slow;
                temp2=slow;
                while(slow->next!=NULL)
                {
                    fast=fast->next->next;
                    temp1->next=fast;
                    temp1=fast;
                    slow=slow->next->next;
                    temp2->next=slow;
                    temp2=slow;
                    
                }
                fast->next=anant;
                return head;
            }
        }
    }
};