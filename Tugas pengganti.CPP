#include <conio.h>
#include <iostream.h>

struct data1{
char alamat[50],nama[20],JKlmn[10];};
data1 batas[100];
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
  cout<<batas[i].nama<<"\t\t\t||";
  cout<<batas[i].JKlmn<<"\t\t\t||";
  cout<<batas[i].alamat<<"\t\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();clrscr();}

void hapusdata(){
	int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++){
 batas[i]=batas[i+1];
 }
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();clrscr();
	}

void editdata(){
	int m,n;
	cout<<"Masukan Data yang akan diedit : ";cin>>m;
	n=m-1;
	cout<<"NIM\t: ";cin>>batas[n].nama;
	cout<<"Nama\t: ";cin>>batas[n].JKlmn;
	cout<<"Nilai\t: ";cin>>batas[n].alamat;
	lihatdata();
	}

   int main(){
   	int pilih;
      int pilih2;
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
   {clrscr();goto awal2;}
   }
       else
   {clrscr();cout<<"Pilihan 1-5";getch();clrscr();goto awal;}
   }