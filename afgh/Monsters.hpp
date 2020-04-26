#ifndef MONSTERS_HPP_INCLUDED
#define MONSTERS_HPP_INCLUDED
enum Enemies {Ghouls, Alghouls, Bruxa, Godling, Hag, Wraith, Gryphin};
class Monsters
{
protected:
    Enemies e;
    int BleedEffect;
    int AttackDamage;
    int Speed;
    int HealEffect;
    bool Friendly;


};
#endif // MONSTERS_HPP_INCLUDED
