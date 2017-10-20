#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
// #include <unordered_map>

using namespace std;


int main(){
    std::map<char, int> map;
    int a,k=97,max=0;
    for(int h_i = 0;h_i < 26;h_i++){
       cin >> a;
       map[char(k++)] = a;
    }
    string word;
    cin >> word;
    for(int i = 0;i<word.length();i++){
    	if(map.find(word[i])->second>max)
    		max=map.find(word[i])->second;
    }
    cout<<max*word.length()<<endl;
    
    return 0;
}
