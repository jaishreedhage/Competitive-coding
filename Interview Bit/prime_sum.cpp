vector<int> Solution::primesum(int A) {

    vector <bool> ar(A+1,true);
    for(int i=2;i*i<A+1;i++){
        if(ar[i]){
            for(int j=i*i;j<=A;j=j+i)
                ar[j] = false;
        }
    }

    for(int i=2;i<=A;i++){
        if(ar[i] && ar[A-i]){
            vector <int> result;
            result.push_back(i);
            result.push_back(A-i);
            return result;
        }
    }
    vector <int> result;
    return result;
}

//in this question, very easy question, i realised that if bool can be used in places instead of int, its good as it reduces memory used.
