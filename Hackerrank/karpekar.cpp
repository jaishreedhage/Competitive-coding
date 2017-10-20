#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int n,m,val=0,sq,len,temp;
    cin>>n>>m;
    int xyz = 10^2;
    for(int i=n;i<=m;i++){
        if(i==1)
            cout<<i<<endl;
        else{
            sq=i*i;
            len = 0,temp=sq;
            while(temp>0){
                len++;
                temp/=10;
            }
            double mid =len/2;
            if(len==1)
                continue;

            int midd = (int)mid;
            mid = (double)midd;
            // cout << sq<<" " <<(sq%(10^mid)) << " " << (sq/(10^(len-mid))) <<"  "<< (sq%(10^(mid-1)))+sq/(10^(len-mid+1)) <<" " << (sq%(10^(mid+1)))+(sq/(10^(len-mid-1)));
            // cout<<endl;
            long long p = pow(10.0,mid);
            long long q = pow(10.0,(len-mid));
            long long r = pow(10.0,(mid-1));
            long long s = pow(10.0,(len-mid+1));
            long long t = pow(10.0,(mid+1));
            long long u = pow(10.0,(len-mid-1));

            // cout<<mid<<" "<<p<<" "<<q<<"  "<<r<<" "<<s<<" "<<t<<"  "<<u<<endl; 
            cout << i<<" "<<sq<< "  "<< sq%p+(sq/q) <<"  "<< (sq%r)+sq/s <<"  "<<(sq%t)+(sq/u)<<endl;
 
            if( sq%p + (sq/q) == i ) 
                cout<<i<<endl;
            else if(mid-1!=0 &&  (sq%r)+sq/s ==i)
                cout<<i<<endl;
            else if(mid+1 != len && (sq%t)+(sq/u) == i)
                cout<<i<<endl;
        }
    }
    return 0;
}
