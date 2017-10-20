#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	map<int,string> name,name1;
	name[1] = "JAi";
	name[2] = "tuhin";
	name1[1] = "JAi";
	name1[2] = "tuhin";
	name1[4]="HELLO";
	if(name==name1)
		cout<<"YES"<<endl;
	if(name<name1)
		cout<<"***"<<endl;
	if(name>name1)
		cout<<"NO"<<endl;
	cout<<name.size()<<endl;
	cout<<name[1];	
	cout<<name.size();
	for(map<int,string>::iterator it=name.begin();it!=name.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
}