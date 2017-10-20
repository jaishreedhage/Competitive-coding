int Solution::findMin(const vector<int> &A) {

    int l=0,h=A.size()-1;

    while(l<=h){
        if(A[l]<=A[h])
            return A[l];
        int mid = (l+h)/2;
        int next = (mid+1)%A.size();
        int prev = (mid+A.size()-1) % A.size();
        if(A[mid]<=A[next] && A[mid]<=A[prev]){
            return A[mid];
        }
        else if(A[mid]>=A[l])
            l = mid+1;
        else if(A[mid]<=A[h])
            h = mid - 1;
    }
    return -1;
}


//awesome question!! MUST TO DO!
