#ifndef WEAPONS_HPP_INCLUDED
#define WEAPONS_HPP_INCLUDED
#include CombatSigns.hpp
enum Offensive {IronSword, SilverSword, CrossBow};
class Weapons
{
protected:
    Offensive o;
    int Damage;
    int Resistance;
    int Range;
    CombatSigns CB;
public:
    Weapons (Offensive o2, int Damage2, int Resistance2, int Range2, HandSigns hs1, int Defence1, int Radius1, int Destructivness1, bool MindControl1): CB(HandSigns hs1, int Defence1, int Radius1, int Destructivness1, bool MindControl1) {}





};

#endif // WEAPONS_HPP_INCLUDED
