vector<vector<int> > Solution::threeSum(vector<int> &A) {

    vector<vector<int> > soln;
    if(A.size()<=2)
        return soln;
    sort(A.begin(),A.end());
    int i=0,j,k,l=0;
    for(i=0;i<A.size()-2;i++){
        j=i+1;
        k=A.size()-1;
        while(j<k){
            if(A[i]+A[j]+A[k]==0){
                int flag=0;
                for(int m=0;m<soln.size();m++){
                    if(soln[m][0]==A[i] && soln[m][1]==A[j] && soln[m][2]==A[k]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    soln.push_back(vector<int>());
                    soln[l].push_back(A[i]);
                    soln[l].push_back(A[j]);
                    soln[l].push_back(A[k]);

                    l++;
                }
                j++;

            }
            else if(A[i]+A[j]+A[k]<0)
                j++;
            else
                k--;
        }
    }
    return soln;
}

//same as 3_sum.
