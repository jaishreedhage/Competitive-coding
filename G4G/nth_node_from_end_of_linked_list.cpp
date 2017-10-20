/* struct Node
 {
   int data;
   Node* next;
 }; */

/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *t = head,*t1 = head;
       int c = 0;
       while(t1!=NULL && c!=n-1){
           c++;
           t1 = t1->next;
       }
       if(t1==NULL)
            return -1;
        while(t1->next!=NULL){
            t = t->next;
            t1 = t1->next;
        }
        return t->data;
}

//easy qsn. Just take all the test cases when n can be more than length, equal to length and beech ka
