void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> r,c;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j] == 0){
                r.push_back(i);
                c.push_back(j);
            }
        }
    }
    for(int i=0;i<A.size();i++)
        if(find(r.begin(),r.end(),i)!=r.end())
            for(int j=0;j<A[0].size();j++)
                A[i][j] = 0;

    for(int i=0;i<A[0].size();i++)
        if(find(c.begin(),c.end(),i)!=c.end())
            for(int j=0;j<A.size();j++)
                A[j][i] = 0;
}


// the above code gives memory limit exceeded.
//The best solution would be to

void Solution::setZeroes(vector<vector<int> > &A) {

    vector<int> r,c;

    int rowZero = 0 , colZero = 0;

    for(int i=0;i<A[0].size();i++){
        if(A[0][i] == 0){
            rowZero = 1;
            break;
        }
    }

    for(int i=0;i<A.size();i++){
        if(A[i][0] == 0){
            colZero = 1;
            break;
        }
    }

    for(int i=1;i<A.size();i++){
        for(int j=1;j<A[0].size();j++){
            if(A[i][j] == 0){
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }

    for(int i=1;i<A.size();i++){
        for(int j=1;j<A[0].size();j++)
            if(A[0][j]==0 || A[i][0]==0){
                A[i][j] =0;
            }

    }

    if(rowZero){
        for(int i=0;i<A[0].size();i++)
            A[0][i] = 0;
    }

    if(colZero){
        for(int i=0;i<A.size();i++)
            A[i][0] = 0;
    }
}


// basically instead of using 2 vectors - row and column, we use the first row and column for that purpose
// so, we scan the just the first row and see if there is any zero - rowZero
//then we scan the first column and check if there is any zero there - colZero
//now we scan other elements excluding first row and first column and check if there is a zero, if there is a zero then we make the corresponding row and column 0
//later we scan the other elements excluding first row and column and see irrespective of its value, we see the corresponding row and column value, if it is 0 then we make the element as 0
//then we use the rowZero and colZero to make our column or row zero depending on its values
