#include<iostream>
using namespace std;
int main()
{
int a;
int b;
int sum;
int pilihan;
cout<<"Selamat Datang Di Welcome :v"<<endl;
cout<<endl;
cout<<"Kalkulator Sederhana By Rezki Andika"<<endl;
cout<<endl;
cout<<"Pilih Operator :\n";
cout<<"1.+\n"<<endl;
cout<<"2.-\n"<<endl;
cin>>pilihan;
switch(pilihan){
case 1 : cout<<"Anda Memilih Operator + (Penjumlahan)"<<endl;
cout<<endl;
 cout<<"Masukkan Angka Pertama :";
cin>>a;
cout<<"Masukkan Angka Kedua :";
cin>>b;
cout<<"Maka Hasilnya =";
sum=a+b;
cout<<sum<<endl;
break;
case 2 : cout<<"Anda Memilih Operator - (Pengurangan)"<<endl;
  cout<<"Masukkan Angka Pertama :";
cin>>a;
cout<<"Masukkan Angka Kedua :";
cin>>b;
cout<<"Maka Hasilnya = ";
sum=a-b;
cout<<sum<<endl;
break;
default : cout<<"Operator Yang Anda Masukkan Salah"<<endl;
}
return 0;  
}