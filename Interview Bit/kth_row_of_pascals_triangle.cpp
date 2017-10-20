vector<int> Solution::getRow(int A) {

    vector <int> pascal_row;
    if(A<0)
        return pascal_row;
    pascal_row.push_back(1);
    for(int i=1;i<=A;i++){
        pascal_row.push_back(1);
        for(int j=pascal_row.size()-2;j>0;j--){
            pascal_row[j] = pascal_row[j] + pascal_row[j-1];
        }
    }
    return pascal_row;
}

//easy question. 
