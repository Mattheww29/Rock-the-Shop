#include "angajat.h"
class Operator : virtual public Angajat
{
public:
    Operator(){};
    Operator(int a, string b, string c, string d, tm e) : Angajat(a, b, c, d, e) {};
    void afisare() const
    {
        cout << "[OPERATOR]" << endl;
        Angajat::afisare();
    }
    double salariu() const
    {
        return Angajat::salariu() * 0.9;
    }

    ~Operator(){};
};
