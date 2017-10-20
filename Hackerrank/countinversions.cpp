#include <iostream>
using namespace std;

int tots;

int merge(int ar[],int l,int mid,int m){
    int inv_count = 0;
    int h = mid-l+1, k = m-mid,la[h],ra[k];
    int j=-1;
    
    for(int i=l;i<=mid;i++){
        la[++j] = ar[i];
    }
    j=-1;
    for(int i=mid+1;i<=m;i++){
        ra[++j] = ar[i];
    }
    int i = 0; 
    j=0;
   
    while(i<h && j<k){
        if(la[i]<=ra[j]){
            ar[l++] = la[i];
            i++;
        }
        else{
            ar[l++] = ra[j];
            j++;
            cout<< "** ";
            inv_count += mid-i+1;
        }
    }
    while(i<h )
        ar[l++] = la[i++];
    while(j<k)
        ar[l++] = ra[j++];
    return inv_count;
    
}

int mergesort(int ar[],int l,int m){
    int mid, inv_count = 0;
    if(l<m){
        mid = l + (m-l)/2;
        inv_count = mergesort(ar,l,mid);
        inv_count += mergesort(ar,mid+1,m);
        inv_count += merge(ar,l,mid,m);
    }
    cout<<inv_count<<" "<<l<<" "<<m<<endl;
    return inv_count;
}

int main() {
	//code
	int Q;
	cin>>Q;
	int n;
	while(Q>0){
        tots=0;
	    cin>>n;
	    int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        cout<<endl<<mergesort(ar,0,n-1)<<endl;
        // cout<<tots<<endl;
        // for(int i=0;i<n;i++)
        //     cout<<ar[i]<<" ";
	    Q--;
	}
	return 0;
}