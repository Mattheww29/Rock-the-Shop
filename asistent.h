#include "angajat.h"
class Asistent : public Angajat
{
public:
    Asistent() {};
    Asistent(int a, string b, string c, string d, tm e) : Angajat(a, b, c, d, e) {};
    void afisare() const
    {
        cout << "ASISTENT" << endl;
        Angajat::afisare();
    }

    double salariu() const
    {
        return Angajat::salariu() * 0.75;
    }
    ~Asistent(){};
};