#ifndef ASTRONAUT_H
#define ASTRONAUT_H
#include "employee.h"
 
enum AstronautType{
  Pilot = 1,
  MissionSpecialist,
  PayloadSpecialist
};
 
class Astronaut : Employee {
private:
        AstronautType _astronautType;
        int _highPressure;
        int _lowPressure;
        string *_skills;
public:
        Astronaut (const Employee& employee, AstronautType astronautType, int highPressure, int lowPressure)
          :Employee(employee); 
 
        bool PhysicalRequirements(int age, int weight, int height);
        bool ArterialPressure (int highPressure, int lowPresurre);
        bool Overload();
        bool Dependency(int smokeDependency, int alcoholDependency);
        bool Disease(int _health_level, int _mental_health);
        void SetSkills();
        GetSkills(string *_skills) const;
        bool CheckSkills(string *_skills)       
				bool CheckAstronautType (int type); 
				void Work() override;
				void FlyToSpace();
				void AstronautTesting();
};

#endif
