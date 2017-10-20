/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *temp1 = A,*temp2 = B,*C=NULL,*head;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val<temp2->val){
            if(C==NULL){
                C = temp1;
                head = C;
            }
            else{
                C->next = temp1;
                C = temp1;
            }
            temp1 = temp1->next;
        }
        else{
            if(C==NULL){
                C = temp2;
                head = C;
            }
            else{
                C->next = temp2;
                C = temp2;
            }
            temp2 = temp2->next;
        }
    }
    while(temp1!=NULL){
        if(C==NULL){
            C = temp1;
            head = C;
        }
        else{
            C->next = temp1;
            C = temp1;
        }
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        if(C==NULL){
            C = temp2;
            head = C;
        }
        else{
            C->next = temp2;
            C = temp2;
        }
        temp2 = temp2->next;
    }
    return head;
}

//lame qsn
