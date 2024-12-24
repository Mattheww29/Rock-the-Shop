#include <bits/stdc++.h>
#include "angajat.h"
using namespace std; 

int main ()
{
    tm dataAngajare1={};
    dataAngajare1.tm_year=2010-1900;
    dataAngajare1.tm_mon = 5 - 1;     
    dataAngajare1.tm_mday = 10; 

    tm dataAngajare2={};
    dataAngajare2.tm_year = 2018 - 1900; 
    dataAngajare2.tm_mon = 8 - 1;        
    dataAngajare2.tm_mday = 20; 

    Angajat ang1(1,"Marcus","Aurelius","5050329045217",dataAngajare1);
    Angajat ang2(2,"Lucius","Seneca","5050329043214",dataAngajare2);
    ang1.afisare();
    ang2.afisare();
}