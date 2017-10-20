#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int c;

void merge(int ar[],int l,int m,int r){
	int a = m-l+1,b = r-m;
	int left[a],right[b],k=-1;
	for(int i=l;i<=m;i++)
		left[++k] = ar[i];
	k=-1;
	for(int i=m+1;i<=r;i++)
		right[++k] = ar[i];
	
	k=l;
	int i=0,j=0;
	while(i<a && j<b){
		if(left[i]<=right[j]){
			ar[k++] = left[i];
			i++;
		}
		else {
			ar[k++] = right[j];
			j++;
			c+=(a-i);
		}
	}
	while(i<a){
		ar[k++] = left[i];
		i++;
	}
	while(j<b){
		ar[k++] = right[j];
		j++;
	}
	
    
}

void mergesort(int ar[],int l,int r){
	if(l<r){
		int m = l+(r-l)/2;
		mergesort(ar,l,m);
		mergesort(ar,m+1,r);
		merge(ar,l,m,r);
	}
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cin>>Q;
    while(Q>0){
        int n;
        c=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        mergesort(ar,0,n-1);

        cout<<c<<endl;
        Q--;
    }
    return 0;
}
