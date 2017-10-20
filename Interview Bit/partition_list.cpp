/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *t1,*t2,*t3,*t6=NULL,*t7=NULL;
    t1 = A;
    t2 = NULL; t3 = NULL;
    while(t1!=NULL){
        if(t1->val>=B){
            if(t3==NULL){
                t3 = t1;
                t6 = t3;
                t1 = t1->next;
            }
            else{
                t3->next = t1;
                t3 = t1;
                t1 = t1->next;

            }
        }
        else{
            if(t2==NULL){
                t2 = t1;
                t7 = t2;
            }
            else{
                t2->next = t1;
                t2 = t1;
            }
            t1 = t1->next;
        }
    }
    if(t2!=NULL && t6!=NULL)
        t2->next = t6;
    if(t3!=NULL)
        t3->next = t1;
    if(t7!=NULL)
        return t7;
    return t6;
}
//simulation qsn- easy
