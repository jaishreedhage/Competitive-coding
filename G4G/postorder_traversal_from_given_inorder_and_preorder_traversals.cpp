/*prints the post order traversal of the
tree */
int search(int in[],int l,int h,int val){
    int i;
    for(i=l;i<=h;i++)
        if(in[i]==val)
            break;
    return i;
}

void print(int in[],int pre[],int s,int n,int &idx){
    if(n<s)
        return;
    if(s==n){
        cout<<in[s]<<" ";
        idx++;
        return;
    }
    int i = search(in,s,n,pre[idx]);
    idx++;
    print(in,pre,s,i-1,idx);
    print(in,pre,i+1,n,idx);
    cout<<in[i]<<" ";
}
void printPostOrder(int in[], int pre[], int n)
{
//Your code here
    int idx = 0,s=0;
    print(in,pre,0,n-1,idx);
}
//the condition in line 12 is so imp! i understand the imp of that line today :(
