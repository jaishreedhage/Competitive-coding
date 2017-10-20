/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *temp=A,*temp_next;
    while(temp!=NULL){
        // cout<<temp->val<<endl;
        temp_next = temp->next;
        while(temp_next!=NULL && temp_next->val == temp->val)
            temp_next = temp_next->next;
        temp->next = temp_next;
        temp = temp->next;
    }
    return A;
}

//easy qsn
