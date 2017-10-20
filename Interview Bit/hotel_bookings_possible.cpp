bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    if(K>=arrive.size())
        return true;
    vector<pair<int,int> >v;
    for(int i=0;i<arrive.size();i++){
        v.push_back(make_pair(arrive[i],1));
        v.push_back(make_pair(depart[i],0));
    }
    sort(v.begin(),v.end());
    int count = 0;
    for(int i=0;i<v.size();i++){
        // cout<<v[i].first<<endl;
        if(v[i].second==1)
            count++;
        else
            count--;
        if(count>K)
            return false;
    }
    return true;
}

//Idk the soln is so easy, i tried a very complicated method
