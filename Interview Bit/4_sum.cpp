vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    vector<vector<int> >v;
    vector<int>temp;
    for(int i=0;i<A.size()-3;i++){
        if(i>0 && A[i]==A[i-1])
            continue;
        for(int j=i+1;j<A.size()-2;j++){
            if(j>i+1 && A[j]==A[j-1])
                continue;
            int k=j+1,l=A.size()-1;
            while(k<l){
                if(A[i]+A[j]+A[k]+A[l]==B){
                    temp.clear();
                    temp.push_back(A[i]);
                    temp.push_back(A[j]);
                    temp.push_back(A[k]);
                    temp.push_back(A[l]);
                    v.push_back(temp);
                    while(k<A.size()-1 && A[k]==A[k+1]) k++;
                    while(k<l && A[l]==A[l-1]) l--;
                    k++;
                    l--;
                }
                else if(A[i]+A[j]+A[k]+A[l]>B)
                    l--;
                else
                    k++;
            }
        }
    }
    return v;
}

//same as 3_sum.cpp; except that here i learnt how to skip printing duplicate values with same target sum
