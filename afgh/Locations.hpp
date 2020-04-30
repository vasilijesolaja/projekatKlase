#ifndef LOCATIONS_HPP_INCLUDED
#define LOCATIONS_HPP_INCLUDED
enum Regions {WhiteOrchard, TheRoyalPalace, Velen, Novigrad, Skellige, Kaer Morhen, Toussaint};
class Locations
{
protected:
    Regions r;
    int SurfaceArea;
    int BorderLength;
    bool FastTravelSigns;
public:
    Locations(Regions r1,int SurfaceArea1, int BorderLength1, bool FastTravelSigns1)
    {
        r=r1;
        SurfaceArea=SurfaceArea1;
        BorderLength=BorderLength1;
        FastTravelSigns=FastTravelSigns1;


    }
    void Lokacija()
    {
        if (FastTravelSigns==true)
            Region=Region+1;

    }




};
#endif // LOCATIONS_HPP_INCLUDED
