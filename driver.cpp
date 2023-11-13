/*
	Driver for Course Structure
	LAB 1 - CSC1310
	Liam Rivers
	
	8/28/2023
*/


#include "course.h"
#include <iostream>

using namespace std;

int main ()
{
	//LOOK! done
	//Create a pointer to an array of Course pointers called myCourses here

    Course **myCourses;

	
	int numCourses, numSections;
	string name, location;
	int numHours;
	string sectionNum;
	
	cout << "\nHow many courses are you taking this semester?\n";
	cin >> numCourses;
	cin.ignore();
	
	//LOOK!! done
	//Dynamically allocate a new array of pointers to Courses of size numCourses and assign this array to myCourses

	myCourses = new Course*[numCourses];
	
	for (int i=0; i< numCourses; i++)
	{
		cout << "\nCOURSE NAME:\t\t";
		getline(cin, name);
		cout << "\nCOURSE LOCATION:\t";
		getline(cin, location);
		cout << "\nCOURSE HOURS:\t\t";
		cin >> numHours;
		cout << "\nNUMBER OF SECTIONS?\t";
		cin >> numSections;
		cin.ignore();
		
		//LOOK!! done
		//Call the createCourse function and make sure to assign the returned value to myCourses[i]

        myCourses[i] = createCourse(name, location, numSections, numHours);
		
		
		for(int x=0; x<numSections; x++)
		{
			cout << "\nSECTION " << x+1 << ":\t\t";
			//LOOK!! done
			//Read in the string from the user and put in the correct array element of the sections array

			getline(cin, myCourses[i]->section[x] = sectionNum);
			
		}
		cout << "\n*******************************\n";
	}
	
	cout << "\n\nThe following are the courses you entered:\n\n";
	for(int i=0; i<numCourses; i++)
	{
		cout << "******************************* COURSE " << (i+1) << "*******************************\n";
		printCourse(myCourses[i]);
	}
	
	for(int i=0;  i< numCourses; i++)
	{
		destroyCourse(myCourses[i]);
	}
	delete [] myCourses;
	
	cout << endl << endl;
	return 0;
}

/*
TO FIX - NOTES

Driver.cpp:
Lines 26 & 60:
The variable sectionNum is unnecessary in your code here.

Course.h:
Lines 23 & 25:
Naming the parameters is not necessary here, but it also does not hurt.

Course.cpp:
Line 3:
Try to refrain from using single character variables as they are harder to understand

Line 29-38:
These are all good, though note that some of this formatting is unnecessary as once you use left once everything will be aligned,
and the setw() used before the class data also does nothing but add extra spaces to the cout stream.
*/