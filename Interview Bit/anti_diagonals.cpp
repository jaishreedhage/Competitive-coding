vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

    vector< vector<int> > anti_diagonal(A.size()*2  - 1);

    int i;
    for(i=0;i<A.size();i++){
        int k = i;
        for(int j=0;j<A.size() && k>=0;j++){
            anti_diagonal[i].push_back(A[j][k--]);
        }
    }
    int l = i,limit=1;
    for(int i=1;i<A.size();i++){
        int k = i,j=A.size()-1;
        while(j>=limit){

            anti_diagonal[l].push_back(A[k++][j--]);
        }
        limit++;
        l++;
    }
    return anti_diagonal;
}

//easy question, be careful with the indices
