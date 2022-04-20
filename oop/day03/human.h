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
      bool _isBreathing;
protected:
      int _mental_health;
      int _height;
      int _weight;
      int _hungerDegree;
      int _thirstDegree;
      void Think();
public:
      void GetUp();
      void Speak();
      void Walk();
      void Sleep();
      void GetAngry();
      void Joy();      
      void Eat(Food _food);
      void Drink(Drinks _drink);
      bool Die();
      void SetEyeColour(EyeColour eye_colour);
      HairColour GetHairColour() const;
      void SetHairColor(HairColour hair_colour);
      Gender GetGender() const;
      Human* GetFather() const;
      Human* GetMother() const;
      void SetHealthLevel(int health_level); 
      int GetHealthLevel() const;
      void SetHighPressure(int highPressure);
      int GetHighPressure() const;
      void SetLowPressure(int lowPressure);
      int GetLowPressure() const;
      void SetAlcoholDependency(int alcoholDependency);
      int GetAlcoholDependency();
		
      Human(Gender gender, EyeColour eye_colour, HairColour hair_colour, Human* father, Human* mother, int health_level, int tirednessDegree, int mental_health, int height, int weight, int hungerDegree, int thirstDegree, int highPressure, int lowPressure, int alcoholDependency, bool isBreathing = true);
      Human(const Human&) = default;
};
 
#endif
