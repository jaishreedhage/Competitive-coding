/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *temp = A,*temp2 = A->next,*t3 = NULL;
    while(temp!=NULL && temp2!=NULL && temp2->next!=NULL){
        if(temp->val == temp2->val){
            t3 = temp;
            break;
        }
        else{
            temp=temp->next;
            temp2 = temp2->next->next;
        }
    }
    if(t3 == NULL)
        return t3;
    temp = A;
    temp2 = t3;
    int count = 1;
    while(temp2->next->val!=t3->val){
        temp2 = temp2->next;
        count++;
    }
    int lc = 0;
    while(lc<count){
        lc++;
        temp = temp->next;
    }
    temp2 = temp;
    temp = A;
    while(temp->val!=temp2->val){
        temp = temp->next;
        temp2 = temp2->next;
    }
    return temp;
}

//I knew how to detect cycle but i had no clue how to remove it. I saw g4g and learnt it and then did it here.
//Most important thing is "k nodes after head", I went wrong here 
