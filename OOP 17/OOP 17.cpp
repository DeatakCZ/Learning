/*

Vašim cílem bude implementovat řazení pomocí algoritmu  Bubblesort.
Bubblesort namplementujte jako metodu do třídy Pole, kterou jsme
používali v lekci.Pro jistotu přikládám její zdrojový kód.

template<typename T>
class Pole
{
private:
    T* pole;
    int pocet_prvku;
    int velikost_pole;
public:
    Pole(int velikost = 8);
    ~Pole();
    Pole(const Pole& p);
    Pole& operator = (const Pole& s);
};

template<typename T>
Pole<T>::Pole(int velikost = 8) : velikost_pole(velikost), pocet_prvku(0)
{
    this->pole = new T[velikost];
}

template<typename T>
inline Pole<T>::~Pole()
{
    delete[] this->pole;
}

template<typename T>
inline Pole<T>::Pole(const Pole<T> &p) : pole(NULL)
{
    *this = p;
}

template<typename T>
inline Pole<T>& Pole<T>::operator=(const Pole<T> &s)
{
    if (this == &s)
        return *this;
    this->~Pole();
    this->pole = new T[s.pocet_prvku];
    for (int i = 0; i < s.pocet_prvku; i++)
        this->pole[i] = s->pole[i];
    this->pocet_prvku = s.pocet_prvku;
    this->velikost_pole = this->pocet_prvku;
    return *this;
}

Do pole vložte 10 náhodných čísel, ty poté seřaďte a vypište.Díky
tomu, že jsme použili šablonu, můžeme použít stejný postup pro
řetězce.

Ukázka obrazovky programu :

Konzolová aplikace
2 4 22 35 56 62 68 71 88 93
Blabla, Hakuna Matata, ITnetwork.cz, Nejaka veta, Petr Vocasek
*/

#include "Pole.h"
#include <iostream>
using namespace std;


int main()
{
    Pole<int> p;
    int prvek = NULL;
    int volba=2;

    for (int i = 0; i < 5; i++)
    {
        cout << i << ". prvek: ";
        cin >> prvek;
        p.vlozNakonec(prvek);
          cin.clear();
    }

    cout << "Pole: ";
    for (int i = 0; i < p.velikost(); i++)
        cout << p[i] << " ";
    cout << endl;

    while (volba != 3)
    {
        cout << "Vyberte dalsi akci(1=bubble,2=vypsat,3=konec): ";
        cin >> volba;
        if (volba == 1)
            p.BUBBLE();
        else if (volba == 2)
        {
            cout << "Pole: ";
            for (int i = 0; i < p.velikost(); i++)
                cout << p[i] << " ";
            cout << endl;
        }
    }


    return 0;
}


