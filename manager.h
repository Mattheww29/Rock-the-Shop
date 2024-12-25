#include "angajat.h"

class Manager: virtual public Angajat
{
public:
        Manager(){}; 
        Manager(int a, string b,string c,string d,tm e ):Angajat(a,b,c,d,e){};

        void afisare () const 
        {
            Angajat::afisare();
        }
        virtual double salariu()
        {
            return Angajat::salariu
        }

};