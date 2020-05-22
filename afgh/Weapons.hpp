#ifndef WEAPONS_HPP_INCLUDED
#define WEAPONS_HPP_INCLUDED
#include "CombatSigns.hpp"
enum Offensive {SteelSword, SilverSword, CrossBow, Fists, WarAxe};
class Weapons
{
protected:
    Offensive o;
    int Damage;
    int Resistance;
    int Range;
    int AttackSpeed;
    CombatSigns CB;
public:
    Weapons (Offensive o2, int Damage2, int Resistance2, int Range2, int AttackSpeed2, HandSigns hs1, int Defence1, int Radius1, int Destructivness1, bool MindControl1): CB(hs1, Defence1, Radius1, Destructivness1, MindControl1)
    {
        o=o2;
        Damage=Damage2;
        Resistance=Resistance2;
        Range=Range2;
        AttackSpeed=AttackSpeed2;
    }
        Offensive getOffensive() const
        {
            return o;
        }
        friend ostream& operator<<(ostream& output, const Weapons& w)
    {
        output<<w.o<<" "<<w.Damage<<" "<<w.Resistance<<" "<<w.Range<<" "<<w.AttackSpeed<<" "<<w.CB<<endl;
        return output;
    }
    void setOffesnsive(int x)
    {
        if(x == 1)
        {
            o=SteelSword;
        }
        else if(x == 2)
        {
            o=SilverSword;
        }
        else if (x == 3)
        {
            o=CrossBow;
        }
        else if(x == 4)
        {
            o=Fists;
        }
        else if(x == 5)
        {
            o=WarAxe;
        }
    }

};

#endif // WEAPONS_HPP_INCLUDED
