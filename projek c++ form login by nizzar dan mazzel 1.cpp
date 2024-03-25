#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int i;
	char ch;
	cout << "---------------------------------------\n";
	cout << "selamat datang di form login bautan saya\n";
	cout << "---------------------------------------\n";
	for (i=1; i<=3; i++) {
		string user = "";
		string pass = "";
		cout << "username : "; cin >> user ;
		cout << "password : ";
			ch = _getch();
			while(ch !=13){//character 13 is enter
			pass.push_back(ch);
			cout << '*';
			ch = _getch();
			}
		
		if (user == "nijar" && pass == "12345") {
			cout << "\n\nAnda berhasil login. \n";
			return 0;
		} else{
			cout <<"\n\nMAAF KAMU DITOLAK SAMA SISTEM KARENA PASSWORD DAN USERNAME SALAH DAN KAMU GA GANTENG.\n\n";
		}
		}
		while (i <= 3)
		
		cout << "ANDA TELAH 3X MEMASUKAN USER YANG SALAH DAN PASSWORD  YANG SALAH PULA. \n"<<endl;
		cout << "KARENA ANDA NYUSAHIN DAN JELEK KAMI AKAN BLOKIR KAMU. \n";
		cout << "SILAHKAN MENGHUBUNGI ADMIN THX .";
		getch();
	}

