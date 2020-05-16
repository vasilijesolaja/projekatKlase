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
    Armor(Protection p1=Chestplate, int Durability1=50, int Rarity1=1)
    {
        p=p1;
        Durability=Durability1;
        Rarity=Rarity1;
    }
        virtual void Ispis()
        {
            cout<<p<<endl;
            cout<<Durability<<endl;
            cout<<Rarity<<endl;
        }

};


#endif // ARMOR_HPP_INCLUDED
