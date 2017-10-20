int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        int l=i,h=A.size()-1,best_so_far = -1;
        while(l<=h){
            int mid = (l+h)/2;
            if(A[mid]>A[i]){
                h = mid - 1;
                best_so_far = mid;
            }
            else{
                l = mid+1;
            }
        }
        if(best_so_far!= -1 && (A.size()-best_so_far)==A[i]){
            return 1;
        }
    }
    if(A[A.size()-1] == 0)
        return 1;
    return -1;
}

//i have used binary search, but you could use another pointer too
//the cpmplexity of my code is less as ive used binary search, but if i have -6 -4 -2 -1 0
//that last "0" should result in a return of 1;
//but this case had to be explicitly handled in my code
