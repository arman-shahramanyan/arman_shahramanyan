#ifndef TEACHER_H
#define TEACHER_H
​
#include "employee.h"
#include "enums.h"
​
enum Subject {
  armenian,
  russian,
  english,
  french,
  german,
  history,
  math,
  physics,
  chemistry,
  biology,
  geography,
  physicalEducation,
  drawing,
  music
};
​
enum Place {
  primarySchool,
  secondarySchool,
  highSchool,
  privateSchool,
  academy,
  educationCenter
};
​
class Teacher:public Employee {
  private:
      Subject _teachingSubject;
  	  Place _workPlace;	   
  public:
      Teacher(const Employee& employee, Subject teachingSubject, Place workPlace);    
	  Teacher(const Teacher&) = default;
      void Teach(bool _lesson);
      void CheckHomework();
	  void DevelopProfessionalSkills();
      void Joy() override;
};
