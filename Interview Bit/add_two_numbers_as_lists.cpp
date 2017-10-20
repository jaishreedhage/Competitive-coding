/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *t1=A,*t2=B,*t3=NULL,*head,*t4;
    int carry = 0,value;
    while(t1!=NULL && t2!=NULL){
        value = t1->val + t2->val + carry;
        carry = value/10;
        value %= 10;
        if(t3 == NULL){
            t4 =  new ListNode(value);
            t3 = t4;
            head = t3;
        }
        else{
            t4 = new ListNode(value);
            t3->next = t4;
            t3 = t4;
        }
        t1 = t1->next;
        t2 = t2->next;
    }
    while(t1!=NULL){
        value = t1->val + carry;
        carry = value/10;
        value %= 10;
        if(t3 == NULL){
            t4 = new ListNode(value);
            t3 = t4;
            head = t3;
        }
        else{
            t4 = new ListNode(value);
            t3->next = t4;
            t3 = t4;
        }
        t1 = t1->next;
    }
    while(t2!=NULL){
        value = t2->val + carry;
        carry = value/10;
        value %= 10;
        if(t3 == NULL){
            t4 = new ListNode(value);
            t3 = t4;
            head = t3;
        }
        else{
            t4 = new ListNode(value);
            t3->next = t4;
            t3 = t4;
        }
        t2 = t2->next;
    }
    while(carry>0){
        t4 = new ListNode(carry % 10);
        t3->next = t4;
        t3 = t4;
        carry /= 10;
    }
    return head;
}

//lame qsn.
//make sure when you add you take of case when carry is still there and has to be added into the list : eg 99+99, carry 1 has to be added
//The solution thing got openend by mistake and secondly i was trying to convert it directly as a number, like from the lists get two numbers and then add and then put it into a list
//But that didnt work coz the number was greater than the limit.
