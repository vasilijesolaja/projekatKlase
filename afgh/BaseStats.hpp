#ifndef BASESTATS_HPP_INCLUDED
#define BASESTATS_HPP_INCLUDED

class BaseStats
{
protected:
    int Health;
    int MovementSpeed;
    int AttackPower;
    int Regeneration;
    int PoisonResistance;
    int Stamina;
public:
    BaseStats(int Health1, int MovementSpeed1,  int AttackPower1, int Regeneration1, int PoisonResistance1, int Stamina1 = 100)
    {
        Health=Health1;
        MovementSpeed=MovementSpeed1;
        AttackPower=AttackPower1;
        Regeneration=Regeneration1;
        PoisonResistance=PoisonResistance1;
        Stamina=Stamina1;
    }
        int getStamina(){return Stamina;}
        void setStamina(int s){Stamina=s;}
        int getHealth(){return Health;}
        void setHealth(int h){Health=h;}




};
#endif // BASESTATS_HPP_INCLUDED
