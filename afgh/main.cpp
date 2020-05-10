#include <iostream>
#include <fstream>
using namespace std;
#include "Armor.hpp"
#include "Books.hpp"
#include "BaseStats.hpp"
#include "HorseItems.hpp"
#include "KlasaIgrac.hpp"
#include "Locations.hpp"
#include "Monsters.hpp"
#include "Oprema.hpp"
#include "LegendaryArmor.hpp"
#include "CombatSigns.hpp"
#include "Weapons.hpp"
void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}
    int Books::CBN=0;
int main()
{
    cout << "Pocinjemo projekat!" << endl;
     citajTxt("Weapons.txt");
    //moj projekat želi da simulira demo igrice witcher 3 do 15lvl
    Locations l (Toussaint, 144000, 1518);
    cout<<l<<endl;
    KlasaIgrac ki(true, 1000, 100, 1);
    cout<<ki<<endl;
    CombatSigns cb(Igni, 0, 10, 50, false);
    cout<<cb<<endl;
    return 0;

}
