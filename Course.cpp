#include "course.h"

Course *createCourse(string n, string l, int s, int h){
    //creating the course object and dynamically creating the section array

    Course* myCourse = new Course;
    myCourse->name = n;
    myCourse->location = l;
    myCourse->numSections = s;
    string * sections = new string [myCourse->numSections];
    myCourse->section = sections;
    myCourse->creditHours = h;

    return myCourse;
}



void destroyCourse(Course* myCourse){
    //destroy the dynamically created courses and section array

    delete [] myCourse->section;
    delete myCourse;
}

void printCourse(Course* myCourse){
    //displaying the entered courses

    cout << setw(30) << left << "COURSE NAME: " << left << setw(10) << myCourse->name << endl;

    cout << setw(30) << left << "COURSE LOCATION: " << left << setw(10) <<  myCourse->location << endl;

    cout << setw(30) << left << "CREDIT HOURS: " << left << setw(10) << myCourse->creditHours << endl;

    cout << setw(30) << left << "COURSE SECTIONS: " << endl;

    for (int i = 0; i < myCourse->numSections; i++){
        cout << setw(30) << left << "  " << left << setw(10) << myCourse->section[i] << endl;
    }

    cout << endl;
}