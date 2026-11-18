#include <iostream>
using namespace std;

int main()
{
    int a;
    int tab[5];
    for (int i = 0; i < 5; i++) {
        cout << "podaj liczbe: ";
        cin >> tab[i];
    }
    for (int i = 5; i >= 0; i--) {
        cout << tab[i];
    }
    //zad2
    int size = 0;
    cout << "podaj ile ma byc cyferek: ";
    cin >> size;
    int* tab2 = new int [size];
    tab2[0] = 0;
    tab2[1] = 1;
    for (int i = 2; i < size; i++) {
        tab2[i] = tab2[i - 1] + tab2[i - 2];
    }
    //zad3
    int tab3[10];
    for (int i = 0; i < 9; i++) {
        tab3[i] = rand();
        cout << tab3[i] << endl;
    }
    //zad4
    int liczbadodana;
    int tab4[10];
    cout << "ile liczb chcesz podac? ";
    cin >> a;
    for (int i = 0; i <= a; i++) {
        cout << "podaj liczbe: ";
        cin >> liczbadodana;
        tab4[i] = liczbadodana;
    }
    for (int i = a + 1; i < 9; i++) {
        tab4[i] = 0;
    }
    int min = tab4[0];
    int max = tab4[0];
    for (int i = 0; i < 9; i++)
    {
        if (tab4[i] > max) {
            max = tab[i];
        }
        if (tab4[i] < min) {
            min = tab[i];
        }
    }


}