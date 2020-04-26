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
    LegendaryArmor (LegyArmor la1, int RuneSlots1, int Buffs1, int MagicDurability1, Protection p1, int Durability1, int Rarity1): Armor (Protection p1, Durability1, Rarity1) {}



};


#endif // LEGENDARYARMOR_HPP_INCLUDED
