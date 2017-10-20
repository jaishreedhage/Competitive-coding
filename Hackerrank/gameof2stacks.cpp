#include <iostream>
#include <vector>

using namespace std;

int bsearch(unsigned long long int suma[],int n,int x){
    int li = 0,hi = n-1,mid,best_so_far;
    cout<<"fgj"<<endl;
    while(li<=hi){        
        mid = li + (hi-li)/2;
        if(suma[mid] <= x){
            li = mid+1;
            best_so_far = mid;
        }
        else{
            hi = mid-1;       
        }
    }    
    return best_so_far;
}

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        unsigned long long int x;
        cin >> n >> m >> x;
        vector<int> a(n);
        unsigned long long int suma[n],sumb[m],diff; 
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
           if(a_i > 0)
               suma[a_i] = suma[a_i - 1] + a[a_i];
           else
               suma[a_i] = a[0];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
           if(b_i > 0)
               sumb[b_i] = sumb[b_i - 1] + b[b_i];
           else
               sumb[b_i] = b[0];
        }
        
        int an = bsearch(suma,n,x)+1;
        cout<<"****"<<an<<endl;
        int bn = bsearch(sumb,m,x)+1;
        cout<<"!!!!!"<<bn<<endl;
        int max = an;
        if(an<bn)
            max = bn;
        for(int i=0;i<n;i++){
            if(suma[i]>x)
                break;
            diff = x - suma[i];
            int p = bsearch(sumb,m,diff);
            cout<<p<<endl;
            if(p+i+2 > max)
                max = p+i+1;
            cout<<"***"<<max<<endl;
        }
        // your code goes here
        cout<<max<<endl;
    }
    return 0;
}
