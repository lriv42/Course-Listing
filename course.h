#ifndef COURSE_H
#define COURSE_H


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//structure for course
struct Course {
    string name;
    string location;
    string *section;
    int numSections;
    int creditHours;
};

//function prototypes
Course * createCourse(string, string, int, int);

void destroyCourse(Course* myCourse);

void printCourse(Course* myCourse);

#endif