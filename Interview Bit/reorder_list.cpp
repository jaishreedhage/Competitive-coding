/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *t1,*t2,*t3,*t4=NULL,*t5,*t6;
    t1 = A;
    int flag=0,count=0;
    while(t1!=NULL){
        count++;
        t1 = t1->next;
    }
    if(count<=2)
        return A;
    int c = count/2 + 1;
    count=1;
    t1 = A;
    while(t1!=NULL){
        if(c-1==count){
            t2 =t1;
            flag=1;
            t1 = t1->next;
            count++;
            continue;
        }
        if(flag==1){
            t3 = t1->next;
            t1->next = t4;
            t4 = t1;
            t1=t3;
            count++;
            continue;
        }
        count++;
        t1 = t1->next;
    }
    t1 = A;
    t2->next = t4;
    t6 = t4;
    t2 = NULL;
    while(t1!=t4 && t6!=NULL){
        t3 =t1->next;
        t5 = t6->next;
        t1->next = t6;
        if(t2==NULL)
            t2 = t6;
        else{
            t2->next = t1;
            t2 = t6;
        }
        t1=t3;
        t6=t5;
    }
    return A;

}

//good qsn. Initially the complexity of my soln was a lot. I did this qsn myself on thinking more 
