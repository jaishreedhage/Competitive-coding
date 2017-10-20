/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode *t = A, *prev = A, *mid = A, *rev = NULL, *temp;
    while(t!=NULL && t->next!=NULL && mid!=NULL && mid->next!=NULL && mid->next->next!=NULL){
        prev = t;
        mid = mid->next->next;
        t = t->next;
    }
    if(mid->next!=NULL && mid->next->next==NULL){
        prev = t;
        t = t->next;
    }
    while(t!=NULL){
        temp = t->next;
        t->next = rev;
        rev = t;
        t = temp;
    }
    prev->next = rev;
    t = A;
    while(rev!=NULL && t!=prev->next){
        if(rev->val!=t->val)
            return 0;
        rev = rev->next;
        t = t->next;
    }
    return 1;
}
//initially when i had first seen this qsn, i didnt get the logic
//but after 2 weeks when i saw the qsn now, I got the soln immediately
