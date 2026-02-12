#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std ;

int main() {

    int num1, num2, select ;
    
    cout << " pilih operasi" << endl;
    cout << " 1. Perkalian" << endl;
    cout << " 2. Pembagian" << endl;
    cout << " 3. Penjumlahan" << endl;
    cout << " 4. Pengurang" << endl;
    cout << " 5. Kembali" << endl;

    cout << "masukan bilangan pertama :" << endl;
    cin >> num1;
    cout << "masukan bilangan kedua : " << endl;
    cin >> num2 ;
    
    cout << "masukan pilihan :" << endl ;
    cin >> select ;

    switch (select)
    {
    case 1:
        
        cout << "hasil dari perkalian bilangan tersebut :" << num1 * num2 <<endl;
        break;
    
    default:
        
        
        break;
    }



}
