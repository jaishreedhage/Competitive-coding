#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
        int n;
        cin>>n;
        vector<int>v;
        v.push_back(1);
        for(int i=2;i<=n;i++){
            int carry = 0;
            for(int j=0;j<v.size();j++){
                int p = v[j] * i;
                p += carry;
                v[j] = p%10;
                carry = p/10;
            }
            while(carry>0){
                v.push_back(carry%10);
                carry /= 10;
            }
        }
        for(int i=v.size()-1;i>=0;i--)
            cout<<v[i];
        cout<<endl;
	    Q--;
	}
	return 0;
}
//had already done this qsn on hackerrank last december
