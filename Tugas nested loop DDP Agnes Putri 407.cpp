#include<iostream>
using namespace std;

int main(){
    int ukuranKotak, x, y ;
    cout<<"========================="<<endl;
    cout << "Masukan ukuran kotak = " ;
    cin >> ukuranKotak ;
    
    cout << endl;
    
    for ( y = 1 ; y <= ukuranKotak ;y++){
        cout << " _" ;
    }
    
    cout << endl ;
    
    for ( x = 1 ; x <= ukuranKotak ;x++){
        cout << "|" ;
        
        for ( y = 1 ; y <= ukuranKotak ; y++){
            cout << "_|" ;
        }
        cout << endl ;
    }
    cout<<"====================="<<endl;
    cout<<"keluar dari program";
    return 0;
}