int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int diffx ,diffy, val =0;
    for(int i=1;i<X.size();i++){
        diffx = X[i] - X[i-1];
        diffy = Y[i] - Y[i-1];
        if(abs(diffx) > abs(diffy))
            val += abs(diffx);
        else
            val += abs(diffy);
    }
    return val;
}
