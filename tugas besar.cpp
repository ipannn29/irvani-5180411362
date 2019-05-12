#include <conio.h>
#include <iostream.h>
#include <conio.h>

struct data1{
char alamat[50],nama[20],JKlmn[10];};
data1 batas[100];
struct poli1{
char alamat[50],nama[20],JKlmn[10];};
poli1 polianak[100];
struct poli2{
char alamat[50],nama[20],JKlmn[10];};
poli1 poligigi[100];
int a,jmldata,c,data;

void inputdata(){
	cout<<"\nJumlah Data Yang Akan diinput : ";cin>>jmldata;
   data=0;
   for(c=0;c<jmldata;c++){
   data=data+1;
   cout<<"\nData ke-"<<data<<endl;
   cout<<"Nama\t: ";cin>>batas[a].nama;
   cout<<"Jenis Kelamin\t: ";cin>>batas[a].JKlmn;
   cout<<"Alamat\t: ";cin>>batas[a].alamat;
   a++;}clrscr();
   }
void inputdata1(){
	cout<<"\nJumlah Data Yang Akan diinput : ";cin>>jmldata;
   data=0;
   for(c=0;c<jmldata;c++){
   data=data+1;
   cout<<"\nData ke-"<<data<<endl;
   cout<<"Nama\t: ";cin>>polianak[a].nama;
   cout<<"Jenis Kelamin\t: ";cin>>polianak[a].JKlmn;
   cout<<"Alamat\t: ";cin>>polianak[a].alamat;
   a++;}clrscr();
   }
void inputdata2(){
	cout<<"\nJumlah Data Yang Akan diinput : ";cin>>jmldata;
   data=0;
   for(c=0;c<jmldata;c++){
   data=data+1;
   cout<<"\nData ke-"<<data<<endl;
   cout<<"Nama\t: ";cin>>poligigi[a].nama;
   cout<<"Jenis Kelamin\t: ";cin>>poligigi[a].JKlmn;
   cout<<"Alamat\t: ";cin>>poligigi[a].alamat;
   a++;}clrscr();
   }



void lihatdata(){
	int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNama\t||\tJenis Kelamin\t\t||\tAlamat\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].nama<<"\t\t||";
  cout<<batas[i].JKlmn<<"\t\t\t||";
  cout<<batas[i].alamat<<"\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();clrscr();}

void lihatdata1(){
	int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNama\t||\tJenis Kelamin\t\t||\tAlamat\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<polianak[i].nama<<"\t\t||";
  cout<<polianak[i].JKlmn<<"\t\t\t||";
  cout<<polianak[i].alamat<<"\t\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();clrscr();}

void lihatdata2(){
	int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNama\t||\tJenis Kelamin\t\t||\tAlamat\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<poligigi[i].nama<<"\t\t||";
  cout<<poligigi[i].JKlmn<<"\t\t\t||";
  cout<<poligigi[i].alamat<<"\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();clrscr();}

void hapusdata(){
	int x,y;
 cout<<"Hapus data pasien ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++){
 batas[i]=batas[i+1];
 }
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data pasien ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();clrscr();
	}

void hapusdata1(){
	int x,y;
 cout<<"Hapus data dokter ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++){
 polianak[i]=polianak[i+1];
 }
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data dokter ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();clrscr();
	}

void hapusdata2(){
	int x,y;
 cout<<"Hapus data dokter ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++){
 poligigi[i]=poligigi[i+1];
 }
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data dokter ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();clrscr();
	}

void editdata(){
	int m,n;
	cout<<"Masukan Data yang akan diedit : ";cin>>m;
	n=m-1;
	cout<<"Nama\t: ";cin>>batas[n].nama;
	cout<<"Jenis Kelamin\t: ";cin>>batas[n].JKlmn;
	cout<<"Alamat\t: ";cin>>batas[n].alamat;
	lihatdata();
	}

void editdata1(){
	int m,n;
	cout<<"Masukan Data dokter yang akan diedit : ";cin>>m;
	n=m-1;
	cout<<"NIM\t: ";cin>>polianak[n].nama;
	cout<<"Nama\t: ";cin>>polianak[n].JKlmn;
	cout<<"Nilai\t: ";cin>>polianak[n].alamat;
	lihatdata1();
	}

