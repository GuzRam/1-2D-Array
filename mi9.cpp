#include<iostream>
#include<string>
using namespace std;

class mi9{
    public:
    void input();
    void proses();
    void output();

    string arr1[100];
    string arr2[100];
    string arr3[100][100];
    string arr4[100][100];

    int n;
    int z = 0;
    int banyakKolom;
    int banyakBaris;

};

void mi9::input(){
    cout << "\n\nmasukan banyak data : ";
    cin >> n;

    for (int i=0;i<n;i++){
        cout << "masukan data ID Karyawan" << i+1 << " : ";
        cin.ignore();
        getline(cin,arr1[i]);

    }
    //menampilkan data pada array
    for(int j=0;j<n;j++){
        cout << arr1[j] << " ,";
    }

}

void mi9::proses(){
    cout << "\n\nmasukan banyaknya kolom : ";
    cin >> banyakKolom;
    cout << "masukan banyaknya baris : ";
    cin >> banyakBaris;

    for(int i=0;i<banyakBaris;i++){
        for(int j=0;j<banyakKolom;j++){
            arr2[i][j] = arr[z];
            z++;
        }

    }
}

void mi9::output(){
    cout << "|\tDepartemen\t|\tID Karyawan\t|\tNama\t\t\t|\n";
    for(int i=0;i<banyakBaris;i++){
        for(int j=0;j<banyakKolom;j++){
            cout <<"|"<< arr2[i][j] << "\t\t|" "\t";
        }    
    cout <<  endl;
    cout <<  endl;
    }

    cout << "--------------------------------------------------------------------------------------" << endl;
}

int main(){
    mi9 x;
    x.input();
    x.proses();
    x.output();
    return 0;
}