// program #39: struct B

#include<iostream>
using namespace std;

struct nameType {
	char first [10];
	char middleInitial;
	char last [20];
};

void inputSingle(nameType &sname);

int main() {
	nameType sname, ename[3], currentName;
	cout<<"--- Input Single ---\n";
	inputSingle(sname);
	cout<<"---Display Single ---\n";
	cout<<sname.first<<sname.middleInitial<<". "<<sname.last<<"\n";
}
void inputSingle(nameType &sname) {
	cout<<"enter your first name: ";
	cin>>sname.first;
	cout<<"enter your middle initial: ";
	cin>>sname.middleInitial;
	cin.ignore();
	cout<<"enter your last name: ";
	cin>>sname.last;
}
