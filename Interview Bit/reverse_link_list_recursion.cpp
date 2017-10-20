/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode *A,ListNode *temp){
    if(A==NULL){
        return temp;
    }
    else{
        ListNode *t = A->next;
        A->next = temp;
        temp = A;
        reverse(t,temp);
    }
}
ListNode* Solution::reverseList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    static ListNode *temp,*t2=NULL;
    temp = reverse(A,t2);
    return temp;
}

//easy qsn
