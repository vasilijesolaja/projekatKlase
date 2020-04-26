#ifndef OPREMA_HPP_INCLUDED
#define OPREMA_HPP_INCLUDED
#include "Armor.hpp"
#include "Weapons.hpp"
#include "HorseItems.hpp"
class Oprema
{
protected:
    Armor A;
    Weapons W;
    HorseItems HI;
public:
    Oprema(Protection p1, int Durability1, int Rarity1, Offensive o1, int Damage1, int Resistance1, int Range1, HorseEquipment he1, int Stamina1, int Value1, int Perks1):A(p1, Durability1, Rarity1),W(o1, Damage1, Resistance1, Range1),HI(he1, Stamina1, Value1, Perks1)
    {



    }





};

#endif // OPREMA_HPP_INCLUDED
