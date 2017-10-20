#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int w;
    int c;
    int m;
    cin >> n >> w >> c >> m;
    
    struct s1{
        int id,t,f;
    }s[n];
    
    for(int i=0;i<n;i++)
        cin>>s[i].id>>s[i].t>>s[i].f;
    
    int tt = 0,turn=0;
    int i=0;
    vector < pait<int,int> >ar;
    while(n>0){
        turn ++;
        int f1 = s[i].t + w;
        ar.push_back(pair<int,int> (i,s[i].id));
        i++;
        while(true){
            ar.push_back(pair<int,int> (i,s[i].id));
            if(s[i].t>f1)
                break;
            i++;
        }
        int m = c-1;
        if(ar.size()>c){
            int l = m;
            for(l = m ; l >=0;l--)
                if(ar[l].second == 1)
                    break;
            for(int k = c;k<ar.size();k++){
                if(ar[k].second == 2){
                    s[ar[k]].f = s[l].f;
                    s[ar[k]].id = s[l].id;
                    ar.erase(ar.begin()+l);
                }
            }
            m = l--;
            
        }
        int max = -1;
        for(int l=0;l<c;l++){
            if(s[ar[l].first].f>max)
                max = s[ar[l].first].f;
            if(ar[l].first] == m-1 ){
                cout<<turn<<" "<<f1+s[ar[l].first].f<<endl;
                break;
            }
        }
        f1 += 2*max;
        turn ++;
        
        
    }
    
    return 0;
}
