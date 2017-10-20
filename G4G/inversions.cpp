#include <iostream>

using namespace std;

int count = 0;

void merge(int ar[],int l,int m,int h){
	int k = -1;
	int p[m-l+1],q[h-m];
	for(int i=l;i<=m;i++)
		p[++k] = ar[i];
	k = -1;
	for(int i=m+1;i<=h;i++)
		q[++k] = ar[i];
	int i = 0,j=0;
	k = l;
	while(i<m-l+1 && j<h-m){
		if(p[i]<=q[j]){
			ar[k++] = p[i];
			i++;
		}
		else{
			ar[k++] = q[j];
			count += (m-l+1-i);
			j++;
		}
	}
	while(i<m-l+1)
		ar[k++] = p[i++];
	while(j<h-m)
		ar[k++] = q[j++];
}

void mergesort(int ar[],int l,int h){
	if(l<h){
		int mid = l+(h-l)/2;
		mergesort(ar,l,mid);
		mergesort(ar,mid+1,h);
		merge(ar,l,mid,h);
	}
}

int main(){
	int Q;
	cin>>Q;
	while(Q>0){
		int n;
		cin>>n;
		count = 0;
		int ar[n];
		for(int i=0;i<n;i++)
		cin>>ar[i];
		mergesort(ar,0,n-1);
		cout<<count<<endl;
		for(int i=0;i<n;i++)
			cout<<ar[i]<<" ";
		Q--;
	}
}
