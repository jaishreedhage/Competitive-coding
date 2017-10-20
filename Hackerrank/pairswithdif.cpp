#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,k,j;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	sort(ar,ar+n);
	vector <pair <int,int> > v;
	for(int i = 0;i <n;i++){
		j = n-1;
		while(j>=0 && j>i){
			if(abs(ar[i]-ar[j])==k){
				v.push_back(pair<int,int>(ar[i],ar[j]));
				j--;
			}
			else if(abs(ar[i]-ar[j])>k)
				j--;
			else
				break;
		}
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i].first<<" "<<v[i].second<<endl;
}
