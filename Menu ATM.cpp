#include <iostream>//Menu ATM
using namespace std;
int main (){
	cout<<"Pilih Menu"<<endl;
	cout<<"1 Tarik Dana"<<endl;
	cout<<"2 Transfer Dana"<<endl;
	cout<<"3 Lihat Saldo"<<endl;
	cout<<"Masukan Pilihan Anda :";
	int menu;
	cin>>menu;
	if(menu ==1){
		cout<<"Anda Memilih Tarik Dana";
	}else if(menu ==2){
		cout<<"Transfer Data";
	}else if (menu ==3){
		cout<<"Lihat Saldo";
	}else
	cout<<"Pilihan Tidak Tersedia";
	
return 0;
}
