#ifndef LOCATIONS_HPP_INCLUDED
#define LOCATIONS_HPP_INCLUDED
enum Regions {WhiteOrchard, TheRoyalPalace, Velen, Novigrad, Skellige, KaerMorhen, Toussaint};
class Locations
{
protected:
    Regions r;
    int SurfaceArea;
    int BorderLength;
public:
    Locations(Regions r1,int SurfaceArea1, int BorderLength1)
    {
        r=r1;
        SurfaceArea=SurfaceArea1;
        BorderLength=BorderLength1;

    }
    friend ostream& operator<<(ostream& output, const Locations& loc)
    {
        output<<"Output of loc:"<<endl;
        output<<"Regions: "<<loc.r<<endl;
        output<<"SurfaceArea: "<< loc.SurfaceArea<<endl;
        output<<"BorderLength: "<<loc.BorderLength<<endl;
        return output;
    }






};
#endif // LOCATIONS_HPP_INCLUDED
