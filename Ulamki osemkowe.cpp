// Ulamki osemkowe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//


#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	short t;
	cin >> t;

	while (t--)
	{
		string a;
		cin >> a;
		int dl = a.length();
		int b[300];
		for (int i = 0; i < 300; i++)
			b[i] = 0;
		
		for (int i = 2, j=-1; i < dl; i++, j--)
		{
			long double p;
			p = (a[i] - 48)*pow(8, j);
			for (int k = 0; k < (i - 1) * 3; k++)
			{
				p *= 10;
				int d = p;
				p = p - d;
				b[k] += d;
			}
			for (int k = ((i - 1) * 3) - 1; k > 0 ; k--)
			{
				if(b[k]>9)
				{
					b[k - 1]++;
					b[k] -= 10;
				}
			}
		}
		int q = dl * 3;
		while (b[q] == 0)
			q--;
		cout <<"0.";
		for (int i = 0; i <= q; i++)
			cout << b[i];

		cout << endl;
	}

	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
