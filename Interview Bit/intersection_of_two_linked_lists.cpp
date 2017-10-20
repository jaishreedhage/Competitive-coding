/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {

    ListNode *temp = A, *temp2 = B;
    int m=0,n=0;

    while(temp!=NULL){
        m++;
        temp = temp->next;
    }
    while(temp2!=NULL){
        n++;
        temp2 = temp2->next;
    }
    int diff = m-n,c=0;
    if(diff>0){
        temp = A;
        while(temp!=NULL && c!=diff){
            c++;
            temp = temp->next;
        }
        temp2 = B;
    }
    else{
        temp2 = B;
        while(temp2!=NULL && c!=n-m){
            c++;
            temp2 = temp2->next;
        }
        temp = A;
    }
    while(temp!=NULL && temp2!=NULL){
        if(temp==temp2)
            return temp;
        temp = temp->next;
        temp2 = temp2->next;
    }
    return NULL;
}

//see what I did initially was that I used O(n^2) where each element of A was scanned through whole of B
//the better soln was that, check the lengths of two, and move pointer to such a level such that their length is the same from there
//very NICE technique
