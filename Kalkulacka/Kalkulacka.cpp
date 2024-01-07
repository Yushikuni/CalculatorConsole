// Kalkulacka.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

/*
* Nazev: soucetDvouCisle
* Param1: PrvniCislo od uzivatele
* Param2: DruheCislo od uzivatele
* ParamOut: Soucet prvniho a druheho cisla od uzivatele
* 
* Nepotrebuju vice promennych nez jsou dve a s nimi se da pracovat. 
* Pokud by to byla slozitejsi aritmetika, tak uz bych tuto moznost zvazovala
* 
*/

float soucetDvouCisel(float PrvniCislo, float DruheCislo)
{
    return PrvniCislo + DruheCislo;
}

float rozdilDvouCisel(float PrvniCislo, float DruheCislo)
{
    return PrvniCislo - DruheCislo;
}

float nasobekDvouCisel(float PrvniCislo, float DruheCislo)
{
    return PrvniCislo * DruheCislo;
}

float podilDvouCisel(float PrvniCislo, float DruheCislo)
{
    return PrvniCislo / DruheCislo;
}

/*
* Exceptions:
* 1. neni to cislo
* 2. cislo je 0 pro deleni je to fatalni
* 3. 
*/

int main()
{
    cout << "Hello World!\n";

    float prvniCislo = -1;
    float druheCislo = -1;
    cout << "Zadej Prvni Cislo: ";
    try
    {
        cin >> prvniCislo;
    }
    catch (const std::exception& e)
    {
        cerr << "Chyba: " << e.what() << endl;
    }
    
    cout << "Zadej Druhe cislo: ";
    try
    {
        cin >> druheCislo;
    }
    catch (const runtime_error& e)
    {
        cerr << "Chyba: " << e.what() << endl;
    }

    cout << "\nsoucet prvnich dvou cisel je: " << soucetDvouCisel(prvniCislo, druheCislo);
    cout << "\nrozdil prvnich dvou cisel je: " << rozdilDvouCisel(prvniCislo, druheCislo);
    cout << "\nnasobek prvnich dvou cisel je: " << nasobekDvouCisel(prvniCislo, druheCislo);
    cout << "\npodil prvnich dvou cisel je: " << podilDvouCisel(prvniCislo, druheCislo);

}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
