/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool comparefun(Interval a,Interval b){
    return (a.start<b.start);
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end(),comparefun);
    int valStart,valEnd;
    for(int i=0;i<A.size();i++){
        valStart = A[i].start;
        valEnd = A[i].end;
        int flag=0,j;
        for(j=i+1;j<A.size();j++){
            if(A[j].start>=valStart && A[j].start<=valEnd){
                valEnd = max(valEnd,A[j].end);
            }
            else{
                flag=1;
                break;
            }
        }
        A.erase(A.begin()+i,A.begin()+j);
        A.insert(A.begin()+i,Interval(valStart,valEnd));

    }
    return A;
}

//qsn involved a lit extra thinking as to how to reduce the complexity. I had initially solved it in very huge time complexity. had to think more.
