/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    if(A==NULL)
        return NULL;
    RandomListNode *head = A,*temp,*root;
    while(head!=NULL){
        temp = head->next;
        RandomListNode *node = new RandomListNode(head->label);
        head->next = node;
        head->next->next = temp;
        head = temp;
    }
    head = A;
    while(head){
        temp = head->next;
        if(head->random==NULL)
            temp->random = NULL;
        else{
            temp->random = head->random->next;
        }
        head = temp->next;
    }
    root = A->next;
    head = root;
    while(head){
        temp = head->next;
        if(temp!=NULL){
            head->next = temp->next;
        }
        head = head->next;
    }
    return root;
}
