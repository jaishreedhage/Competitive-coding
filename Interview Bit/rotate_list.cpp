/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *temp=A,*temp3,*temp2;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    B = B%count;
    if(B==0)
        return A;
    B = count - B;
    temp = A;
    int i=1;
    while(i<=B){
        if(i==B){
            temp2 = temp->next;
            temp->next = NULL;
            temp3 = temp2;
            while(temp2->next!=NULL){
                temp2 = temp2->next;
            }
            temp2->next = A;
            return temp3;
        }
        i++;
        temp = temp->next;
    }
}
//easy qsn, took time as i got confused with the syntax :P
