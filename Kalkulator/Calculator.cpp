#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std ;

void Opening() {

    cout << left ;
    cout << "  ------------------------------------" << endl;
    cout << "----------------------------------------" << endl;
    cout << "||    kkkkk    aaa    ll       kkkk   ||" << endl ;
    cout << "||   kk       aa  aa  ll     kk       ||" << endl ;
    cout << "||   kk       aaaaaa  ll     kk       ||" << endl ;
    cout << "||    kkkkk   aa  aa  llllll   kkkk   ||" << endl ;
    cout << "----------------------------------------" << endl;
    cout << "  ------------------------------------" << endl;
    cout << "                                          " << endl ;
    cout << "==========================================" << endl ;
   
    int select;

    cout << "CHOSE OPERATION : " << endl ;
    cout << "=============================" << endl;
    cout << "1. Standard operation : " << endl;
    cout << "2. Advance operation : " << endl;
    cout << "3. back" << endl ;
    cout << "=============================" << endl;
    

}

void PenjumlahanStandar() {

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
        
        cout << "invalid operation" ;
        break;
    }

}

}

void PenjumlahanTambahan() {

     double num1, num2;
    int select ;
    
    while (true)
    {
    cout << left ;
    cout << " pilih operasi" << endl;
    cout << "========================" << endl;
    cout << " 1. akar kuadrat" << endl;
    cout << " 2. eksponensial" << endl;
    cout << " 3. logaritma" << endl;
    cout << " 4. sin" << endl;
    cout << " 5. cos" << endl;
    cout << " 6. tan" << endl;
    cout << " 7. Kembali" << endl;
    cout << " 8. Keluar" << endl;
    cout << "========================" << endl;

    cout << "masukan pilihan :" ;
    cin >> select ;
    cout << "========================" << endl;

    if (select == 7)
    {
        continue;
    }
    
    switch (select)
    {
    case 1:

        cout << "masukan bilangan :" ;
        cin >> num1;
        
        cout << "hasil dari akar kuadrat bilangan tersebut :" << sqrt(num1) <<endl;
        cout << "========================" << endl;
        break;

    case 2:

        cout << "masukan bilangan :" ;
        cin >> num1;
        cout << "masukan bilangan eksponen : ";
        cin >> num2 ;
        
        cout << "hasil dari eksponensial bilangan tersebut :" << pow(num1, num2) <<endl;
        cout << "========================" << endl;
        break;

    case 3:

        cout << "masukan bilangan pertama :" ;
        cin >> num1;
        
        cout << "hasil dari logaritma bilangan tersebut :" << log(num1) <<endl;
        cout << "========================" << endl;
        break;

    case 4:
        cout << "masukan sin :" ;
        cin >> num1;
        
        cout << "hasil dari sin bilangan tersebut :" << num1 << sin(num1) <<endl;
        cout << "========================" << endl;
        break;

     case 5:
        cout << "masukan cos :" ;
        cin >> num1;
        
        cout << "hasil dari cos bilangan tersebut :" << num1 << cos(num1) <<endl;
        cout << "========================" << endl;
        break;

     case 6:
        cout << "masukan tan :" ;
        cin >> num1;
        
        cout << "hasil dari tan bilangan tersebut :" << num1 << tan(num1) <<endl;
        cout << "========================" << endl;
        break;
    

    case 8:

        system("clear");
        break;

    default:
        
        cout << "invalid operation" ;
        break;
    }

}


}


int main() {

    int select;

    Opening() ;

   
    cout << "masukan pilihan : " << endl;
    cin >> select ;

    if (select == 1)
    {
        PenjumlahanStandar();
    }else if (select == 2)
    {
        PenjumlahanTambahan();}
    else if (select == 3)
    {
        system("clear");
    }else {
        
        cout << "input tidak valid" ;

    }

    return 0 ;
    
    
   
}
