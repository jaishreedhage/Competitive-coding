vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret,x;
	B = B % A.size();
	for (int i = 0; i < B; i++) {
		x.push_back(A[i]);
	}
	for(int i = B;i<A.size();i++){
	    ret.push_back(A[i]);
	}
	for(int i=0;i<x.size();i++)
	    ret.push_back(x[i]);
	return ret;
}

/** although the actual and easier solution was in lesser space as compared to my above Solution
vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret;
	for(int i=0;i<A.size();i++)
		ret.push_back(A[ (i+B) % A.size() ]);    //look how nicely they managed to do this.
	return ret;
}
