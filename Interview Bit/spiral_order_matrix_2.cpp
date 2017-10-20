vector<vector<int> > Solution::generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <vector<int> > spiral;
    spiral.resize(A);
    for(int i=0;i<A;i++)
        spiral[i].resize(A);
    int t = 0, l=0, r = A-1, b = A-1, dir = 0 , val =1;
    while(t<=b && l<=r){
        if(dir == 0){
            for(int i=l;i<=r;i++)
                spiral[t][i] = val++;
            t++;
        }
        else if(dir == 1){
            for(int i=t;i<=b;i++)
                spiral[i][r] = val++;
            r--;
        }
        else if(dir == 2){
            for(int i=r;i>=l;i--)
                spiral[b][i] = val++;
            b--;
        }
        else if(dir == 3){
            for(int i=b;i>=t;i--)
                spiral[i][l] = val++;
            l++;
        }
        dir = (dir+1)%4;
    }
    return spiral;
}

//same as spiral_order_matrix_1.cpp  ---> reverse had to be done thats it.
