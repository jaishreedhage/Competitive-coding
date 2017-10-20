/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *t1=A->next,*t2,*t3,*t4=A,*t5;
    while(t1!=NULL){
        t5 = t1->next;
        t2 = A;
        t3 = NULL;
        int flag=0;
        while(t2!=t1){
            if(t2->val > t1->val){
                flag=1;
                if(t3==NULL){
                    t1->next = t2;
                    t4->next = t5;
                    A = t1;
                }
                else{
                    t3->next = t1;
                    t1->next = t2;
                    t4->next = t5;
                }
                break;
            }
            else{
                t3 = t2;
                t2 = t2->next;
            }
        }

        if(flag==1){
            t1 = t5;
        }
        else{
            t4 = t1;
            t1 = t5;
        }
    }
    return A;
}

//lame qsn
