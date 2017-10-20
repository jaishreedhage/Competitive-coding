/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        return head;
    ListNode *root = head,*temp=NULL,*t2=NULL,*t3,*prev=NULL,*head1;
    int c = 0;
    while(head){
        c++;
        head = head->next;
    }
    int n = c/k;
    if(n==0)
        return root;
    cout<<n<<endl;
    head = root;
    c = 0;
    while(head && n>0){
        c++;
        if(c<=k){
            temp = head->next;
            head->next = t2;
            if(t2==NULL)
                t3 = head;
            t2 = head;
        }
        if(c==k){
            if(prev==NULL)
                head1 = t2;
            else{
                prev->next = t2;
            }
            prev = t3;
            c=0;
            n--;
            t2 = NULL;
        }
        head = temp;
    }
    prev->next=temp;
    return head1;
    }
};
