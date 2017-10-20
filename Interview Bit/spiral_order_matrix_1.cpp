vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	// DO STUFF HERE AND POPULATE result
	int dir = 0;
	int t=0,l=0,b=A.size()-1,r=A[0].size()-1;
	while(t<=b && l<=r){
	    if(dir==0){
	        for(int i=l;i<=r;i++)
	            result.push_back(A[t][i]);
	        t++;
	    }
	    else if(dir == 1){
	        for(int i=t;i<=b;i++)
	            result.push_back(A[i][r]);
	        r--;
	    }
	    else if(dir == 2){
	        for(int i=r;i>=l;i--)
	            result.push_back(A[b][i]);
	        b--;
	    }
	    else if(dir == 3){
	        for(int i=b;i>=t;i--)
	            result.push_back(A[i][l]);
	        l++;
	    }
	    dir = (dir+1)%4;
	}
	return result;
}

//nice method. I used a very similar method but not as clean as this.
