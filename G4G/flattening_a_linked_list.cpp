/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */

/*  Function which returns the  root of
    the flattened linked list. */
Node *flatten(Node *root)
{
   // Your code here
  Node *t1 = root->next, *t2, *t3, *prev, *t5;
  while(t1!=NULL){
      t2 = t1, t3 = root, prev = NULL;
      while(t3!=NULL && t2!=NULL){
          if(t3->data<t2->data){
              prev = t3;
              t3 = t3->bottom;
          }
          else{
              t5 = t2->bottom;
              if(prev==NULL){
                  t2->bottom = t3;
                  t3 = t2;
                  root = t3;
              }
              else{
                prev->bottom = t2;
                t2->bottom = t3;
                t3 = t2;
              }
              t2 = t5;
          }
      }
      if(t2!=NULL){
          prev->bottom = t2;
      }
      t1 = t1->next;
  }
   return root;
}

//easy qsn. Have to use merging idea basically
