#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool func(pair<int,int> i,pair<int,int>j){
    return i.first<j.first;
}

int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    int n,a,b;
	    cin>>n;
	    vector<pair<int,int> >v;
	    for(int i=0;i<n;i++){
	        cin>>a>>b;
	        v.push_back(make_pair(a,b));
	    }
	    sort(v.begin(),v.end(),func);
	    for(int i=1;i<v.size();i++){
	        if(v[i].first>=v[i-1].first && v[i].first<=v[i-1].second){
	            int l = min(v[i].first,v[i-1].first);
	            int h = max(v[i].second,v[i-1].second);
	           // cout<<l<<" "<<h<<endl;
	            v[i-1].first = l;
	            v[i-1].second = h;
	            v.erase(v.begin()+i);
	            i--;
	        }
	    }
	    for(int i=0;i<v.size();i++)
	        cout<<v[i].first<<" "<<v[i].second<<" ";
	    cout<<endl;
	    Q--;
	}
	return 0;
}
//easy 
