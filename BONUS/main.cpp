/* 
Tugas Menghitung BONUS Karyawan c++
Nama : Muhamad Abdul Aziz
Nim   : 18101140004
Kelas : 01TPLE001
Ruang : 1001
*/
/*
ALGORITMA
Input( masa_kerja(tahun), sales, gaji-pokok)

Apabila masa kerja > 5(thn):
Apabila sales>2000:
Bonus = 50% dari gaji pokok
Apabila sales tidak > 2000:
Bonus = 25% dari gaji pokok

Apabila masa kerja 1-5 (thn):
Apabila sales>2000:
Bonus = 35% dari gaji pokok
Apabila sales tidak > 2000:
Bonus = 15% dari gaji pokok

Apabila masa kerja <1(thn):
Apabila sales>2000:
Bonus = 25% dari gaji pokok
Apabila sales tidak >2000:
Bonus = 0%
Output(bonus) 

*/






#include <iostream>
using namespace std;

int main()
{
    float masa_kerja;
    int sales;
    int gaji_pokok;
    float Bonus1,Bonus2,Bonus3,Bonus4,Bonus5,Bonus6;
    
    cout<<"MENENTUKAN BONUS GAJI \n";
    
    cout<<"masukkan masa lama kerja (tahun) :";
    cin>>masa_kerja;
    
    
    cout<<"masukkan banyaknnya sales :";
    cin>>sales;
    
    cout<<"Masukkan gaji pokok anda (Rp) :";
    cin>>gaji_pokok;
    
    //mulai menghitung Jika  masa kerja lebih dr 5th
 if (masa_kerja>5 && sales>2000){
     Bonus1 = gaji_pokok*0.5 ;
     cout<<"anda mendapat bonus : \n" <<Bonus1;
     
 }else if ((masa_kerja>5)&&(sales <2001)) {
     Bonus2 = gaji_pokok*0.25;
     cout<<"anda hanya mendapat bonus : \en" <<Bonus2;
 };
 
 //Mulai menghitung jika masa kerja antara 5 sampai 1 th
 
if ((masa_kerja >=1 && masa_kerja <=5) && (sales>2000)){
    Bonus3 = gaji_pokok*0.35 ;
    cout<<"Masa kerja anda kurang dari 5Th maka anda mendapatkan bonus : " <<Bonus3;
    
}else if ((masa_kerja>=1 && masa_kerja <=5 ) && (sales<2001)){
    Bonus4 = gaji_pokok*0.15;
    cout<<"masa Kerja anda <5TH dan sales anda <=2000 maka bonusnya : " <<Bonus4;
    
};

//mulai menghitung jika masa kerja kurang dari 1TH

if (masa_kerja<1  && sales>2000){
    Bonus5 = gaji_pokok*0.25;
    cout<<"anda masi NOOB jadi bonusnya : " <<Bonus5;
} else if (masa_kerja<1 && sales<2001){
    Bonus6 = gaji_pokok*0;
    cout<<"anda tidak mendapatkan BONUS:" <<Bonus6 ;
};

}