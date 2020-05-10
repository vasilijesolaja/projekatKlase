#ifndef HORSEITEMS_HPP_INCLUDED
#define HORSEITEMS_HPP_INCLUDED
enum HorseEquipment{Saddle, Trophy, Blinders};
class HorseItems
{
protected:
    HorseEquipment he;
    int Stamina;
    int Value;
    int Perks;
public:
    HorseItems(HorseEquipment he1, int Stamina1, int Value1, int Perks1)
    {
        he=he1;
        Stamina=Stamina1;
        Value=Value1;
        Perks=Perks1;
    }



};
#endif // HORSEITEMS_HPP_INCLUDED
