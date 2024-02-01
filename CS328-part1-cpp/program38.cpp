#include<iostream>
using namespace std;

struct nameType {
	char first[10];
	char middleInitial;
	char last[20];
};

nameType inputSingle();

int main() {
	nameType sname, ename[3], currentname;
	cout<<"--- input single ---\n";
	sname = inputSingle();
	cout<<"--- Display Single ---\n";
	cout<<sname.first<<" "<<sname.middleInitial<<". "<<sname.last<<"\n";
	
	cout<<"--- input many ---\n";
	for(int index = 0; index < 3; index++) {
		cout<<"#"<<index<<"\n";
		ename[index] = inputSingle();
	}
	cout<<"--- display many ---\n";
	
	for(int index = 0; index < 3; index++) {
		currentname = ename[index];
		cout<<currentname.first<<" "<<currentname.middleInitial<<". "<<currentname.last<<"\n";
	}
}

nameType inputSingle() {
	nameType name;
	cout<<"enter your first name: ";
	cin>>name.first;
	cout<<"Enter your middle initial: ";
	cin>>name.middleInitial;
	cin.ignore();
	cout<<"Enter your last name: ";
	cin>>name.last;
	return name;
}
