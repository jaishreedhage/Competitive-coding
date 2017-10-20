/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
        // Your Code
        QueueNode *node = new QueueNode;
        node->data = x;
        node->next = NULL;
        if(rear==NULL){
            rear = node;
            front = rear;
        }
        else{
            rear->next = node;
            rear = node;
        }
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
        // Your Code
        if(front==NULL)
            return -1;
        int x = front->data;
        if(front==rear)
            rear = NULL;
        front = front->next;
        return x;
}
