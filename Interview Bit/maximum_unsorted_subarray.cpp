vector<int> Solution::subUnsort(vector<int> &A) {

    vector<int>bounds;
    int i=0,j=A.size()-1;
    while(i<A.size()-1 && A[i]<=A[i+1])
        i++;
    if(i==A.size()-1){
        bounds.push_back(-1);
        return bounds;
    }
    while(j>0 && A[j]>=A[j-1])
        j--;
    int max_value=-1,min_value=INT_MAX;
    for(int l=i;l<=j;l++){
        if(A[l]>max_value)
            max_value = A[l];
    }
    for(int l=i;l<=j;l++){
        if(A[l]<min_value)
            min_value = A[l];
    }
    for(int l=0;l<i;l++)
        if(A[l]>min_value){
            i=l;
            break;
        }
    for(int l=A.size()-1;l>j;l--)
        if(A[l]<max_value){
            j=l;
            break;
        }
    bounds.push_back(i);
    bounds.push_back(j);
    return bounds;
}

//IMPORTANT GOOD QSN!!
