using namespace std;
#ifndef HOMO_SAPIENCE
#define HOMO_SAPIENCE

#include "human.h"
#include "enums.h"

class HomoSapience:Human {
private:
    Religion _religion;
    Race _race;
    Nationality _nationality;
    string _surname;
    string _fatherName;
    int _patienceLevel;
    int _intelectLevel;
    int _smokeDependency;
public:
    HomoSapience(const Human& human,  Religion religion, Race race, Nationality nationality, string surname, string fatherName, int patienceLevel, int intelectLevel, int smokeDependency);
    HomoSapience(const HomoSapience&) = default;
    void GoToGym();
    void GoToParty();
    void ListenToMusic();
    void Read();
    virtual void GetTired();
    void SetSmokeDependency(int smokeDependency); 
    int GetSmokeDependency() const;
    void Smoke(int smokeDependency);
    void Relax();
}; 

#endif
