#ifndef KLASAIGRAC_HPP_INCLUDED
#define KLASAIGRAC_HPP_INCLUDED
#include <vector>
#include "Weapons.hpp"
#include "CombatSigns.hpp"
class KlasaIgrac
{
protected:
    bool male;
    int Coins;
    int XP;
    int Level;
    string PlayerName;
    vector <Weapons>Arsenal;
public:
    KlasaIgrac (bool male1, int Coins1, int XP1, int Level1=1, string PlayerName1 = "Geralt") {
        male=male1;
        Coins=Coins1;
        XP=XP1;
        Level=Level1;
        PlayerName=PlayerName1;
}
        void Nivo ()
        {
            if (XP>100)
            {
                Level=Level+1;
                XP=0;
            }
            else
            {
                cout<<"You still need "<<100-XP<<" more XP to level up!"<<endl;
            }
        }
        void demo()const
        {
            if (Level==15)
            {
                cout<<"You have finished the demo! Buy the full game if you wish to continue!"<<endl;
            }
        }
        friend ostream& operator<<(ostream& output, const KlasaIgrac& ki)
    {
        output<<"Output of KlasaIgrac:"<<endl;
        if(ki.male)
            output<<"MALE"<<endl;
        else
            output<<"FEMALE"<<endl;
        output<<"Coins:"<<ki.Coins<<endl;
        output<<"XP:"<<ki.XP<<endl;
        output<<"PlayerName: "<<ki.PlayerName<<endl;
        return output;
    }
    void AddWeapon(Weapons* w)
    {
        /*Offensive o;
        int Damage;
        int Resistance;
        int Range;
        int AttackSpeed;
        HandSigns hs;
        int Defence;
        int Radius;
        int Destructivness;
        bool MindControl;
        cout<<"Offensive: ";
        cin>>o;
        cout<<"Damage: ";
        cin>>Damage;
        cout<<"Range: ";
        cin>>Range;
        cout<<"Attack Speed: ";
        cin>>AttackSpeed;
        cout<<"Hand Signs: ";
        cin>>hs;
        cout<<"Defence: ";
        cin>>Defence;
        cout<<"Radius: ";
        cin>>Radius;
        cout<<"Destructivness: ";
        cin>>Destructivness;
        cout<<"Mind Control: ";
        cin>>MindControl;
        Weapons*w = new Weapons(o,Damage,Resistance,Range,AttackSpeed,CB);
        */Arsenal.push_back(*w);
        cout<<"Dodat u vector tmine"<<endl;
    }
    void ListWeapons()
    {
        cout<<"Arsenal:"<<endl;
        int Counter = 1;
        for(auto i=Arsenal.begin();i!=Arsenal.end();i++)
        {
            cout<<Counter<<". "<<*i;
            Counter++;
        }
    }
    void DeleteWeapon()
    {
        cout<<"Choose the weapon you wish to discard:"<<endl;
        ListWeapons();
        cout<<"Input:";
        int Input;
        cin>>Input;
        Input--;
        Arsenal.erase(Arsenal.begin()+Input);
    }
    void SearchWeapon()
    {
        cout<<"Please enter weapon name to find it: ";
        string w;
        cin>>w;
        Offensive o;
        if (w == "SteelSword")
        {
            o=SteelSword;
        }
        else if (w == "SilverSword")
        {
            o=SilverSword;
        }
         else if (w == "CrossBow")
        {
            o=CrossBow;
        }
         else if (w == "Fists")
        {
            o=Fists;
        }
         else if (w == "WarAxe")
        {
            o=WarAxe;
        }
        int Counter = 1;
        for(auto i=Arsenal.begin();i!=Arsenal.end();i++)
        {
            if (i->getOffensive()== o)
            {
            cout<<Counter<<". "<<*i;
            Counter++;
            }
        }
    }
};

#endif // KLASAIGRAC_HPP_INCLUDED
