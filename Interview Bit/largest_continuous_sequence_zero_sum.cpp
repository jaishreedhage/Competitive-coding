vector<int> Solution::lszero(vector<int> &A) {
    map<int,int>mp;
    int cur = 0,s=-1,e=-1,len,maxlen = INT_MIN;
    for(int i=0;i<A.size();i++){
        cur += A[i];
        if(cur==0){
            len = i+1;
            if(maxlen<len){
                maxlen = len;
                s = 0;
                e = i;
            }
        }
        else if(mp.find(cur)!=mp.end()){
            len = i - mp[cur];
            if(maxlen<len){
                maxlen = len;
                s = mp[cur] + 1;
                e = i;
            }
        }
        else
            mp[cur] = i;
    }
    vector<int> v;
    if(s==-1)
        return v;
    for(int i=s;i<=e;i++)
        v.push_back(A[i]);
    return v;
}

//have solved a similar qsn on geeks. but that was find if a subarray exists.
//this was modified to give largest subarray
