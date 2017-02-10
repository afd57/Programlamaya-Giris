#include <iostream>

using namespace std;

int main()
{
	int boyut;
	cout << "Bir sayi giriniz:";
	cin >> boyut;

	for (int i = 1; i <= boyut; i++)
	{
		for (int i2 = 0; i2 < i; i2++)
		{
			cout << '*';
		}
		cout << endl;
	}

	return 1;
}
