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
        int cnt=0;
        ListNode *temp=new ListNode();
        temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int mid=(cnt/2)+1,i=1;
        temp=head;
        while(i<mid){
            temp=temp->next;
            i++;
        }
        head=temp;
        return head;
    }
};
