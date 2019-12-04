#include<cstdio>
#include <iostream>

using namespace std;

/*
Dana jest następująca funkcja rekurencyjna:
int coztojest(int a, int b){
if(b == 0)
	return 0;
if(b % 2 == 0)
	return coztojest(a+a, b/2);
return coztojest(a+a, b/2) +a;
}


b) Co oblicza funkcja coztojest(a, b), zakładając, że  a i b są liczbami całkowitymi dodatnimi?
c) Co będzie obliczać funkcja coztojest(a, b) (zakładając, że  a i b są liczbami całkowitymi dodatnimi) , gdy znak + zostanie zastąpiony przez *, a instrukcja return 0 przez instrukcję return 1?

*/

int coztojest(int a, int b) {
	if (b == 0)
		return 0;
	if (b % 2 == 0)
		return coztojest(a + a, b / 2);
	return coztojest(a + a, b / 2) + a;
}

int coztojest2(int a, int b) {
	if (b == 0)
		return 1;
	if (b % 2 == 0)
		return coztojest(a * a, b / 2);
	return coztojest(a * a, b / 2) + a;
}

int main() {
	//int a, b;
	//cout << "wpisz 2 liczby: ";
	//cin >> a >> b;
	//cout << "\nwynik = " << coztojest(a, b) << "\n";

	// a) Jakie będą wyniki wywołań coztojest(2, 25) i  coztojest(3, 11) ?

	cout << "wywolanie funkcji coztojest z parametrem a = 2, b= 25:\n";
	cout << coztojest(2, 25) << "\n";

	cout << "wywolanie funkcji coztojest z parametrem a = 3, b= 11:\n";
	cout << coztojest(3, 11) << "\n";

	// b) Co oblicza funkcja coztojest(a, b), zakładając, że  a i b są liczbami całkowitymi dodatnimi ?
	// wydaje mi sie ze to funkcja do oblicznia NWW

	// c) Co będzie obliczać funkcja coztojest(a, b) (zakładając, że  a i b są liczbami całkowitymi dodatnimi), gdy znak + zostanie zastąpiony przez*, a instrukcja return 0 przez instrukcję return 1 ?
	cout << "wywolanie funkcji coztojest2 z parametrem a = 2, b= 25:\n";
	cout << coztojest2(2, 25) << "\n";

	cout << "wywolanie funkcji coztojest2 z parametrem a = 3, b= 11:\n";
	cout << coztojest2(3, 11) << "\n";

}