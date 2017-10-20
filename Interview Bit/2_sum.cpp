vector<int> Solution::twoSum(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> index;
    int k=1;
    unordered_map <int,int> ump;
    for(int i=0;i<A.size();i++){
        if(ump.find(B-A[i])==ump.end()){
            if(ump.find(A[i])==ump.end())
                ump[A[i]]=k++;
            else
                k++;
        }
        else{
            index.push_back(ump[B-A[i]]);
            index.push_back(k);
            return index;
        }
    }
    return index;
}

//i forgot the case where multiple values can occur
//eg: 1 2 2 3 5 6 6
//so here 2 is stored with index 3 instead of 2
