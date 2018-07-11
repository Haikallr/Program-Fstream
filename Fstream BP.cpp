#include <iostream>
#include <conio.h>
#include <windows.h>
#define max 10
#include <fstream>
using namespace std;

struct Tumpukan
{
	int atas;
	int data[max];
}a;

void awal()
{
	a.atas=-1;
}

int kosong()
{
	if(a.atas==-1)
	return 1;
	else
	return 0;
}

int penuh()
{
	if(a.atas==max-1)
	return 1;
	else
	return 0;
}

void input(int data)
{
	if(kosong()==1)
{a.atas++;
	a.data[a.atas]=data;
	cout<<"Data "<<a.data[a.atas]<<" masuk ke stack";}
	else if(penuh()==0)
{a.atas++;
	a.data[a.atas]=data;
	cout<<"Data "<<a.data[a.atas]<<" masuk ke stack";}
	else
	cout<<"Tumpukan penuh";
}

void hapus()
{
	if(kosong()==0){
	cout<<"Data teratas sudah terambil";
	a.atas--;
}
	else
	cout<<"Data kosong";
}

void tampil()
{
	if(kosong()==0)
{
	ofstream data;
	data.open("Fstream.txt");
	for(int i=a.atas;i>=0;i--)
{
	cout<<"\nTumpukan ke "<<i<<"="<<a.data[i];
	data<<"\nTumpukan ke "<<i<<"="<<a.data[i];}
}
	else
	cout<<"Tumpukan kosong";
}

void bersih()
{
	a.atas=-1;
	cout<<"Tumpukan kosong!";
}

int main()
{
	int pil,data;
	awal();
	do
{
	system("cls");
	cout<<"|================================|\n";
	cout<<"| M. Haikal Ramadan (20170801058)|\n";
	cout<<"|================================|\n";
	cout<<"|\tPROGRAM FSTREAM	 	 |\n";
	cout<<"|================================|\n";
	cout<<"|1. Input                        |\n";
	cout<<"|2. Hapus                        |\n";
	cout<<"|3. Tampil                       |\n";
	cout<<"|4. Bersihkan                    |\n";
	cout<<"|5. Keluar                       |\n";
	cout<<"==================================\n";
	cout<<"Masukkan pilihan anda : ";
	cin>>pil;
	switch(pil)
{
case 1:cout<<"\nMasukkan data = ";cin>>data;
input(data);
break;
case 2:hapus();
break;
case 3:tampil();
break;
case 4:bersih();
break;
case 5: cout<<"Terimakasih, tekan apapun untuk keluar";
break;
}
getch(); }
while(pil!=5);}
