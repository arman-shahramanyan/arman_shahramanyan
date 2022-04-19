using namespace std;
#ifndef HUMAN
#define HUMAN

#include "enums.h"
#include "date.h"

class Human {
private:
      Gender _gender;
      EyeColour _eye_colour;
      HairColour _hair_colour;
      Human* _father;
      Human* _mother;
      int _health_level;
      int _tirednessDegree;
      int _highPressure;
      int _lowPressure;
      int _alcoholDependency;
protected:
      int _mental_health;
	  int _height;
      int _weight;
	  int _hungerDegree;
      int _thirstDegree;
      void Think();
public:
      void GetUp();
      char* Speak();
      void Walk();
      void Breath();
      void Sleep();
      void GetAngry();
      void Joy();      
      void Eat(Food _food);
      void Drink(Drinks _drink);
      void SetEyeColour(EyeColour eye_colour);
      HairColour GetHairColour() const;
      void SetHairColor(HairColour hair_colour);
      Gender GetGender() const;
      Human* GetFather() const;
      Human* GetMother() const;
      void SetHealthLevel(); 
      int GetHealthLevel() const;
      void SetHighPressure();
      int GetHighPressure() const;
      void SetLowPressure();
      int GetLowPressure() const;
      void SetAlcoholDependency();
      int GetAlcoholDependency();

      Human(Gender gender, EyeColour eye_colour, HairColour hair_colour, Human* father, Human* mother, int health_level, int tirednessDegree, int mental_health, int height, int weight, int hungerDegree, int thirstDegree, int highPressure, int lowPressure, int alcoholDependency); 
      Human(const Human&) = default;
};
 
#endif
