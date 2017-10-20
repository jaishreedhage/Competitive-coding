#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void freq(vector <int> ar , int l, int h, map<int,int> &mp ){

    if(ar[l]==ar[h]){
        if(mp.find(ar[l])!=mp.end())
            mp[ar[l]] += h-l+1 ;
        else{
            mp.insert(pair<int,int>(ar[l],h-l+1));
        }
        return;
    }
    else{
        int mid = (l+h)/2;
        freq(ar,l,mid,mp);
        freq(ar,mid+1,h,mp);
    }

}

int main(){
    int n;
    cin>>n;
    vector <int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    map<int,int> mp;
    freq(ar,0,n-1,mp);
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
