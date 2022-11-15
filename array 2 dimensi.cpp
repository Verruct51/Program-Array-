#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
    int baris,kolom,i,j,matriks1[3][3],matriks2[3][3],hasil;


    cout<<"Nama : ALVIN ANUGERAH PRATAMA\n";
    cout<<"NIM  : 22343019\n";
    cout<<"===============================\n";
    cout<<"\n";

    cout<<"Program Matriks 2 dimensi\n";
    cout<<"Input jumlah baris = ";
    cin>>baris;
    cout<<"Input jumlah kolom = ";
    cin>>kolom;
    cout<<endl;

    for (int i=0;i<baris;i++){
        for (int j=0;j<kolom;j++){
            cout<<"Baris "<<i+1<<" Kolom "<<j+1<<" = ";
            cin>>matriks1[i][j];
        }
    }

    cout<<"\n";
    cout<<"Matriks 1 : \n\t";
    for (int i=0;i<baris;i++){
        for (int j=0;j<kolom;j++){
            cout<<matriks1[i][j]<<"\t ";
        }
    cout<<"\n\t";
    }

    cout<<"\n";
    for (int i=0;i<baris;i++){
        for (int j=0;j<kolom;j++){
            cout<<"Baris "<<i+1<<" Kolom "<<j+1<<" = ";
            cin>>matriks2[i][j];
        }
    }

    cout<<"\n";
    cout<<"Matriks 2 : \n\t";
    for (int i=0;i<baris;i++){
        for (int j=0;j<kolom;j++){
            cout<<matriks2[i][j]<<"\t ";
        }
    cout<<"\n\t";
    }

    cout<<"\n";
    cout<<"Hasil pengurangan 2 matriks  \n\t";
    for (int i=0;i<baris;i++){
        for (int j=0;j<kolom;j++){
            hasil= matriks1[i][j] - matriks2[i][j];
            cout<<hasil<<"\t ";
        }
    cout<<"\n\t";
    }
}
