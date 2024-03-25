#include <iostream>
using namespace std;

double suhu(double c){
    double f;
    f = (c*9/5)+32;
    return f;
}
double suhu(double c, double r){
    double f;
    f = (c*9/5)+32;
    return f;
}
double suhu(double c, double r, double k){
    double f;
    f = (c*9/5)+32;
    return f;
}   
int main(){
    double c, r, k;
    cout << "Masukkan suhu dalam celcius : ";
    cin >> c;
    cout << "Masukkan suhu dalam reamur : ";
    cin >> r;
    cout << "Masukkan suhu dalam kelvin : ";
    cin >> k;
    cout << "Suhu dalam fahrenheit adalah : " << suhu(c) << endl;
    cout << "Suhu dalam fahrenheit adalah : " << suhu(c, r) << endl;
    cout << "Suhu dalam fahrenheit adalah : " << suhu(c, r, k) << endl;
    return 0;
}