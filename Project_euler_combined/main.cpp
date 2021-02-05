// Project_euler_combined.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <cstdio>
#include <iostream>
#include <math.h> 
#include "functions.h"
#include <map>
#include <string>
#include <iomanip>
using namespace std;


int range = 0;
int main()
{
	cout << "Welcome to Project Euler application." << endl << "Please choose problem from range 1-5" << endl;
	cin >> range;
	switch (range)
	{
	case 1:
		cout << "Let me do math" << endl;
	
	default:

		break;
	}
	
	double x;
	x = sqrt_pi();
	show_pi();
	getchar();
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




