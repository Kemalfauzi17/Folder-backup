#include<iostream>
using namespace std;
int main() {
	int jam,menit,s,detik;
	cout<<"Masukan Dalam Satuan Detik : ";
	cin>>detik;
	jam=detik/3600;
	s=detik%3600;
	menit=s/60;
	s=s%60;
	cout<<jam<<" jam "<<endl;
	cout<<menit<<" menit "<<endl;
	cout<<detik<<" detik "<<endl;
	return 0;
}
