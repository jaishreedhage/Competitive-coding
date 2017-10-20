#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];

    //kadane's algorithm 
    int sum = 0,max_sum = INT_MIN,start,end,s;
    for(int i=0;i<A.size();i++){
        sum += A[i];
        if(sum>max_sum){
            max_sum = sum;
            start = s;
            end = i;
        }
        if(sum < 0){
            sum = 0;
            s = i+1;
        }
    }

    cout<<max_sum<<" "<<start<<"-"<<end<<endl;

    return 0;

}
