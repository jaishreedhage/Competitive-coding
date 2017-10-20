void comboSum(vector<vector<int> >&v,vector<int> &s,vector<int> &A,int B,int sum,int k){
    if(sum==B){
        int flag;
        for(int i=0;i<v.size();i++){
            flag = 0;
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]!=s[j]){
                    flag =1;
                    break;
                }
            }
            if(flag==0)
                return;
        }
        if(flag==1 || v.size()<1){
            v.push_back(s);
            return;
        }
    }
    else{
        for(int i=k;i<A.size();i++){
            int len;
            if(sum+A[i]<=B){
                sum += A[i];
                len = s.size();
                s.push_back(A[i]);
                comboSum(v,s,A,B,sum,i+1);
            }
            else
                return;
            s.erase(s.begin()+len,s.end());
            sum -= A[i];
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {

    sort(A.begin(),A.end());
    vector<vector<int> >v;
    vector<int> s;
    int sum = 0;
    comboSum(v,s,A,B,sum,0);
    return v;
}

//same as combination_sum_2.cpp
