#include <iostream>
using namespace std;
int main()
{
    cout<<"Nama : ALVIN ANUGERAH PRATAMA\n";
    cout<<"NIM  : 22343019\n";
    cout<<"===============================\n";
    cout<<"\n";

    cout<<"Program Matriks 2 dimensi\n";
    int i,j;
    int nilai[10];
    cout<<"Jumlah elemen yang ingin diisi = ";
    cin>>j;

    for (i=0;i<j;i++){
        cout<<"Masukkan nilai ke-"<<i+1<<" = ";
        cin>>nilai[i];
    }
    cout<<"\n";
    cout<<"Hasil\n";
    for (i=0;i<j;i++){
        cout <<"Nilai ke-"<<i+1<<" = " <<nilai[i]<<endl;
    }
    return 0;
}
