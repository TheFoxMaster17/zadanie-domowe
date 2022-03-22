using namespace std;
#include <iostream>

int main()
{
    int i;
    int a;
    int b;
	int nww;
	int counter = 0;
	cout << "podaj liczbe a: ";
	cin >> a;
	cout << "podaj liczbe b: ";
	cin >> b;
	cout << "czy chcialbys obliczyc NWD, czy NWW dwoch liczb? (1 to NWD, a 2 to NWW)\n";
	cin >> i;
	cout << endl;
	switch (i)
	{
	case 1:
		while (a != b)
		{
			if (a < b)
			{
				b = b - a;
				counter++;
			}
			else if (a > b)
			{
				a = a - b;
				counter++;
			}
			else
			{
				cout << "error";
			}
		}
		cout << "NWD tych dwoch liczb wynosi: " << a << endl;
		cout << "obliczenie tego zostalo wykonane w " << counter << " krokach\n";
		break;
	case 2:
		nww = a * b;
		while (a != b)
		{
			if (a < b)
			{
				b = b - a;
				counter++;
			}
			else if (a > b)
			{
				a = a - b;
				counter++;
			}
			else
			{
				cout << "error";
			}
		}
		nww = nww / a;
		cout << "NWW tych dwoch liczb wynosi: " << nww << endl;
		cout << "obliczenie tego zostalo wykonane w " << counter << " krokach\n";
		break;
	default:
		cout << "blad";
		break;
	}
}