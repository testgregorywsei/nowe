#include <iostream>
#include <cmath>

using namespace std;
class Balonik
{
public:
    string nazwa;
    float wysokosc;
    long double srednica;
    float objetosc;

    void zmiana_parametrow()
    {
        cout<<""<<endl;//zrobi³em sobie w ten sposób odstêp który wyœwietli siê w kompilatorze.

        cout<<"Podaj kolor balonika"<<endl;
        cin>>nazwa;
        cout<<"Podaj wysokosc na jakiej jest balonik"<<endl;
        cin>>wysokosc;
        cout<<"Podaj srednice balonika"<<endl;
        cin>>srednica;
        cout<<"Tu balonik "<<nazwa<<" mam "<<srednica<<"cm srednicy i jestem na wysokosci "<<wysokosc<<" metrow";

    }
    void zmiana_parametrow2()
    {
        cout<<""<<endl;//zrobi³em sobie w ten sposób odstêp który wyœwietli siê w kompilatorze.

        cout<<"Podaj kolor kolejnego balonika"<<endl;
        cin>>nazwa;
        cout<<"Podaj wysokosc na jakiej jest balonik"<<endl;
        cin>>wysokosc;
        cout<<"Podaj srednice balonika"<<endl;
        cin>>srednica;
        cout<<"Tu balonik "<<nazwa<<" mam "<<srednica<<"cm srednicy i jestem na wysokosci "<<wysokosc<<" metrow";

    }
    void pompuj()
    {
        cout<<""<<endl;
        cout<<"Jesli chcesz napompowac ktorys balonik i dowiedziec sie jaka bedzie mial srednice to napisz jego kolor"<<endl;
        cin>>nazwa;
        cout<<"Podaj ile cm^3 powietrza chcesz wtloczyc do balonika"<<endl;
        cin>>objetosc;
        cout<<"Balonik "<<nazwa<<" po wtloczeniu "<<objetosc<<" cm^3 powietrza bedzie mial srednice "<<(2*sqrt(objetosc/3.14)==srednica)<<" cm ";
    }
};
int main()
{
    Balonik czerwony;
    czerwony.zmiana_parametrow();

    Balonik zielony;
    zielony.zmiana_parametrow2();

    Balonik niebieski;
    niebieski.zmiana_parametrow2();

    Balonik pompka;
    pompka.pompuj();

    return 0;
}
