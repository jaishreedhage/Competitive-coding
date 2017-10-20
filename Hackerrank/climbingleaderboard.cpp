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


int binarysearch(vector<long long int> &scores,int l,int h,int val){
    int mid;
    int re;
    // cout<<"I< HERE"<<endl;
    // cout<<scores[l]<<" "<<scores[h]<<endl;
    while(l<=h && h>=0){
        mid = l+(h-l)/2;
        // cout<<mid<<endl;
        if(scores[mid]==val){
            cout<<mid+1<<endl;
            re = mid;
            break;
        }
        else if(val<scores[mid]){
            if(scores[mid+1]<val && scores[mid]>val){
                cout<<mid+2<<endl;
                scores.insert(scores.begin()+mid+1,val);
                re=mid+1;
                break;
            }
            l=mid+1;
        }
        else if(val>scores[mid]){
            h=mid-1;
        }
    }
    return re;
}


int main(){
    int n;
    cin >> n;
    vector<long long int> scores(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<long long int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    // your code goes here
    for(int i=0;i<scores.size()-1;i++){
        if(scores[i]==scores[i+1]){
            scores.erase(scores.begin()+i);
            i--;
        }
    }
    // cout<<endl;
    // for(int i=0;i<scores.size();i++){
    //     cout<<scores[i]<<" ";
    // }
    // cout<<endl;
    int j,k=scores.size()-1,val;
    for(int i=0;i<alice.size();i++){
            // cout<<"** "<<i<<" ";
            if(scores[0]<alice[i]){
                cout<<1<<endl;
                scores.insert(scores.begin(),alice[i]);
                k=0;
            }
            else if(scores[scores.size()-1]>alice[i]){
                cout<<scores.size()+1<<endl;
                scores.insert(scores.begin()+scores.size(),alice[i]);
                k=scores.size()-1;
            }
            else{
                val = binarysearch(scores,0,k,alice[i]);
                k = val;
            }
            // else if(scores[j]>alice[i]){
            //     cout<<j+2<<endl;
            //     scores.insert(scores.begin()+j+1,alice[i]);
            //     k=j+1;
            //     // cout<<endl;
            //     // for(int i=0;i<scores.size();i++){
            //     //     cout<<scores[i]<<" ";
            //     // }
            //     // cout<<"****"<<scores[k]<<endl;
            //     break;
            // }
            // else if(scores[j]==alice[i]){
            //     cout<<j+1<<endl;
            //     k=j;
            //     break;
            // }
        }
    
    return 0;
}
