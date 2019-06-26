#ifndef COMPANE_H
#define COMPANE_H
#include <iostream>
#include <vector>
using namespace std;

struct  Emplaolyee{
    virtual void showEmployeeDetails() = 0;
};
struct Developer : Emplaolyee{
    string name = {"Developer"};
    Developer(string _name) : name(_name){}
    void showEmployeeDetails() {cout << name << " Developer" << endl;}
};
struct Manager :Emplaolyee{
    vector<Emplaolyee*>reporties;
    string name={"Manger"};
    Manager(string _name):name(_name){}
    void showEmployeeDetails() {
        cout << name << " Manger" << endl;
        for(auto &i : reporties)
              i->showEmployeeDetails();
    }
    void addReporties(Emplaolyee *emp){reporties.push_back(emp);}
};

struct Director :Emplaolyee{
    vector<Emplaolyee*>reporties;
    string name={"Director"};
    Director(string _name):name(_name){}
    void showEmployeeDetails() {
        cout << name << " Director" << endl;
        for(auto &i : reporties)
              i->showEmployeeDetails();
    }
    void addMangers(Manager *emp){reporties.push_back(emp);}
};
void  Companey(){
    Developer rama("Rama");
    Developer sitha("sitha");
    Developer laxman("laxman");
    Developer reddy("reddy");
    Developer rupa("Rupa");
    Manager mano ("Manohar");
    mano.addReporties(&rama);
    mano.addReporties(&sitha);
    mano.addReporties(&laxman);
    Manager sitansh ("Sitansh");
    sitansh.addReporties(&reddy);
    sitansh.addReporties(&rupa);
    Director d ("Sheema");
    d.addMangers(&sitansh);
    d.addMangers(&mano);
    d.showEmployeeDetails();
}

#endif // COMPANE_H
