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
    KlasaIgrac (bool male1, int Coins1, int XP1, int Level1, string PlayerName1 = "Geralt") {
        male=male1;
        Coins=Coins1;
        XP=XP1;
        Level=Level1;
        PlayerName=PlayerName1;
}


};

#endif // KLASAIGRAC_HPP_INCLUDED
