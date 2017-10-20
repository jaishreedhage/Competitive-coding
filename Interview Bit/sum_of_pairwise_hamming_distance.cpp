int Solution::hammingDistance(const vector<int> &A) {
    int tot_sum=0;
    for(int i=0;i<32;i++){
        int count = 0;
        for(int j=0;j<A.size();j++){
            if(A[j]&(1<<i))
                count++;
        }
        int val= (count)*2*(A.size()-count) % 1000000007;
        tot_sum = (tot_sum+val)%1000000007;
    }
    return tot_sum;
}

//same as different_bits_sum_pairwise.cpp
