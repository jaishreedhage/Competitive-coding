vector<int> Solution::searchRange(const vector<int> &A, int B) {

    vector<int> bounds(2,-1);
    int l = 0,h=A.size()-1,lb=-1,ub=-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(A[mid]<B){
            l = mid+1;
        }
        else{
            h = mid-1;
            lb = mid;
        }
    }
    if(A[lb] != B)
        return bounds;
    l = 0,h=A.size()-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(A[mid]<=B){
            l = mid+1;
            ub = mid;
        }
        else{
            h = mid-1;
        }
    }
    bounds[0] = lb;
    bounds[1] = ub;
    return bounds;
}

//lower bound and upper bound question in binary search!
//as i had learnt this in december, it was easy now
