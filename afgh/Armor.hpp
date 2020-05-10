#ifndef ARMOR_HPP_INCLUDED
#define ARMOR_HPP_INCLUDED
enum Protection {Chestplate, Leggings, Boots, Gloves};
class Armor
{
protected:
    Protection p;
    int Durability;
    int Rarity;
public:
    Armor(Protection p1, int Durability1, int Rarity1)
    {
        p=p1;
        Durability=Durability1;
        Rarity=Rarity1;




    }
};


#endif // ARMOR_HPP_INCLUDED
