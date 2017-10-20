class Solution {
public:
    int trailingZeroes(int n) {
        unsigned int count=0;
        for(long long i=5;;i=i*5){
            if(n/i == 0)
                break;
            count += floor(n/i);
        }
        return count;
    }
};

//i had to put long long as i ka datatype. nice catch!
