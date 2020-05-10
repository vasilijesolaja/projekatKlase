#ifndef COMBATSIGNS_HPP_INCLUDED
#define COMBATSIGNS_HPP_INCLUDED
enum HandSigns {Quen, Igni, Aard, Yrden, Axii};
class CombatSigns
{
protected:
    HandSigns hs;
    int Defence;
    int Radius;
    int Destructivness;
    bool MindControl;
public:
    CombatSigns(HandSigns hs1, int Defence1, int Radius1, int Destructivness1, bool MindControl1){
        hs=hs1;
        Defence=Defence1;
        Radius=Radius1;
        Destructivness=Destructivness1;
        MindControl=MindControl1;

        }
        friend ostream& operator<<(ostream& output, const CombatSigns& CB)
    {
        output<<"Output of CB:"<<endl;
        output<<"Handsigns: "<<CB.hs<<endl;
        output<<"Defence: "<<CB.Defence<<endl;
        output<<"Radius: "<<CB.Radius<<endl;
        output<<"Destructivness: "<<CB.Destructivness<<endl;
        output<<"MindControl: "<<CB.MindControl<<endl;

        return output;
    }





};

#endif // COMBATSIGNS_HPP_INCLUDED
