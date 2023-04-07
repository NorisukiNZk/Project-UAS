#include<iostream>
#include <iomanip>
using namespace std;

int main(){
	string user, pass, ulang,sewa, namapenyewa, namamobil, kodemobil, kodepromo;
	int pil, a, lamamenyewa, hargaperhari, totalkeseluruhan, totalpajak;
	double pajak, subtotal, diskon, potongan;

	a=3;
	cout<<"======================================================"<<endl;
	cout<<"PROGRAM TRANSAKSI RENTAL DI RENTAL FTI UNISKA"<<endl;
	cout<<"======================================================"<<endl;
	while(a<=3 && a>0){
		cout<<"Inputkan Username : "; cin>>user;
		cout<<"Inputkan Password : "; cin>>pass;
		if(user == "admin" && pass == "admin"){
			cout<<endl;
			cout<<"LOGIN BERHASIL";
			cout<<endl;
			do{
			cout << fixed;
    		cout << setprecision(0);
    		system("cls");
			cout<<endl;
			cout<<"==============================="<<endl;
			cout<<"Menu"<<endl;
			cout<<"1. Input Transaksi"<<endl;
			cout<<"2. Cetak Transaksi Terakhir"<<endl;
			cout<<"3. Keluar"<<endl;
			cout<<"Inputkan Pilihan [1-3] :"; cin>>pil;
			if(pil==1){
				system("cls");
				cout<<"PROGRAM TRANSAKSI RENTAL DI RENTAL FTI UNISKA"<<endl;
				cout<<"=============================================="<<endl;
				cout<<"Input Nama Penyewa : ";cin>>namapenyewa;
				cout<<"Input Kode Mobil : ";cin>>kodemobil;
				cout<<"Input Lama Menyewa : ";cin>>lamamenyewa;
				cout<<"Input Tanggal Menyewa :";cin>>sewa;
				cout<<"Input Kode Promo : ";cin>>kodepromo;
					if(kodemobil=="MPV-1"){
						namamobil="Toyota Avanza 2015";
						hargaperhari=300000;
					}else if(kodemobil=="MPV-2"){
						namamobil="Daihatsu Xenia 2016";
						hargaperhari=320000;
					}else if(kodemobil=="CTY-1"){
						namamobil="Daihatsu Ayla 2017";
						hargaperhari=230000;
					}else if(kodemobil=="CTY-2"){
						namamobil="Honda Brio 2015";
						hargaperhari=250000;
					}else if(kodemobil=="HMPV-1"){
						namamobil="Toyota Alphard 2015";
						hargaperhari=1200000;
					}else{
						namamobil="-";
						hargaperhari=0;
					}
				cout<<endl;
				cout<<"Data Transaksi Pembayaran Rental di RENTAL FTI UNISKA"<<endl;
				cout<<"====================================================="<<endl;
				cout<<"Nama Penyewa		: "<<namapenyewa<<endl;
				cout<<"Tanggal Menyewa		: "<<sewa<<endl;
				cout<<"Lama Menyewa		: "<<lamamenyewa<<endl;
				cout<<"Kode Mobil		: "<<kodemobil<<endl;
				cout<<"Nama Mobil		: "<<namamobil<<endl;
				cout<<"Biaya Per Hari		: "<<hargaperhari<<endl;
				subtotal = hargaperhari * lamamenyewa;
				pajak = 11 * subtotal / 100;
				totalpajak = subtotal + pajak;
				potongan = subtotal * diskon;
				if(kodepromo=="HEMAT01" && subtotal>=1100000){
						diskon=0.1;
				}else if(kodepromo=="HEMAT02" && subtotal>=1500000){
						diskon=0.15;
				}else if(kodepromo=="HEMAT03" && subtotal>=2500000){
						diskon=0.20;
				}
				totalkeseluruhan = totalpajak - potongan;
				cout<<"Subtotal		: "<<subtotal<<endl;
				cout<<"Pajak 11%		: "<<pajak<<endl;
				cout<<"Total Setelah Pajak	: "<<totalpajak<<endl;
				cout<<"Kode Promo		: "<<kodepromo<<endl;
				cout<<"Potongan		: "<<potongan <<endl;
				cout<<"Total Keseluruhan	: "<<totalkeseluruhan<<endl;
			}else if(pil==2){
					if(namapenyewa == ""){
	                    cout<<"Belum Ada Data Transaksi Pembayaran"<<endl;
	                }else{
	                cout<<"Data Transaksi Pembayaran Rental di RENTAL FTI UNISKA"<<endl;
					cout<<"====================================================="<<endl;
					cout<<"Nama Penyewa		: "<<namapenyewa<<endl;
					cout<<"Tanggal Menyewa		: "<<sewa<<endl;
					cout<<"Lama Menyewa		: "<<lamamenyewa<<endl;
					cout<<"Kode Mobil		: "<<kodemobil<<endl;
					cout<<"Nama Mobil		: "<<namamobil<<endl;
					cout<<"Biaya Per Hari		: "<<hargaperhari<<endl;
					subtotal = hargaperhari * lamamenyewa;
					pajak = 11 * subtotal / 100;
					totalpajak = subtotal + pajak;
					potongan = subtotal * diskon;
					if(kodepromo=="HEMAT01" && subtotal>=1100000){
							diskon=0.1;
					}else if(kodepromo=="HEMAT02" && subtotal>=1500000){
							diskon=0.15;
					}else if(kodepromo=="HEMAT03" && subtotal>=2500000){
							diskon=0.20;
					}
					totalkeseluruhan = totalpajak - potongan;
					cout<<"Subtotal		: "<<subtotal<<endl;
					cout<<"Pajak 11%		: "<<pajak<<endl;
					cout<<"Total Setelah Pajak	: "<<totalpajak<<endl;
					cout<<"Kode Promo		: "<<kodepromo<<endl;
					cout<<"Potongan		: "<<potongan <<endl;
					cout<<"Total Keseluruhan	: "<<totalkeseluruhan<<endl;
					}
				}else{
					return 0;
				}
		cout<<"Ulangi Lagi(y/t): "; cin>>ulang;
		}while(ulang=="y");
		return 0;
	}else{
		a--;
	cout << "\n====================================\n";
  cout << "Kesempatan Mengulang : ("<<a<<"x)\n";
	cout << "====================================\n\n";
	}
}
}
