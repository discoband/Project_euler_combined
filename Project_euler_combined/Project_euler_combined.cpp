// Project_euler_combined.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <cstdio>
#include <iostream>
#include <math.h>
#include "euler.h"
using namespace std;
//Deklaracje funkcji
void Choose_Solution(int Solution_number);
void Description(int Description_number);

//Definicja klasy
class Solution
{
public:
    Solution();
    ~Solution();
    int no_Problem, no_Description;
    void No_Solution(int no_Problem);


};
//Konstruktor
Solution::Solution()
{
    no_Problem = 0;
    no_Description = 0;
}
//Destruktor 
Solution::~Solution()
{
} 
// No_Solution wywołanie odpowiedniej funkcji
void Solution::No_Solution(int no_Problem) {
     Choose_Solution(no_Problem);
    
};

int main()
{
    int problem;
    cout << "Wybierz problem od 1-4\n";
    cin >> problem;
    
        Solution Solution_1;
        Solution_1.no_Description = problem;
        Solution_1.no_Description = problem;
        Solution_1.No_Solution(problem);
        
   
   
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




