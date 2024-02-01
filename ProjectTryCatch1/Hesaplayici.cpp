#include <iostream>

using namespace std;
int main2() {

	try {
		int x = 30;
		int y;
		cout << "Lutfen pozitif bir sayi girin: ";
		cin >> y;


		if (y == 0)
			throw 100;

		else if (y < 0)
			throw 101;

		else {
			int z = x / y;
			cout << z << endl;
		}

	}
	catch (int hataKodu) {
		cout << "Bir exception olustu, hata kodu: " << hataKodu << endl;
		if (hataKodu == 101) {
			cout << "negatif deger olculdu!";
			return -1;
		}
		else if (hataKodu == 100)
			cout << " 0 degeri olculdu!";
	}

	cout << "\nbye....\n";
	return 0;
}

