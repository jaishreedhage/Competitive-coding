vector<int> Solution::maxset(vector<int> &A) {

    vector <long long> B(A.size());
    vector <int> res;
    long long sum = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]<0){
            B[i] = -1;
            sum = 0;
        }
        else{
            sum += A[i];
            B[i] = sum;
        }
    }
    long long max = *max_element(B.begin(),B.end());
    if(max < 0)
        return res;
    int pos = INT_MAX,start,end,flen=INT_MIN;
    for(int i = 0;i<B.size();i++){
        if(B[i] == max){
            int len = 1,j;
            for(j = i-1;j>=0 && B[j]!=-1;j--)
                len ++;
            if(len > flen){
                start = j+1;
                end = i;
                flen = len;
            }
        }
    }

    for(int i=start;i<=end;i++){
        res.push_back(A[i]);
    }
    return res;
}

//did this qsn all by myself one day after learning kadane's algorithm. Nice one.
//Don't forget case when all are negative elements.
//And case where 0 is a part of array. 0 is a positive number.
//After seeing the actual solution on Interview Bit, I realised the solution could be much smaller. I need to learn how to deal and get the subarray indices.
