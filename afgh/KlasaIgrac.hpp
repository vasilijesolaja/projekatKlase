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
            {
                Level=Level+1;
                XP=0;
            }
            else
            {
                cout<<"You still need "<<100-XP<<" more XP to level up!"<<endl;
            }
        }
        void demo()const
        {
            if (Level==15)
            {
                cout<<"You have finished the demo! Buy the full game if you wish to continue!"<<endl;
            }
        }
        friend ostream& operator<<(ostream& output, const KlasaIgrac& ki)
    {
        output<<"Output of KlasaIgrac:"<<endl;
        if(ki.male)
            output<<"MALE"<<endl;
        else
            output<<"FEMALE"<<endl;
        output<<"Coins:"<<ki.Coins<<endl;
        output<<"XP:"<<ki.XP<<endl;
        output<<"PlayerName: "<<ki.PlayerName<<endl;
        return output;
    }
};

#endif // KLASAIGRAC_HPP_INCLUDED
