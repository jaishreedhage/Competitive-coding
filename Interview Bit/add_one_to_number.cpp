vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <int> B(A.size() + 1);
    int carry = 1,num;
    for(int i = A.size()-1;i>=0;i--){
        num = (A[i] + carry)%10;
        carry = (A[i] + carry)/10;
        B[i+1] = num;
    }

    B[0] = carry;
    //important thing was that removal of zeros
    if(B[0]==0)
        for(int i=0;B[i]==0;i++){
            B.erase(B.begin()+i);
            i=i-1;
        }

    return B;
}

//alternate approach would be to add after reversing the original input array and then performing addition.
