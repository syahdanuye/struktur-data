#include <iostream.h>
#include <stdlib.h>

struct mahasiswa
{
char nim [11];
char nama [50];
char jurusan [12];
}mhs[100];
struct point{
int tugas;
int mid;
int uas;
}point[100];

int total, rata;
char no;

int main ()
{

int i,j;
cout<<"Masukan Banyak Data Mahasiswa :";cin>>j;
for(i=1;i<=j;i++)
{
cout<<"--------------"<<endl;
cout<<"DATA "<<i<<":"<<endl;
cout<<" NIM     :";cin>>mhs[i].nim;
cout<<" NAMA    :";cin>>mhs[i].nama;
cout<<" JURUSAN :";cin>>mhs[i].jurusan;

cout<<"--------------"<<endl;
cout<<"Nilai tugas    :";cin>>point[i].tugas;
cout<<"Nilai mid      :";cin>>point[i].mid;
cout<<"Nilai uas      :";cin>>point[i].uas;
 }

for(i=1;i<=j;i++)
{
cout<<"--------------"<<endl;

cout<<"NIM anda     : "<<mhs[i].nim<<endl;
cout<<"NAMA anda    : "<<mhs[i].nama<<endl;
cout<<"JURUSAN anda : "<<mhs[i].jurusan<<endl;

cout<<" Nilai Tugas   :"<<point[i].tugas<<endl;
cout<<" Nilai Mid     :"<<point[i].mid<<endl;
cout<<" Nilai Uas     :"<<point[i].uas<<endl;


total=point[i].tugas + point[i].mid + point[i].uas;
cout<<"Total Nilai ="<<total<<endl;

rata=total/3;
cout<<"Rata - Rata ="<<rata<<endl;

if (rata>=80 && rata<=100)
    no='A';
else if (rata>=70 && rata<=80)
    no='B';
else if (rata>=60 && rata<=69)
    no='C';
else if (rata>=50 && rata<=59)
    no='D';
else no='E';
cout<<"Grade ="<<no<<endl;

}

}