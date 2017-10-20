#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n,a,count=0,x=0;
        cin >> n;
        std::vector<int> v;
        std::vector<int>::iterator result;
        for(int i = 0;i < n; i++){
        	cin>>a;
        	if(a>x){
        		x=a;
        		count++;
        	}
        }
        if(count%2==1)
        	cout<<"BOB"<<endl;
        else
        	cout<<"ANDY"<<endl;
    }
    return 0;
}
