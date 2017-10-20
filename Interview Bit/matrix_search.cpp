int Solution::searchMatrix(vector<vector<int> > &A, int B) {

    int col = A[0].size();
    for(int i=0;i<A.size();i++){
        if(A[i][0]<=B && A[i][col-1]>=B){
            int l=0,h=col-1;
            while(l<=h){
                int mid = (l+h)/2;
                if(A[i][mid]==B)
                    return 1;
                else if(A[i][mid]<B)
                    l = mid+1;
                else
                    h = mid-1;
            }
        }
    }
    return 0;

}

//easy question.
