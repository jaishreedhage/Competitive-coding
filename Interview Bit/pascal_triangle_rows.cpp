vector<vector<int> > Solution::generate(int A) {

    vector <vector<int> > pascal(A);
    for(int i=0;i<A;i++)
        pascal[i].resize(i+1);
    if(A==0)
        return pascal;
    pascal[0][0] = 1;
    if(A == 1)
        return pascal;
    pascal[1][0] = pascal[1][1] = 1;
    for(int i = 2;i<A;i++){
        int k = 0;
        for(int j=0;j<pascal[i-1].size();j++){
            int sum = 0;
            if(j-1 < 0 )
                sum = 0;
            else
                sum = pascal[i-1][j-1];
            sum += pascal[i-1][j];
            pascal[i][k] = pascal[i][pascal[i].size()-1-k] = sum;
            k++;
        }
    }
    return pascal;
}

//easy sum. Although if you can see I've used many return conditions, which can be omitted except the first one.
//its obvious to have 1 at start and 1 at end. So you could omit that case where you do the check too.
//clean solution is what is required in such easy questions.
