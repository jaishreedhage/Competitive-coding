/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int valStart,valEnd,posStart=-1,posEnd=-1;
    for(int i=0;i<intervals.size();i++){
        if(newInterval.start>=intervals[i].start && newInterval.start<=intervals[i].end ){
            valStart = intervals[i].start;
            posStart = i;
            break;
        }
        else if(newInterval.start<intervals[i].start){
            valStart = newInterval.start;
            posStart = i;
            break;
        }
    }
    if(posStart==-1){
        intervals.insert(intervals.end(),newInterval);
        return intervals;
    }
    for(int j=posStart;j<intervals.size();j++){
        if(newInterval.end<intervals[j].start ){
            valEnd = newInterval.end;
            posEnd = j;
            break;
        }
        else if(newInterval.end>=intervals[j].start && newInterval.end<=intervals[j].end){
            valEnd = intervals[j].end;
            posEnd = j+1;
            break;
        }
    }
    if(posEnd==-1){
        // cout<<"**";
        valEnd = newInterval.end;
        posEnd=intervals.size();
    }
    // cout<<posStart<<" "<<posEnd<<endl;
    intervals.erase(intervals.begin()+posStart,intervals.begin()+posEnd);
    intervals.insert(intervals.begin()+posStart,Interval(valStart,valEnd));
    return intervals;

}

//very good qsn. you have many cases to consider.
//overlapping cases
//interval insertion at begin and end
//non merging
//etc
