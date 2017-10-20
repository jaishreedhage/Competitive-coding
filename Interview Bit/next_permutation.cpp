void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int pos = -1;
    for(int i=A.size()-1;i>0;i--){
        if(A[i]>A[i-1]){
            pos = i-1;
            break;
        }
    }
    if(pos==-1){
        sort(A.begin(),A.end());
    }
    else{
        int nextSmallest = INT_MAX,nextPos = -1;
        for(int i = pos+1;i<A.size();i++){
            if(A[i]<nextSmallest && A[i]>A[pos]){
                nextSmallest = A[i];
                nextPos = i;
            }
        }
        int temp = A[pos];
        A[pos] = A[nextPos];
        A[nextPos] = temp;

        sort(A.begin()+pos+1,A.end());
    }
}

//remember the algo -> left<right
//next smallest greatest number
//swap them
//sort the right part
