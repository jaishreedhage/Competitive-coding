#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int max(int a, int b){
    return a>b?a:b;
}

int max(int a, int b, int c){
    return max(a,max(b,c));
}

using namespace std;

int maxCrossingSum(vector <int> &A, int l, int mid, int h){

    int left_sum = INT_MIN, right_sum = INT_MIN, sum=0;
    for(int i=mid;i>=l;i--){
        sum += A[i];
        if(sum>left_sum)
            left_sum = sum;
    }
    sum = 0;
    for(int i=mid+1;i<=h;i++){
        sum += A[i];
        if(sum>right_sum)
            right_sum = sum;
    }
    return left_sum + right_sum;

}

int maxSubArray(vector <int> &A,int l,int h){

    if(l==h)
        return A[l];
    else{
        int mid = (l+h)/2;
        return max(maxSubArray(A,l,mid),maxSubArray(A,mid+1,h),maxCrossingSum(A,l,mid,h));
    }

}

int main(){

    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];
    int max_sum = maxSubArray(A,0,n-1);
    cout<<"Max sum is "<<max_sum<<endl;
    return 0;

}
