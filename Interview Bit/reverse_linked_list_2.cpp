/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *t1,*t2,*t3,*t4,*t5,*t6,*t7,*t8=A;
    if(m==n)
        return A;
    int count = 1;
    t1 = A;
    t2 = NULL;
    while(t1!=NULL){
        if(count==m){
            t3 = t1;
            t4 = t2;
        }
        else if(count == n){
            t5 = t1;
            t6 = t1->next;
            break;
        }
        count++;
        t2 = t1;
        t1 = t1->next;


    }
    t1 = t3->next;
    t3->next = t6;
    while(t1!=t6){
        t7 = t1->next;
        t1->next = t3;
        t3 = t1;
        t1=t7;
    }
    if(t4==NULL)
        return t3;
    else{
        t4->next = t3;
    }
    return t8;
}

//nice qsn. but for me it was easy only
