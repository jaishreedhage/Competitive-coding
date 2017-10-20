/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* merge(ListNode *A, ListNode *B){
    ListNode *t1=A,*t2=B,*t3,*t4=NULL;
    while(t1!=NULL && t2!=NULL){
        if(t1->val<t2->val){
            t4 = t1;
            t1 = t1->next;
        }
        else{
            t3 = t2->next;

            t2->next = t1;
            if(t4!=NULL)
                t4->next = t2;
            else
                A = t2;

            t1 = t2;
            t2 = t3;
        }
    }
    if(t2!=NULL){
        t4->next = t2;
    }
    return A;
}

ListNode* mergesort(ListNode *A){
    if(A->next==NULL)
        return A;
    ListNode *t = A, *t2 = A,*t3,*t4 = t2;
    while(t2!=NULL && t->next!=NULL && t->next->next!=NULL && t2->next!=NULL){
        t2 = t2->next;
        t = t->next->next;
    }
    t3 = t2->next;
    t2->next = NULL;
    t4 = mergesort(t4);
    t3 = mergesort(t3);
    A =  merge(t4,t3);
    return A;
}

ListNode* Solution::sortList(ListNode* A) {
    A = mergesort(A);
    return A;
}
//qsn was good. but same as normal merge sort.
