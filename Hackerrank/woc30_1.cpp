#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int t,tots=0;
    cin >> n >> t;
    int val = n;
    vector<int> c(t);
    for(int c_i = 0; c_i < t; c_i++){
        cin >> c[c_i];
        val = val - c[c_i];
        if(val<5 && c_i < t-1){
            tots += n-val;
            val += n-val;
        }
    }
    cout<<tots<<endl;
    // your code goes here
    return 0;
}
