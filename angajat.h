#include <bits/stdc++.h>
using namespace std;

class Angajat 
{
    int id,an_vechime;
    string nume,prenume,cnp;
    tm data_angajarii;
    double salariu_baza=3500;

    public:
            Angajat(){};
            Angajat(int a,string b,string c,string d,tm e):id(a),nume(b),prenume(c),cnp(d),data_angajarii(e)
            {
                if(cnp.size() != 13) 
                {
                    throw std::invalid_argument("cnp gresit, trebuie sa fie un sir de 13 caractere");
                }
                int an= stoi(cnp.substr(1,2));
                int luna=stoi(cnp.substr(3,2));
                int zi= stoi(cnp.substr(5,2));
                time_t k=time(0);
                tm* acum=localtime(&k);
                if(((acum->tm_year+1900)-(2000+an))<18 )
                {
                    throw std::invalid_argument("varsta minima pentru angajare 18 ani");
                }
                else if (((acum->tm_year+1900)-(2000+an))==18 and (acum->tm_mon+1<luna))
                {
                    throw std::invalid_argument("varsta minima pentru angajare 18 ani si luna");
                }
                else if (((acum->tm_year+1900)-(2000+an))==18 and (acum->tm_mon+1==luna) and (acum->tm_mday<zi))
                {
                    throw std::invalid_argument("varsta minima pentru angajare 18 ani si zi");
                }
                if(nume.size()<3 or nume.size()>30)
                {
                    throw std::invalid_argument("numele depaseste standardele de <3 sau >30");
                }
                if(prenume.size()<3 or prenume.size()>30)
                {
                    throw std::invalid_argument("prenumele depaseste standardele de <3 sau >30");
                }
                an_vechime=((acum->tm_year+1900)-(data_angajarii.tm_year+1900));
                if((acum->tm_mon+1)<(data_angajarii.tm_mon+1))
                {
                    an_vechime--;
                }
                else if ((acum->tm_mon==data_angajarii.tm_mon) and (acum->tm_mday < data_angajarii.tm_mday))
                {
                    an_vechime--;
                } 
            };
            virtual void afisare () 
            {
                cout<<"id="<<id<<endl<<"an vechime="<<an_vechime<<endl;
                cout<<"nume="<<nume<<" prenume= "<<prenume<<endl;
                cout<<"CNP= "<<cnp<<endl;
                cout<<"an angajare="<<data_angajarii.tm_year+1900<<" luna angajare = "<< data_angajarii.tm_mon+1<<" zi angajare= "<<data_angajarii.tm_mday<<endl;
                cout<<salariu()<<endl;
            }
            virtual double salariu()
            {
                return salariu_baza + an_vechime * 100;
            }
            virtual ~Angajat(){};
};