#include<iostream>
#include<cstring>
using namespace std;

int main () {
	
	string mystr;
	cout<<"what's your name? ";
	getline(cin, mystr);
	cout<<"Hello "<<mystr<<".\n";
	cout<<"what is your favorite team? ";
	getline(cin,mystr);
	cout<<"I like "<<mystr<<" too!\n";
	return 0;
}
