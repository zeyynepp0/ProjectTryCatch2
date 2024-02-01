#include <iostream>
#include"HataSinifi.h"

using namespace std;




int main() {
	try {
		int x;
		cout << "x degerini girin: ";
		cin >> x;
		if (x < 0)
			throw HataSinifi("hata mesaji no:1");
		else if (x == 0)
			throw 101;

		cout << " try sonu...x: " << x << endl;

	}
	
	catch (HataSinifi h) {
		cout << "Exception yakalandi! ozel hata mesaji: " << h.getHataMesajý() << endl;
		
	}
	catch (int hataKodu) {
		cout << "Exception yakalandi, hata kodu: " << hataKodu << endl;
	}
	
	cout << "bye....\n";
	return 0;
}