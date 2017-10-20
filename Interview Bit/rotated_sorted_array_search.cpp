int Solution::search(const vector<int> &A, int B) {

    int l=0,h=A.size()-1,smallest = -1;
    while(l<=h){
        if(A[l]<=A[h]){
            smallest = l;
            break;
        }
        int mid = (l+h)/2;
        int next = (mid+1)%A.size();
        int prev = (mid+A.size()-1)%A.size();
        if(A[mid]<=A[next] && A[mid]<=A[prev]){
            smallest = mid;
            break;
        }
        else if(A[mid]<=A[h]){
            h = mid - 1;
        }
        else if(A[mid]>=A[l])
            l = mid + 1;
    }
    l=0,h=A.size()-1;
    if(A[smallest]>B)
        return -1;
    if(A[smallest] == B)
        return smallest;
    if(B<=A[h]){
        l = smallest;
    }
    else if(B>=A[l]){
        h = smallest - 1;
    }
    while(l<=h){

        int mid = (l+h)/2;
        if(A[mid] == B)
            return mid;
        else if(A[mid]>B)
            h = mid -1;
        else
            l = mid+1;
    }
    return -1;
}

//question is easy if you know finding minimum element in rotated sorted array
//good question
