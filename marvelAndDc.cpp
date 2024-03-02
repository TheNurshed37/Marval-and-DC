#include<iostream>
#include<cstring>
using namespace std;

class Marvel
{
protected:
    int kingdoms;
    int marvel_superheros;
    string living;
    string hero;
public:
    int setData(int k, int sh)
    {
        kingdoms=k;
        marvel_superheros = sh;
    }
    void getKingdoms()
    {
        cout<<"There are "<<kingdoms<<" kingdoms in Marvel universe."<<endl;
    }
    int super_heros()
    {
        return marvel_superheros;
    }
    Marvel()
    {
    }
    Marvel(string living,string hero)
    {
        this->living=living;
        this->hero=hero;
    }
    virtual void display() // Polymorphism
    {
        cout<<"Marvel is amazing."<<endl;
    }
};
class DC
{
protected:
    string dc_heros;
public:
    DC()
    {}
    DC(string dc_heros)
    {
        this->dc_heros=dc_heros;
    }
    string heros()
    {
        cout<<"DC is also an amazing Universe."<<endl;
        return dc_heros;
    }
};
class Earth : public Marvel, public DC //inheritance
{
protected:
    string people;
public:
    Earth ()
    {}
    Earth(string living,string hero, string people) : Marvel(living, hero)
    {
        this-> people=people;
    }
    string protecting_the_living()
    {
        return hero;
    }
    virtual void visualize_the_living() // Polymorphism
    {
        cout<<people<<" peoples live in Earth"<<endl;
    }
    void display()
    {
        cout<<".........Long Live Earth........"<<endl;
    }

};
class Wakanda : public Earth
{
protected:
    int tribe;
    string king;
public:
    Wakanda()
    {}
    Wakanda(string living,string hero, string people, int tribe, string king) : Earth(living,hero,people)
    {
        this-> tribe=tribe;
        this-> king=king;
    }
    string protecting_the_living() //overRiding
    {
        return king;
    }
    void visualize_the_living() //overRiding
    {
        cout<<living<<" peoples live in Wakanda."<<endl;
    }
    void display()
    {
        cout<<"Wakanda have "<<tribe<<" tribes."<<endl;
        cout<<"............Wakanda forever........."<<endl;
    }
};
class Asgard : public Marvel
{
protected:
    string gods;
public:
    Asgard()
    {}
    Asgard(string living,string hero,string g) : Marvel(living,hero)
    {
        gods = g;
    }
    void display()
    {
        cout<<"Asgard is all about "<<living<<" ,not a place."<<endl;
        cout<<"Trough thor is the king of Asgard, but "<<hero<<" is my favourite from Asgard."<<endl;
        cout<<gods<<" is known as the God of thunders."<<endl;
    }
};
class Alfheim : public Marvel
{
protected:
    string light_elves;
public:
    Alfheim()
    {}
    Alfheim(string living,string hero,string light_elves) : Marvel(living,hero)
    {
        this->light_elves=light_elves;
    }
    void display()
    {
        cout<<"Alfheim is "<<living<<endl;
        cout<<"Super heros of Alfheim: "<<hero<<endl;
        cout<<"Citizen of Alfheim: "<<light_elves<<endl;
    }
};
class Nidavellir : public Marvel
{
protected:
    string dwarves;
public:
    Nidavellir()
    {}
    Nidavellir(string living,string hero,string d) : Marvel(living,hero)
    {
        dwarves=d;
    }
    void display()
    {
        cout<<"Nidarvellir got "<<living<<" by Thor."<<endl;
        cout<<"Super hero of Nidarvellir: "<<hero<<endl;
        cout<<"Citizen of Nidarvellir: "<<dwarves<<endl;
    }
};
class Vanaheim : public Marvel
{
protected:
    string vanir;
public:
    Vanaheim()
    {}
    Vanaheim(string living,string hero,string vanir) : Marvel(living,hero)
    {
        this->vanir=vanir;
    }
    void display()
    {
        cout<<"Vanaheim is not so "<<living<<" in Marvel."<<endl;
        cout<<"Queen of Vanaheim: "<<hero<<endl;
        cout<<"Citizen of Vanaheim: "<<vanir<<endl;
    }
};

int main()
{
    cout<<"******Welcome to the universe of Marvel And DC*******"<<endl<<endl;
    Marvel m1,m;
    m.setData(9,100);
    m.getKingdoms();
    cout<<"There are "<<m.super_heros()<<" super heros in Marvel."<<endl;
    m.display();
    cout<<endl;

    DC d("BATMAN");
    cout<<d.heros()<<" is my favourite hero from DC."<<endl;
    cout<<endl;

    Earth e("A","AVENGERS","7 BILLION+");
    cout<<e.protecting_the_living()<<" protect the living of earth."<<endl;
    e.visualize_the_living();
    e.display();
    cout<<endl;

    Wakanda w("500","A","B",7,"T'CHALLA");
    cout<<w.protecting_the_living()<<" protect the living of Wakanda."<<endl;
    w.visualize_the_living();
    w.display();
    cout<<endl;

    Asgard a("PEOPLE","LOKI","THOR");
    a.display();
    cout<<endl;

    Alfheim al("BEAUTIFUL","NOVACORP","ElVES");
    al.display();
    cout<<endl;

    Nidavellir n("FREEDOM","THOR","DWARVES");
    n.display();
    cout<<endl;

    Vanaheim v("PUBLISHED","NJORD","VANIRS");
    v.display();
    cout<<endl;

    cout<<"*********THANK U*********"<<endl;
}

