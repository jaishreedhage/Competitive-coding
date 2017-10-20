void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for(int i=0;i<A.size()/2;i++){
        int last = A.size()-1-i;
        for(int j=i;j<last;j++){
            int offset = j-i;
            int temp = A[i][j];
            A[i][j] = A[last-offset][i];
            A[last-offset][i] = A[last][last-offset];
            A[last][last-offset] = A[j][last];
            A[j][last] = temp;
        }
    }
}

//VERY IMPORTANT QSN!!
