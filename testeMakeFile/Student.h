#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using std::string;
//Student CLASS declaration

class Student{
public:
  Student(string nm, string yr, float g); //constructor

  void boost_grade();
  void display();

private:
  string name;
  string year;
  float gpa;



};

#endif
