#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std ;

int main() {

    double num1, num2;
    int select ;
    
    while (true)
    {
    cout << left ;
    cout << " pilih operasi" << endl;
    cout << "========================" << endl;
    cout << " 1. Perkalian" << endl;
    cout << " 2. Pembagian" << endl;
    cout << " 3. Penjumlahan" << endl;
    cout << " 4. Pengurang" << endl;
    cout << " 5. Kembali" << endl;
    cout << " 6. Keluar" << endl;
    cout << "========================" << endl;

    cout << "masukan bilangan pertama :" ;
    cin >> num1;
    cout << "masukan bilangan kedua : ";
    cin >> num2 ;

    cout << "masukan pilihan :" ;
    cin >> select ;
    cout << "========================" << endl;

    if (select == 6)
    {
        break;
    }
    

    

    switch (select)
    {
    case 1:
        
        cout << "hasil dari perkalian bilangan tersebut :" << num1 * num2 <<endl;
        cout << "========================" << endl;
        break;

    case 2:
        
        cout << "hasil dari pembagian bilangan tersebut :" << num1 / num2 <<endl;
        cout << "========================" << endl;
        break;

    case 3:
        
        cout << "hasil dari penjumlahan bilangan tersebut :" << num1 + num2 <<endl;
        cout << "========================" << endl;
        break;

    case 4:
        
        cout << "hasil dari pengurangan bilangan tersebut :" << num1 - num2 <<endl;
        cout << "========================" << endl;
        break;
    

    case 5:
        
        cout << "mengulang input angka.........." <<endl;
        cout << "========================" << endl;
        continue;

    default:
        
        cout << "pilihan tidak valid" ;
        break;
    }

}

}
