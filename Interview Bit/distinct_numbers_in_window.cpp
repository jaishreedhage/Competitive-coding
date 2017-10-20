vector<int> Solution::dNums(vector<int> &A, int B) {
    map<int,int> mp;
    vector<int>v;
    for(int i=0;i<A.size()-B+1;i++){
        if(i==0){
            for(int j=i;j<i+B;j++){
                mp[A[j]]++;
            }
        }
        else{
            mp[A[i+B-1]]++;
        }

        v.push_back(mp.size());
        if(mp[A[i]]>1)
            mp[A[i]]--;
        else
            mp.erase(A[i]);
    }
    return v;
}

//some lame qsn
//i took time to solve it coz i was distracted by ppl around me talking to me 
