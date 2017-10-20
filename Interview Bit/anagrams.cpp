vector<vector<int> > Solution::anagrams(const vector<string> &A) {

    unordered_map <long long,vector<int> > ump;
    vector<vector<int> >v;
    for(int i=0;i<A.size();i++){
        int hash=0;
        for(int j=0;j<A[i].length();j++){
            hash = hash + A[i][j];
        }
        ump[hash].push_back(i+1);

    }
    unordered_map <long long, vector<int> >::iterator it;
    for(it=ump.begin();it!=ump.end();it++){
        vector<int> temp;
        for(int j=0;j<it->second.size();j++){
            temp.push_back(it->second[j]);
        }
        v.push_back(temp);
    }
    return v;
}

//qsn was lame only. I took time to solve coz i wasnt sure of the syntax
