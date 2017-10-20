/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *t1,*t2,*t3,*head=NULL,*t4=NULL;
    t1 = A;
    if(t1==NULL)
        return NULL;
    if(t1->next == NULL)
        return t1;
    while(t1!=NULL && t1->next!=NULL){
        t2 = t1->next;
        t3 = t2->next;
        t1->next = t3;
        t2->next = t1;
        if(head==NULL){
            head = t2;
            t4 = t1;
        }
        else{
            t4->next = t2;
        }
        t4 = t1;
        t1 = t1->next;
    }
    return head;
}

//easy
