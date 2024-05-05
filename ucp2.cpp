// 1. 3 deklarasi variable :
//     string nama = "Asti";
//     int umur = 18;
//     float tinggi = 150,5;
//
//2. contoh implemntasi dr prosedur dan fungsi
//   prosedur:  int siswi(){
//              string nama="Nia";
//               void input(){
//               cout<<"Masukan nama =";
//               cin >>nama;}
//   fungsi : int siswa(){ 
//              string nama="fariq";
//            }
//              int main(){
//              cout <<"nama siswa adalah="<<nama<<endl;}

// 3. implemntasikan looping
//string pilihan;
//  do 
//  {
//    cout << "nasi goreng" << endl;
//    cout << "nasi padang" << endl;
//    cout << "warteg" << endl;

//  cout << "apakah kamu ingin makan"? (Yes/No)";
//    cin >> pilihan;
//  } while (pilihan == "Yes");
//}   
// 4. implementasi conditionl statement
//  int umur = 13;

//  if (umur >= 13) {
//  cout << "Anda cukup umur untuk menonton film ini." << endl;
//  } 
// else {
// cout << "Maaf, anda belum cukup umur untuk menonton film ini." << endl;
// }
// 5. implementasi dari struct
//  struct persegi_panjang{
//     int panjang;
//     int lebar;
//     int luas; 
//   };
//6.

#include <iostream>
using namespace std;

void input(){
    string kota = "Tangerang, Bekasi ";
    int sensor = sensor1, sensor2, sensor3;
    int jumlahkota; 
    cout << "masukan jumlah kota: ";
    cin >> jumlahkota;

    for (int i = 0; i < jumlahkota; i++) {
        cout << "masukan sensor1 untuk kota ";
        cin >> sensor[i];
        cout << "masukan sensor 2 untuk kota ";
        cin >> sensor[i];
        cout << "masukan sensor 3 untuk kota ";
        cin >> sensor[i];
        
    }
}

void display()
string kota;
string status;
int senso; {
    cout << "Nama Kota dan Status" << endl;
    for (int i = 0; i < string kota; i++) {
        cout << kota[i] << status[i] << endl;
    }
}

int main() {
    string Kota[100];
    int sensor1[100], sensor2[100], sensor3[100];
    string status[100];
    int namakota, sehat = 0, tidaksehat = 0;
    repeat;


    do {
        input(kota, sensor1, sensor2, sensor3);

        for (int i = 0; i < kota; i++) {
            int polusi = (sensor1[i] + sensor2[i] + sensor3[i]) / 3;
            if (polusi > 75 || sensor1[i] >= 45 || sensor2[i] >= 45 || sensor3[i] >= 45) {
                status[i] = "Tidak Sehat";
                tidaksehat++;
            } else {
                status[i] = "Sehat";
                sehat++;
            }
        }

        display(kota, status,jumlahkota);

        cout << "Total lokasi dengan kualitas udara Sehat: " << sehat<< endl;
        cout << "Total lokasi dengan kualitas udara Tidak Sehat: " << tidaksehat << endl;

        cout << "Apakah akan mengulang program? (true/false): ";
        cin >> repeat;
    } while (repeat);

    return 0;
}


    


