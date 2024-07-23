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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode* temp=head;
        int i=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            i++;
        }
        
        if(head->next==NULL) 
        {
            head=NULL;
            return head;
        }
        //piche se agar 2nd node delete krna h  to fast to initially 2+1 steps aage le jao.
        //phir ussi position se fast ko ek ek node aage le jao and slow ko head se aage le jao.
        //jb fast NULL pe pahunch jayega tb slow delete krne wala node se ek phle pe hoga.
        
        
       else if(head->next->next==NULL && n==2)
        {
           head=head->next;
           return head;
        }
        else if(n==i)
        {
            head=head->next;
           return head;
        }
        else {
        ListNode *slow=head;
        ListNode *fast=head;
        for(int i=1;i<=n+1;i++)
        {
            fast=fast->next;
            
        }
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
        }
    }
};