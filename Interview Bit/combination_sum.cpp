void combosum(vector<vector<int> >&v,vector<int>&s,vector<int>&A,int sum,int B,int k){

    if(sum==B){
        v.push_back(s);
        return;
    }
    else{
        int len;
        for(int i=k;i<A.size();i++){
            if(i-1>=0 && A[i-1]==A[i])
                continue;
            if(sum+A[i]>B)
                return;
            else{
                s.push_back(A[i]);
                sum = sum+A[i];
                len = s.size();
                combosum(v,s,A,sum,B,i);
            }
            s.erase(s.begin()+len-1,s.end());
            sum -= A[i];
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {

    sort(A.begin(),A.end());
    vector<vector<int> > v;
    vector<int> s;
    int sum = 0;
    combosum(v,s,A,sum,B,0);
    return v;
}

//I didnt copy the solution for this qsn. I openend solution but i didnt see it, coz i didnt understand.
//my backtracking is a little weak. I should practice more on this
