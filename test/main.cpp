#include "hello.h"
#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b =0;
	cout << "choisir nombre" << endl;
	cin >> a;
	cout << "la puissance de " << a << " est " << puissance(a) << endl;
	b = multplication (a,a);
	cout<<b;
	system("pause");
	return 0;
}