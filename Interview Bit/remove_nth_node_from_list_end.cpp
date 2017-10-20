/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *temp = A;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    if(B>=count && count>0)
        return A->next;
    else if(B>count && count<=0)
        return NULL;
    else{
        temp = A;
        ListNode *prev = A;
        int n=1;
        while(temp!=NULL){
            if(n==count-B+1){
                // cout<<"**"<<endl;
                prev->next = temp->next;
                return A;
            }
            else{
                prev = temp;
                temp = temp->next;
                n++;
            }
        }
    }
}

//easy  