void editdata2(){
	int m,n;
	cout<<"Masukan Data dokter yang akan diedit : ";cin>>m;
	n=m-1;
	cout<<"Nama\t: ";cin>>poligigi[n].nama;
	cout<<"Jenis Kelamin\t: ";cin>>poligigi[n].JKlmn;
	cout<<"Alamat\t: ";cin>>poligigi[n].alamat;
	lihatdata2();
	}

   int main(){
   	int pilih;
      int pilih2;
      int pilih3;
      int pilih4;
      int pilih5;
      int pilih6;
      int pilih7;
      int pilih8;
      int tanggal;
 char jawab;
 awal:
  cout<<"\n================================ PILIHAN MENU =================================";
  cout<<"\n1. Data Pasien";
  cout<<"\n2. Data Poli";
  cout<<"\n3. Transaksi Pendaftaran";
  cout<<"\n0. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {clrscr();
   awal2 :
  cout<<"\n1. Masukkan data pasien";
  cout<<"\n2. Hapus Data pasien";
  cout<<"\n3. Lihat Data pasien";
  cout<<"\n4. Edit Data pasien";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih2;

   if(pilih2==1)
   {clrscr();inputdata();goto awal2;}
  if(pilih2==2)
   {clrscr();hapusdata();goto awal2;}
  if(pilih2==3)
   {clrscr();lihatdata();goto awal2;}
  if(pilih2==4)
   {clrscr();editdata();goto awal2;}
  if(pilih2==5)
   {clrscr();goto awal;}
  else
   {clrscr();goto awal2;}}

if (pilih==2)
{clrscr();
awal3 :
cout<<"\n1. Poli Anak";
cout<<"\n2. Poli Gigi";
cout<<"\0. Keluar";
cout<<"\n\nMasukkan Pilihan : ";
cin>>pilih3;

if (pilih3==1)
{clrscr();
awal4 :
  cout<<"\n1. Masukkan data dokter";
  cout<<"\n2. Hapus Data dokter";
  cout<<"\n3. Lihat Data dokter";
  cout<<"\n4. Edit Data dokter";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih4;

   if(pilih4==1)
   {clrscr();inputdata1();goto awal4;}
  if(pilih4==2)
   {clrscr();hapusdata1();goto awal4;}
  if(pilih4==3)
   {clrscr();lihatdata1();goto awal4;}
  if(pilih4==4)
   {clrscr();editdata1();goto awal4;}
  if(pilih4==5)
   {clrscr();goto awal3;}
  else
   {clrscr();goto awal4;}
 }
if (pilih3==2)
{clrscr();
awal5 :
  cout<<"\n1. Masukkan data dokter";
  cout<<"\n2. Hapus Data dokter";
  cout<<"\n3. Lihat Data dokter";
  cout<<"\n4. Edit Data dokter";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih5;

   if(pilih5==1)
   {clrscr();inputdata2();goto awal5;}
  if(pilih5==2)
   {clrscr();hapusdata2();goto awal5;}
  if(pilih5==3)
   {clrscr();lihatdata2();goto awal5;}
  if(pilih5==4)
   {clrscr();editdata1();goto awal5;}
  if(pilih5==5)
   {clrscr();goto awal3;}
  else
   {clrscr();goto awal5;}
 }
   if(pilih3==5)
   {clrscr();goto awal;}
  }

if (pilih==3)
{clrscr();
cout<<"Masukan Tanggal Pendaftaran : ";
cin>>tanggal;
cout<<endl;
cout<<"Pilih Data Pasien : ";
lihatdata();
cout<<"Pilih Data Poli : ";
goto awal6;
awal6 :
cout<<"\n1. Poli Anak";
cout<<"\n2. Poli Gigi";
cout<<"\0. Keluar";
cout<<"\n\nMasukkan Pilihan : ";
cin>>pilih6;
if(pilih6==1)
{cout<<"Pilih Data Poli : ";lihatdata1();goto awal6;}
if(pilih6==2)
	{cout<<"Pilih Data Poli : ";lihatdata2();goto awal6;}
if(pilih6==0)
   {clrscr();goto awal;}}

if(pilih==0)
   {clrscr();
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [T]                  \n"<<endl;
    cout<<"                                         ";cin>>jawab;
    if(jawab=='y'||jawab=='Y')
    {clrscr();
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(jawab=='t'||pilih=='T')
           {clrscr();goto awal;}}
  else
   {clrscr();cout<<"Pilihan 1-5";getch();clrscr();goto awal;}

   }

