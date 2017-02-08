#include <iostream>

using namespace std;

int main()
{
	int boyut;
	cout << "Bir sayi giriniz:";
	cin >> boyut;
	int bosluk = 0;
	for (int i = boyut; i > 0; i--)
	{
		for (bosluk = 1; bosluk < i; bosluk++)
		{
			cout << ' ';
		}
		for (int i2 = 0; (boyut - i) >= i2; i2++)
		{
			cout << "*";
		}
		cout<<endl;
	}

	return 1;
}
