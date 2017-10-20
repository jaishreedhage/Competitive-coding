#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool func(pair<int,int>i,pair<int,int>j){
    if(i.second>j.second)
        return true;
    else if(i.second==j.second && i.first<j.first)
        return true;
    return false;
}

int main()
{
	int Q;
	cin>>Q;
	while(Q>0){
	    int n,a;
	    cin>>n;
	    vector<pair<int,int> >v;
	    vector<pair<int,int> >::iterator it;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        if(v.size()>0){
    	        int flag=0;
    	        for(int j=0;j<v.size();j++){
    		        if(v[j].first==a){
    		            v[j].second++;
    		            flag=1;
    		            break;
    		        }
    			}
    			if(flag==0)
    			    v.push_back(make_pair(a,1));
	        }
	        else
	           v.push_back(make_pair(a,1));
	    }
	    sort(v.begin(),v.end(),func);
	    for(int i=0;i<v.size();i++)
	        for(int j=0;j<v[i].second;j++)
	            cout<<v[i].first<<" ";
	    cout<<endl;
	    Q--;
	}
	return 0;
}
