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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        else{
            vector<int>arr;
            int i=1;
            ListNode* temp;
            temp=head;
            while(temp!=NULL)
            {
                arr.push_back(temp->val);
                temp=temp->next;
            }
              vector<int>ans;
            int s=arr.size();
            for(int j=s-1;j>=0;j--)
            {
                ans.push_back(arr[j]);
            }
            if(ans==arr) return true;
            else return false;
            
        }
    }
};