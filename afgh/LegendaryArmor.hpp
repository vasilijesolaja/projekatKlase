#ifndef LEGENDARYARMOR_HPP_INCLUDED
#define LEGENDARYARMOR_HPP_INCLUDED
enum LegyArmor {GrandmasterWolvenArmor, GrandmasterManticoreArmor, GrandmasterCatArmor};
class LegendaryArmor: public Armor
{
protected:
    LegyArmor la;
    int MagicDurability;
    int RuneSlots;
    int Buffs;
public:
    LegendaryArmor (LegyArmor la1, int RuneSlots1, int Buffs1, int MagicDurability1, Protection p1, int Durability1, int Rarity1): Armor (p1, Durability1, Rarity1)
        {
            la=la1;
            RuneSlots=RuneSlots1;
            Buffs=Buffs1;
            MagicDurability=MagicDurability1;
        }
    void Ispis()
    {
        Armor::Ispis();
        cout<<la<<endl;
        cout<<MagicDurability<<endl;
        cout<<RuneSlots<<endl;
        cout<<Buffs<<endl;
    }


};


#endif // LEGENDARYARMOR_HPP_INCLUDED
