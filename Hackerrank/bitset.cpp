#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t
#include <bitset>         // std::bitset
#include <vector>
#include <map>
#include <map>

using namespace std;

int main ()
{
	// bitset<8> foo;
	// // cout<<"Enter a number"<<endl;
	// // cin>>foo;
	// cout<<"Bitset is "<<foo<<endl;;
	// cout<<"size of foo is "<<foo.size()<<endl;
	// if(foo.any())
	// 	cout<<"No. of bits set are "<<foo.count()<<endl;
	// if(foo.none())
	// 	cout<<"no bits are set"<<endl;
	// if(foo.all())
	// 	cout<<"all bits are set"<<endl;

	// bitset<8>mybits(20);
	// // for(size_t i=mybits.size()-1;i>=0;i--)
	// // 	cout<<mybits.test(i)<<" ";
	// // mybits.set();
	// // cout<<mybits<<endl;

	// mybits.set(3,0);
	// cout<<mybits<<endl;

	// string mystring = mybits.to_string<char,string::traits_type,string::allocator_type>();
	// cout<<mystring<<endl;

	// cout<<endl;

	// vector<int> myvector (3,100);
 //  	vector<int>::iterator it;

	// it = myvector.begin();
	// it = myvector.insert ( it , 200 );

	

	// myvector.insert (it,2,300);

	// cout << "myvector contains:";
	// for (it=myvector.begin(); it<myvector.end(); it++)
	// 	cout << ' ' << *it;

	// // "it" no longer valid, get a new one:
	// it = myvector.begin();

	// vector<int> anothervector (2,400);
	// myvector.insert (it+2,anothervector.begin(),anothervector.end());

	// int myarray [] = { 501,502,503 };
	// myvector.insert (myvector.begin(), myarray, myarray+3);

	// cout << "myvector contains:";
	// for (it=myvector.begin(); it<myvector.end(); it++)
	// 	cout << ' ' << *it;
	// cout << '\n';

	// std::map<char,int> mymap;

	// // first insert function version (single parameter):
	// mymap.insert ( std::pair<char,int>('a',100) );
	// mymap.insert ( std::pair<char,int>('z',200) );

	// std::pair<std::map<char,int>::iterator,bool> ret;
	// ret = mymap.insert ( std::pair<char,int>('z',500) );
	// if (ret.second==false) {
	// std::cout << "element 'z' already existed";
	// std::cout << " with a value of " << ret.first->second << '\n';
	// }

	// // second insert function version (with hint position):
	// std::map<char,int>::iterator it = mymap.begin();
	// mymap.insert (it, std::pair<char,int>('b',300));  // max efficiency inserting
	// mymap.insert (it, std::pair<char,int>('c',400));  // no max efficiency inserting

	// // third insert function version (range insertion):
	// std::map<char,int> anothermap;
	// anothermap.insert(mymap.begin(),mymap.find('c'));

	// // showing contents:
	// std::cout << "mymap contains:\n";
	// for (it=mymap.begin(); it!=mymap.end(); ++it)
	// std::cout << it->first << " => " << it->second << '\n';

	// std::cout << "anothermap contains:\n";
	// for (it=anothermap.begin(); it!=anothermap.end(); ++it)
	// std::cout << it->first << " => " << it->second << '\n';

	multimap<int,int>mp;
	mp.insert(pair<int,int>(2,45));
	mp.insert(pair<int,int>(50,60));

	multimap<int,int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++)
		cout<<it->first<<" "<<it->second<<endl;

	return 0;
}