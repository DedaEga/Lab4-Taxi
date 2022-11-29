#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
string rubli(int i) {
	string r = "";
	switch (i)
	{
	case 0:
		r += "";
		break;
	case 1:
		r += "rubl' ";
		break;
	case 2:
		r += "rublya ";
		break;
	case 3:
		r += "rublej ";
		break;
	}
	return r;
}
string tishi(int i) {
	string t = "";
	switch (i)
	{
	case 1:
		t += "tysyacha ";
		break;
	case 2:
		t += "tysyachi ";
		break;
	case 3:
		t += "tysyach ";
		break;
	}
	return t;
}

string chisla(int y) {
	string chislo = "";
	int i = 3;
	int x;
	if (y / 1000 != 0) {
		x = y / 1000;
	}
	else {
		x = y;
	}
	switch (x / 100) {
	case 0:
		chislo += "";
		break;
	case 1:
		chislo += "sto ";
		break;
	case 2:
		chislo += "dvesti ";
		break;
	case 3:
		chislo += "trista ";
		break;
	case 4:
		chislo += "chetyresta ";
		break;
	case 5:
		chislo += "pyat'sot ";
		break;
	case 6:
		chislo += "shest'sot ";
		break;
	case 7:
		chislo += "sem'sot ";
		break;
	case 8:
		chislo += "vosem'sot ";
		break;
	case 9:
		chislo += "devyat'sot ";
		break;
	}
	switch ((x / 10) % 10) {
	case 0:
		chislo += "";
	case 1:
		switch (x % 100)
		{
		case 10:
			chislo += "desyat' ";
			break;
		case 11:
			chislo += "odinnadcat' ";
			break;
		case 12:
			chislo += "dvenadcat' ";
			break;
		case 13:
			chislo += "trinadcat' ";
			break;
		case 14:
			chislo += "chetyrnadcat' ";
			break;
		case 15:
			chislo += "pyatnadcat' ";
			break;
		case 16:
			chislo += "shestnadcat' ";
			break;
		case 17:
			chislo += "semnadcat' ";
			break;
		case 18:
			chislo += "vosemnadcat' ";
			break;
		case 19:
			chislo += "devyatnadcat' ";
			break;
		};
		break;
	case 2:
		chislo += "dvadcat' ";
		break;
	case 3:
		chislo += "tridcat' ";
		break;
	case 4:
		chislo += "sorok ";
		break;
	case 5:
		chislo += "pyat'desyat ";
		break;
	case 6:
		chislo += "shest'desyat ";
		break;
	case 7:
		chislo += "semdesyat ";
		break;
	case 8:
		chislo += "vomendesyat ";
		break;
	case 9:
		chislo += "devyanosto ";
		break;
	}
	if (((x / 10) % 10) == 1) {
		cout << "";
	}
	else {
		switch (x % 10) {
		case 0:
			chislo += "";
			break;
		case 1:
			if (y / 1000 != 0) {
				chislo += "odna ";
			}
			else {
				chislo += "odin ";
			}
			i = 1;
			break;
		case 2:
			if (y / 1000 != 0) {
				chislo += "dve ";
				i = 2;
			}
			else {
				chislo += "dva ";
				i = 2;
			}
			break;
		case 3:
			chislo += "tri ";
			i = 2;
			break;
		case 4:
			chislo += "chetyre ";
			i = 2;
			break;
		case 5:
			chislo += "pyat' ";
			break;
		case 6:
			chislo += "shest' ";
			break;
		case 7:
			chislo += "sem' ";
			break;
		case 8:
			chislo += "vosem' ";
			break;
		case 9:
			chislo += "devyat' ";
			break;
		}
	}
	if (y / 1000 != 0) {
		chislo += tishi(i) + chisla(y % 1000);
	}
	else {
		chislo += rubli(i);
	}
	return chislo;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int t, pas, sum;				//t-temp, pas-passanger,
	vector <int> price, dis;	    //dis-distance
	cout << "Vvedite kolichestvo passazhirov: ";
	cin >> pas;
}