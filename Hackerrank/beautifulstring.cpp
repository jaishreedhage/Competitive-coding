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
    
    int n,tots=0;
    cin >> n;
    string B,test="010";
    cin >> B;
    vector<int> loc;
    for(int i=0;i<B.length()-2;i++){
        if(B.substr(i,3).compare(test)==0){
            loc.push_back(i);
        }
    }
    if(loc.size()<=0){
        cout<<0;
        return 0;
    }
    else if(loc.size()==1){
        cout<<1;
        return 0;
    }
    vector<int>loc2;
    for(int i=0;i<loc.size()-1;i++)
        loc2.push_back(loc[i+1]-loc[i]);
    for(int i=0;i<loc.size();i++)
        cout<<loc.at(i)<<" ";
    cout<<endl;
    for(int i=0;i<loc2.size();i++)
        cout<<loc2.at(i)<<" ";
    cout<<endl;
    for(int i=0;i<loc2.size();i++){
        if(i==0)
            tots++;
        else if(i+1<loc2.size() && i!=0){
            if(loc2[i+1]==2 && loc2[i]!=2){
                tots++;
                i=i+1;
            }
            else if(loc2[i+1]==2 && loc2[i]==2){
                if(i+2<loc2.size() && loc2[i+2]==2){
                    tots++;
                    i=i+1;
                }
                else
                    tots++;
                // cout<<"***";
            }
            else
                tots++;
        }
        
            
        
        else
            tots++;
        // cout<<tots<<" "<<i<<endl;
    }
    
    cout<<tots<<endl;
    return 0;
}
