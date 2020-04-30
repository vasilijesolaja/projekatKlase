#ifndef KLASAIGRAC_HPP_INCLUDED
#define KLASAIGRAC_HPP_INCLUDED

class KlasaIgrac
{
protected:
    bool male;
    int Coins;
    int XP;
    int Level;
    string PlayerName;
public:
    KlasaIgrac (bool male1, int Coins1, int XP1, int Level1=1, string PlayerName1 = "Geralt") {
        male=male1;
        Coins=Coins1;
        XP=XP1;
        Level=Level1;
        PlayerName=PlayerName1;
}
        void Nivo ()
        {
            if (XP>100)
            Level=Level+1;
        }
};

#endif // KLASAIGRAC_HPP_INCLUDED
