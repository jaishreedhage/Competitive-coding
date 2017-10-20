/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *temp = A,*prev = NULL, *t2 = NULL,*head,*t3,*prev2=NULL;
    int count = 0;
    while(temp!=NULL){
        count++;
        t3 = temp->next;
        if(count==B){
            temp->next = t2;
            if(t2 == NULL)
                prev = temp;
            t2 = temp;
            if(prev2==NULL){
                prev2 = prev;
                head = t2;
            }
            else{
                prev2->next = t2;
                prev2 = prev;
            }
            count=0;
            t2 = NULL;

        }
        else{
            temp->next = t2;
            if(t2 == NULL)
                prev = temp;
            t2 = temp;

        }
        temp = t3;
    }
    return head;
}
//simulation qsn on normal reversing of linked list
