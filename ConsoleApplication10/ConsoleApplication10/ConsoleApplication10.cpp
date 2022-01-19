// ConsoleApplication10.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
//zad1

   /* void zamiana(int n)
    {
        
        if (n == 0)return;

        zamiana(n / 2); 

        cout << n % 2; 
    }

    int main()
    {
        int n;
        cout << "Podaj liczbe w postaci dziesietnej: ";
        cin >> n;
        cout << "Postac binarna liczby " << n << ": ";
        if (n == 0)
            cout << 0;
        else
            zamiana(n);

        cout << endl;

        return 0;
    }*/
//zad2 
    /*int NWD(int a, int b)
    {
        if (a != b)
            return NWD(a > b ? a - b : a, b > a ? b - a : b);
        return a;
    }

    int main()
    {
        int a, b;

        cout << "Podaj dwie liczby: ";
        cin >> a >> b;

        cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;

        return 0;
    }*/
    //zad3
    
    //long int fib(int n)
    //{
    //    if (n == 0) return 0;
    //    if (n == 1) return 1;
    //    if (n == 1 || n == 2) return 1;
    //    else return fib(n - 1) + fib(n - 2);
    //}

    //int main()
    //{
    //    int n;
    //    cout << "podaj n: ";
    //    cin >> n;

    //    cout << fib(n) << endl;

    //}

//zad4


  /*  int silnia(int n)
    {
        if (n == 0|| n==1) return 1;
        else return silnia(n - 1) *n;
    }

    int main()
    {
        int n;
        cout << "podaj n: ";
        cin >> n;
        cout << silnia(n) << endl;
    }*/

    //zad 5
  /*  float ciag(int n)
    {
    if (n == 1) return 0;
    if (n == 2) return 0.5;
    else return -ciag(n-1) * ciag(n-2);
   
    }

    int main()
    {
    int n;

    
    cout << "podaj n: ";
    cin >> n;
    cout << ciag(n) << endl;
    }*/





    
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
