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
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        int ar[n+1]={0};
        int flag=0;
        for(int i=1;i<=n;i++){
            if(i+k>=1 || i+k<=n){
                
            }
                
            else{
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<-1<<endl;
        else{
            for(int i=1;i<=n;i++)
                cout<<ar[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
