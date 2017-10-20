/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

void insert(stack<int> & s,int a){
    if(s.empty() || a>s.top()){
        s.push(a);
        return;
    }
    int b = s.top();
    s.pop();
    insert(s,a);
    s.push(b);
}

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   if(s.empty())
        return;
   int a = s.top();
   s.pop();
   sort();
   insert(s,a);
}
