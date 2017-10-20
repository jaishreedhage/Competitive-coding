bool isPossible(vector<int>C, int A, long long mid){
    int ppl = 1;
    long long cur_sum = 0;
    for(int i=0;i<C.size();i++){
        if(C[i]>mid)
            return false;
        else if(cur_sum +C[i]>mid){
            ppl++;
            cur_sum = C[i];
            if(ppl>A)
                return false;
        }
        else
            cur_sum += C[i];
    }
    return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long sum = 0;
    for(int i=0;i<C.size();i++)
        sum += C[i];
    long long start = 0, end = sum, mid;
    long long ans = INT_MAX;
    while(start<=end){
        mid = (start+end)/2;
        if(isPossible(C,A,mid)){
            ans = min(ans, mid) % 10000003;
            end = mid - 1;
        }
        else
            start = mid+1;
    }
    // cout<<ans<<endl;
    ans = ans % 10000003;
    ans = ans*B;
    ans = ans % 10000003;
    return ans;
}

//exactly same as allocate_books.cpp
