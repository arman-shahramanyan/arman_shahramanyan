#include <iostream>
#include "teacher.h"
Teacher::Teacher(const Employee& employee, Subject teachingSubject, Place workPlace)
    :Employee(employee)
{
    _teachingSubject = teachingSubject;
    _workPlace = workPlace;
    
}
void Teacher::Teach(bool _lesson) {
  if (_lesson) {
      ++_workTime;
      Joy();
  } else {
				GetAngry();
	}
}
void Teacher::CheckHomework() {
  bool _arePupilsReady;
  if (_arePupilsReady) {
      Joy();
  }
}
int countOfClasses = 0;
void Employee:: SetSalary() {
  _salary = countOfClasses * 8000;
  switch(_workplace) {
    case academy:
        _salary += 5000;
        break;
    case educationCenter:
    case privateSchool:
        _salary += 4000;
        break;
    case highSchool:
        _salary += 3000;
        break;
    case secondarySchool:
    case primarySchool:
        _salary += 2000;
        break;
  }
  GetSalary();
}
