#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stdId, char namee[]) {
  studentId = stdId;

  strcpy(name, namee);
};

// Display StudentId and Name
void Student::display() {
  cout << Student::studentId << endl;
  cout << Student::name << endl;
};
