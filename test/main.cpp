#include "hello.h"
#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b =0;
	int c = 0;
	cout << "choisir nombre" << endl;
	cin >> a;
	cout << "la puissance de " << a << " est " << puissance(a) << endl;
	b = multiplication (a,a);
	cout<<b<<endl;
	cout << addition(a,b)<<endl;
	cout << "la tele c'est nul" << endl;
	system("pause");
	return 0;
}