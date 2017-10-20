#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
        // char c;
        // cin>>c;
        string s;// = "i like this program";
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            int j=i;
            while(j<s.length() && s[j]!=' ') j++;
            j--;
            int k=i,l=k;
            i = j+1;
            // cout<<j<<" "<<i<<" "<<k<<endl;
            while(k<j){
                // cout<<k<<" "<<j<<" "<<s[k]<<" "<<s[j]<<endl;
                char c = s[k];
                s[k] = s[j];
                s[j] = c;
                k++;
                j--;

            }
            // cout<<s<<"**"<<endl;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
	    Q--;
	}
	return 0;
}
