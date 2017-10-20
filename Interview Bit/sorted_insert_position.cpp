int Solution::searchInsert(vector<int> &A, int B) {

    int l = 0,h=A.size()-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid]<B){
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    return l;

}

//very basic binary search question.
