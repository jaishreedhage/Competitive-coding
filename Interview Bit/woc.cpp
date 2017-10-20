#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;

void calculate(map<double,int> &mp,int k, int v,vector<double> vp){

    if(v==k){
        cout<<"VP "<<v<<endl;
        for(int i=0;i<vp.size();i++)
            cout<<vp[i]<<" ";
        cout<<endl;
        double ans=0;
        for(int i=0;i<vp.size();i++){
            ans += vp[i] * vp[i];
        }
        if(mp.find(ans)!=mp.end()){
            mp[ans]++;
        }
        else
            mp.insert(pair<double,int>(ans,1));
        // cout<<"YO"<<endl;
        vp.clear();
    }
    else{
        vector<double> temp;
        temp.clear();
        for(int i=0;i<vp.size();i++){
            temp.clear();
            temp.push_back(vp[i]+vp[(i+1)%vp.size()]);
            int j = (i+2)%vp.size();
            while(j!=i && j!=i+1){
                temp.push_back(vp[j]);
                j = (j+1)%vp.size();
                if(j==i)
                    break;
            }
            // cout<<"HI"<<endl;
            calculate(mp,k,v+1,temp);
        }
    }
}

int main(){
    int n,k;
    cout<<"Enter n and k"<<endl;
    cin>>n>>k;
    cout<<"Enter the array of radii"<<endl;
    vector<double> vp(n);
    for(int i=0;i<n;i++)
        cin>>vp[i];
    map <double,int> mp;
    calculate(mp,k,0,vp);
    map <double,int> ::iterator it;
    double sz = 0;
    double fans = 0;
    for(it=mp.begin();it!=mp.end();it++){
        fans += it->first * it->second;
        sz += it->second;
    }
    fans /= sz;
    fans *= M_PI;
    cout<<fans<<" "<<endl;
    return 0;
}
