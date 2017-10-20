#include <iostream>
#include <stack>

using namespace std;

void reverse(stack<int>&s){
    if(s.empty())
        return;
    int temp;
    if(!s.empty()){
        temp = s.top();
        s.pop();
        reverse(s);
    }
    s.push(temp);
}

int main(){
    int n,v;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++){
        cin>>v;
        s.push(v);
    }
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
