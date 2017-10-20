bool isPossible(vector<int> &A,int B,long long mid){
    int ppl = 1;
    long long cur_sum = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]>mid)
            return false;
        else if(cur_sum + A[i] > mid){
            ppl++;
            cur_sum = A[i];
            if(ppl>B)
                return false;
        }
        else
            cur_sum += A[i];
    }
    return true;
}

int Solution::books(vector<int> &A, int B) {
    if(A.size()<B)
        return -1;
    long long sum = 0;
    for(int i=0;i<A.size();i++)
        sum+=A[i];
    long long start = 0, end = sum, mid;
    int ans=INT_MAX;
    while(start<=end){
        mid = (start+end)/2;
        if(isPossible(A,B,mid)){
            ans = min(ans, (int)mid);
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

//really very IMPORTANT and a concept strengthening qsn in BINARY SEARCH
