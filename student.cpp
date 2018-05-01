#include <string>
#include <iostream>
#include "student.h"

void student::setName(std::string &firstName, std::string &lastName)
{
  first = firstName;
  last = lastName;
}
std::string student::fullName()
{
  std::string f;
  f = first;
  f.append(" ");
  f.append(last);
  return f;
}
