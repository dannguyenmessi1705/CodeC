#include <iostream>
using namespace std;
#define PASSWORD 17052002
int main(){
int p;
string m;   
cout << "Hay nhap mat khau vao: ";
cin >> p;
if (p == PASSWORD){
    cout << "Nhap so tien muon rut: ";
    cin >> m;
    cout << "Da rut thanh cong: " << m << "\n";
}
if (p != PASSWORD){
    cout << "Nhap lai mat khau lan 2: ";
    cin >> p;
        if (p == PASSWORD){
            cout << "Nhap so tien muon rut: ";
            cin >> m;
            cout << "Da rut thanh cong: " << m << "\n";
                } else {
				
cout << "Tai khoan cua ban da bi khoa \n";}
        }
        
    }
    



