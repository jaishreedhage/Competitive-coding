int Solution::maximumGap(const vector<int> &A) {

    vector<pair<int,int> > v;
    for(int i=0;i<A.size();i++)
        v.push_back(make_pair(A[i],i));
    sort(v.begin(),v.end());
    int idx = v[A.size()-1].second;
    int ans = 0;
    for(int i=A.size()-2;i>=0;i--){
        idx = max(idx,v[i].second);
        ans = max(ans,idx - v[i].second);
    }
    return ans;
}

//very good qsn, still actually didnt understand the logic behind it properly 
