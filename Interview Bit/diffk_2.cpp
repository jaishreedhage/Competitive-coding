int Solution::diffPossible(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unordered_map<int,int>ump;
    for(int i=0;i<A.size();i++){
        if(A[i]<B && ump.find(abs(B+A[i]))==ump.end()){
            ump[A[i]]++;
        }
        else if(A[i]>=B && ump.find(abs(B-A[i]))==ump.end() && ump.find(B+A[i])==ump.end()){
            ump[A[i]]++;
        }
        else{
            return 1;
        }
    }
    return 0;
}

//qsn was easy like previously. But the thing is that I didnt check what the cases should be aise, so i spent some extra time on it.
