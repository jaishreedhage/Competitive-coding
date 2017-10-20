
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
     ios_base::sync_with_stdio(false);


     int t;
     cin>>t;

     while(t > 0){
           int n;
           cin>>n;

           vector<int> h(n);
           vector<int> temp((n+1)/2);

           for(int i = 0;i < n;i++){
                     cin>>h[i];
           }

           for(int i = 0;i <= (n-1)/2;i++){
                     temp[i] = i+1;
           }



           if(n%2 == 0){
                 cout<<"no"<<endl;
                 // cout<<"check1"<<endl;
                 t--;
                 continue;
           }
           if(h[0] != 1 && h[n-1] != 1){
                 cout<<"no"<<endl;
                 t--;
                 continue;
           }
           int index = (n-1)/2;
           vector<int> a(h.begin(),h.begin() + index+1);
           vector<int> b(h.begin()+ index,h.end());


           reverse(b.begin(),b.end());

           if(a == temp && b == temp){
                 cout<<"yes"<<endl;
                 t--;
                 continue;
           }
           else{
                 cout<<"no"<<endl;
                 t--;
                 continue;
           }
     }

     return 0;

}
