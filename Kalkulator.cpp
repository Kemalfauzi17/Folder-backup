#include <iostream>
using namespace std;
int main() {
	int a,b,menu,result;
	cout<<"Menu Utama"<<endl;
	cout<<"1 Penjumlahan"<<endl;
	cout<<"2 Pengurangan"<<endl;
	cout<<"3 Perkalian"<<endl;
	cout<<"4 Pembagian"<<endl;
	cin>>menu;
	if(menu ==1){
		cout<<"Masukan Nilai A : ";
		cin>>a;
		cout<<"Masukan Nilai B : ";
		cin>>b;
		result=a+b;
		cout<<result;
	}else if(menu ==2){
		cout<<"Masukan Nilai A : ";
		cin>>a;
		cout<<"Masukan Nilai B : ";
		cin>>b;
		result=a-b;
		cout<<result;
		
	}else if(menu ==3){
		cout<<"Masukan Nilai A : ";
		cin>>a;
		cout<<"Masukan Nilai B : ";
		cin>>b;
		result=a*b;
		cout<<result;
	}else if(menu ==4){
		cout<<"Masukan Nilai A : ";
		cin>>a;
		cout<<"Masukan Nilai B : ";
		cin>>b;
		result=a/b;
		cout<<result;
	}
	return 0;
}
