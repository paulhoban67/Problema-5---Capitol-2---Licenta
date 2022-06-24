// algoritmul de mai jos citeste un numar si afiseaza numarul impreuna
// cu alte 2 numere prime care insumate vor da numarul citit;
// la citirea unui numar <= 2 se va afisa ca nu exista numere prime insumate
// 4 -> 4 2 2
// 6 -> 6 3 3
// 8 -> 8 3 5
// 7 -> 7 2 5
// 5 -> 5 2 3

#include <iostream>
using namespace std;
bool Prim(int p) {
	int d = 2;
	while ((d * d <= p) && (p % d > 0)) {
		d++;
	}
	return d * d > p;
}
bool Desc(int n, int& p1, int& p2) {
	p1 = 2;
	while ((p1 <= n / 2) && (!Prim(p1) || !Prim(n - p1))) {
		p1++;
	}
	p2 = n - p1;
	return p1 <= n / 2;
}
int main() {
	int a;
	int b = 0;
	int c = 0;
	do {
		cout << "Dati nr numerelor: ";
		cin >> a;
		if (a > 0) {
			if (Desc(a, b, c))
				cout << a << ", " << b << ", " << c << endl;
			else
				cout << "Nu ex. desc.";
		}
	} while (a > 0);
	return 0;
}