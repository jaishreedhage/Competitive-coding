/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {

    ListNode *temp = A,*t2,*prev=NULL;
    while(temp!=NULL){
        t2 = temp;
        while(t2!=NULL && t2->val == temp->val)
            t2 = t2->next;
        if(temp->next != t2){
            if(prev==NULL){
                A = t2;
                temp = t2;
                continue;
            }
            else{
                prev->next = t2;
                temp = t2;
                continue;
            }
        }
        else{
            prev = temp;
            temp = t2;
        }

    }
    return A;
}
//simulation qsn only. nothing great
