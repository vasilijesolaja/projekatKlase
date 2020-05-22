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
     cout << "Dobrodosli u demo witchera 3!" << endl;
     //citajTxt("Weapons.txt");
    //moj projekat želi da simulira demo igrice witcher 3 do 15lvl
    //Locations l (Toussaint, 144000, 1518);
    //cout<<l<<endl;
    //KlasaIgrac ki(true, 1000, 100, 1);
    //cout<<ki<<endl;
    /*Weapons w(SilverSword,576,700,2,100,Igni,0,10,50,false);
    Weapons w2(SteelSword,550,1000,1,90,Axii,0,20,0,true);
    Weapons w3(CrossBow,77,5000,100,1,Quen,200,2,20,false);
    ki.AddWeapon(&w);
    ki.AddWeapon(&w2);
    ki.AddWeapon(&w3);
    ki.ListWeapons();
    ki.DeleteWeapon();
    ki.ListWeapons();
    CombatSigns cb(Igni, 0, 10, 50, false);
    cout<<cb<<endl;
    Armor a;
    LegendaryArmor la(GrandmasterWolvenArmor, 1,1,1, Chestplate, 50, 1);
    a.Ispis();
    cout<<"mjau"<<endl;
    la.Ispis();
    ki.SearchWeapon();
    */BaseStats bs(200, 150, 100, 100, 100);
    cout<<"Da li zelite da pocnete quest ili biste zeleli da se pripremite u inventaru?"<<endl;
    cout<<"Ako zelite da zapocnete quest pritisnite taster 1"<<endl;
    cout<<"Ako zelite da odete u inventar pritisnite taster 2"<<endl;
    int x;
    do
    {
        cin>>x;
        if(x!=1 && x!=2)
        {
            cout<<"Unesite 1 ili 2"<<endl;
        }
    } while (x!=1 && x!=2);
    if(x == 1)
    {
        int y;
        cout<<"Da li zelite da se popnete na konja, ili da peske odete do svoje destinacije?"<<endl;
        cout<<"Ako zelite na konja pritisnite taster 1"<<endl;
        cout<<"Ako zelite peske do svoje destinacije pritisnite 2"<<endl;
        do
        {
            cin>>y;
        }while (y!=1 && y!=2);
        if(y == 1)
        {
            cout<<"Stigli ste do svoje destinacije (ostalo vam je 95/100 Stamina)"<<endl;
            bs.setStamina(bs.getStamina()-5);
        }
        if (y==2)
            {
                cout<<"Stigli ste do svoje destinacije"<<endl;
                bs.setStamina(bs.getStamina()-20);
                cout<<"Stamina: "<<bs.getStamina()<<endl;
                cout<<endl;
            }
        cout<<"Rawr napao vas je ghoul!!!"<<endl;
        cout<<"Ghoulovi su mrsavi, smrdljivi i veoma brzi!"<<endl;
        cout<<"Da bi ste izvukli mac i borili se pritisnite taster 1!!!"<<endl;
        cout<<"Da bi ste stalu u odbrambeni stav pritisnite taster 2!!!"<<endl;
        cout<<"Da biste se okrenuli i poceli da bezite, pritisnite taster 3!!!"<<endl;
        cin>>y;
        if (y==1)
        {
            cout<<"Izvukli ste mac i vesto odsecate glavu cudovisu, ali ne bez povrede!!!"<<endl;
            bs.setHealth(bs.getHealth()-20);
            cout<<"Health: "<<bs.getHealth()<<endl;
            cout<<endl;
            cout<<"CESTITAMO, ZAVRSILI STE DEMO! MORE COMING SOON!!!"<<endl;
            return 0;
        }
        if (y==2)
        {
            cout<<"Izvukli ste mac i blokirali ste udarac od ghoula, ali ghoul ne odustaje i gladan je i opet se zatrcava!!!"<<endl;
            cout<<"Da bi udarili ghoula macem, pritisnite taster 1!"<<endl;
            cout<<"Ako ste odlucili da pobegnete, pritisnite taster 2!!!"<<endl;
            cin>>x;
            if(x==1)
            {
                cout<<"Izvukli ste mac i vesto odsecate glavu cudovisu, ali ne bez povrede!!!"<<endl;
                bs.setHealth(bs.getHealth()-20);
                cout<<"Health: "<<bs.getHealth()<<endl;
                cout<<endl;
                cout<<"CESTITAMO, ZAVRSILI STE DEMO! MORE COMING SOON!!!"<<endl;
                return 0;
            }
            if (x==2)
            {
                cout<<"Ako ste zaboravili, ghoulovi su jako brzi. Odgrizao vam je glavu i umrli ste..."<<endl;
                cout<<endl;
                cout<<"GAME OVER!!!"<<endl;
                cout<<endl;
                return 0;
            }
        }
            if(y==3)
            {
                cout<<"Ako ste zaboravili, ghoulovi su jako brzi. Odgrizao vam je glavu i umrli ste..."<<endl;
                cout<<endl;
                cout<<"GAME OVER!!!"<<endl;
                cout<<endl;
                return 0;
            }

    }
    cin>>x;
    if(x==2)
    {
        int z;
        cout<<"Ovo je vas inventar, ovde mozete birati koja oruzja i koji oklop zelite poneti na quest!"<<endl;
        cout<<"Da biste izabrali ceo oklopni set i srebrni mac, pritisnite taster 1"<<endl;
        cout<<"Da biste izabrali ceo oklopni set i celicni mac, pritisnite taster 2"<<endl;
        cin>>z;
        if(z==1)
        {
            cout<<"Izabrali ste ceo oklopni set i srebrni mac! Da li ste sigurni da zelite ovaj izbor opreme?"<<endl;
            cout<<"Ako zelite da promenite opremu, pritisnite taster 1!"<<endl;
            cout<<"Ako ste zadovoljni sa svojim izborom pritisnite taster 2!"<<endl;
            cin>>x;
            if(x==1)
            {
                cout<<"Promenili ste opremu na oklopni set i celicni mac!"<<endl;
                cout<<"Da bi ste pokrenuli quest, pritisnite taster 1!!!"<<endl;
                cin>>x;
                if(x==1)
                {
                   cout<<"Da li zelite da se popnete na konja, ili da peske odete do svoje destinacije?"<<endl;
        cout<<"Ako zelite na konja pritisnite taster 1"<<endl;
        cout<<"Ako zelite peske do svoje destinacije pritisnite 2"<<endl;
        int y;
        do
        {
            cin>>y;
        }while (y!=1 && y!=2);
        if(y == 1)
        {
            cout<<"Stigli ste do svoje destinacije (ostalo vam je 95/100 Stamina)"<<endl;
            bs.setStamina(bs.getStamina()-5);
        }
        if (y==2)
            {
                cout<<"Stigli ste do svoje destinacije"<<endl;
                bs.setStamina(bs.getStamina()-20);
                cout<<"Stamina: "<<bs.getStamina()<<endl;
                cout<<endl;
            }
        cout<<"Rawr napao vas je ghoul!!!"<<endl;
        cout<<"Ghoulovi su mrsavi, smrdljivi i veoma brzi!"<<endl;
        cout<<"Da bi ste izvukli mac i borili se pritisnite taster 1!!!"<<endl;
        cout<<"Da bi ste stalu u odbrambeni stav pritisnite taster 2!!!"<<endl;
        cout<<"Da biste se okrenuli i poceli da bezite, pritisnite taster 3!!!"<<endl;
        cin>>y;
        if (y==1)
        {
            cout<<"Izvukli ste mac i vesto odsecate glavu cudovisu, ali ne bez povrede!!!"<<endl;
            bs.setHealth(bs.getHealth()-20);
            cout<<"Health: "<<bs.getHealth()<<endl;
            cout<<endl;
            cout<<"CESTITAMO, ZAVRSILI STE DEMO! MORE COMING SOON!!!"<<endl;
            return 0;
        }
        if (y==2)
        {
            cout<<"Izvukli ste mac i blokirali ste udarac od ghoula, ali ghoul ne odustaje i gladan je i opet se zatrcava!!!"<<endl;
            cout<<"Da bi udarili ghoula macem, pritisnite taster 1!"<<endl;
            cout<<"Ako ste odlucili da pobegnete, pritisnite taster 2!!!"<<endl;
            cin>>x;
            if(x==1)
            {
                cout<<"Izvukli ste mac i vesto odsecate glavu cudovisu, ali ne bez povrede!!!"<<endl;
                bs.setHealth(bs.getHealth()-20);
                cout<<"Health: "<<bs.getHealth()<<endl;
                cout<<endl;
                cout<<"CESTITAMO, ZAVRSILI STE DEMO! MORE COMING SOON!!!"<<endl;
                return 0;
            }
            if (x==2)
            {
                cout<<"Ako ste zaboravili, ghoulovi su jako brzi. Odgrizao vam je glavu i umrli ste..."<<endl;
                cout<<endl;
                cout<<"GAME OVER!!!"<<endl;
                cout<<endl;
                return 0;
            }
        }
            if(y==3)
            {
                cout<<"Ako ste zaboravili, ghoulovi su jako brzi. Odgrizao vam je glavu i umrli ste..."<<endl;
                cout<<endl;
                cout<<"GAME OVER!!!"<<endl;
                cout<<endl;
                return 0;
            }
                }


            }
        }
        cin>>z;
        if(z==2)
        {
             cout<<"Izabrali ste ceo oklopni set i celicni mac! Da li ste sigurni da zelite ovaj izbor opreme?"<<endl;
            cout<<"Ako zelite da promenite opremu, pritisnite taster 1!"<<endl;
            cout<<"Ako ste zadovoljni sa svojim izborom pritisnite taster 2!"<<endl;
            cin>>x;
            if(x==1)
            {
                cout<<"Promenili ste opremu na oklopni set i srebrni mac!"<<endl;
                cout<<"Da bi ste pokrenuli quest, pritisnite taster 1!!!"<<endl;
                cin>>x;
                if(x==1)
                {
                   cout<<"Da li zelite da se popnete na konja, ili da peske odete do svoje destinacije?"<<endl;
        cout<<"Ako zelite na konja pritisnite taster 1"<<endl;
        cout<<"Ako zelite peske do svoje destinacije pritisnite 2"<<endl;
        int y;
        do
        {
            cin>>y;
        }while (y!=1 && y!=2);
        if(y == 1)
        {
            cout<<"Stigli ste do svoje destinacije (ostalo vam je 95/100 Stamina)"<<endl;
            bs.setStamina(bs.getStamina()-5);
        }
        if (y==2)
            {
                cout<<"Stigli ste do svoje destinacije"<<endl;
                bs.setStamina(bs.getStamina()-20);
                cout<<"Stamina: "<<bs.getStamina()<<endl;
                cout<<endl;
            }
        cout<<"Rawr napao vas je ghoul!!!"<<endl;
        cout<<"Ghoulovi su mrsavi, smrdljivi i veoma brzi!"<<endl;
        cout<<"Da bi ste izvukli mac i borili se pritisnite taster 1!!!"<<endl;
        cout<<"Da bi ste stalu u odbrambeni stav pritisnite taster 2!!!"<<endl;
        cout<<"Da biste se okrenuli i poceli da bezite, pritisnite taster 3!!!"<<endl;
        cin>>y;
        if (y==1)
        {
            cout<<"Izvukli ste mac i vesto odsecate glavu cudovisu, ali ne bez povrede!!!"<<endl;
            bs.setHealth(bs.getHealth()-20);
            cout<<"Health: "<<bs.getHealth()<<endl;
            cout<<endl;
            cout<<"CESTITAMO, ZAVRSILI STE DEMO! MORE COMING SOON!!!"<<endl;
            return 0;
        }
        if (y==2)
        {
            cout<<"Izvukli ste mac i blokirali ste udarac od ghoula, ali ghoul ne odustaje i gladan je i opet se zatrcava!!!"<<endl;
            cout<<"Da bi udarili ghoula macem, pritisnite taster 1!"<<endl;
            cout<<"Ako ste odlucili da pobegnete, pritisnite taster 2!!!"<<endl;
            cin>>x;
            if(x==1)
            {
                cout<<"Izvukli ste mac i vesto odsecate glavu cudovisu, ali ne bez povrede!!!"<<endl;
                bs.setHealth(bs.getHealth()-20);
                cout<<"Health: "<<bs.getHealth()<<endl;
                cout<<endl;
                cout<<"CESTITAMO, ZAVRSILI STE DEMO! MORE COMING SOON!!!"<<endl;
                return 0;
            }
            if (x==2)
            {
                cout<<"Ako ste zaboravili, ghoulovi su jako brzi. Odgrizao vam je glavu i umrli ste..."<<endl;
                cout<<endl;
                cout<<"GAME OVER!!!"<<endl;
                cout<<endl;
                return 0;
            }
        }
            if(y==3)
            {
                cout<<"Ako ste zaboravili, ghoulovi su jako brzi. Odgrizao vam je glavu i umrli ste..."<<endl;
                cout<<endl;
                cout<<"GAME OVER!!!"<<endl;
                cout<<endl;
                return 0;
            }

        }
            }
        }
    }
        ofstream Fajl;
        Fajl.open("Fajl.txt");
        Fajl<<"Health karaktera je: "<<bs.getHealth()<<endl;
        Fajl<<"Stamina karaktera je: "<<bs.getStamina()<<endl;
        Fajl.close();

    return 0;
}


