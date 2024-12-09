#include <fstream>// FILL IN DIRECTIVE FOR FILES
#include <iostream>
#include <iomanip>
using namespace std;

// This program reads records from a file. The file contains the
// following: student�s name, two test grades and final exam grade.
// It then prints this information to the screen.

// PLACE YOUR NAME HERE

const int NAMESIZE = 15;
const int MAXRECORDS = 50;

struct Grades	// declares a structure
{
	char name[NAMESIZE + 1];
	int test1;
	int test2;
	int final;
};

typedef Grades gradeType[MAXRECORDS];
// This makes gradeType a data type
// that holds MAXRECORDS
// Grades structures.

// FIll IN THE CODE FOR THE PROTOTYPE OF THE FUNCTION ReadIt
// WHERE THE FIRST ARGUMENT IS AN INPUT FILE, THE SECOND IS THE
// ARRAY OF RECORDS, AND THE THIRD WILL HOLD THE NUMBER OF RECORDS
// CURRENTLY IN THE ARRAY.

void readIt(ifstream& inData, Grades gradeRec[], int& numRecord);


int main()
{
	ifstream indata;

	indata.open("./graderoll.dat");

	int numRecord;	// number of records read in 

	gradeType studentRecord;

	if (!indata)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;

		return 1;
	}

	// FILL IN THE CODE TO CALL THE FUNCTION ReadIt.
	readIt(indata, studentRecord, numRecord);

	// output the information
	for (int count = 0; count < numRecord; count++)
	{
		cout << studentRecord[count].name << setw(10)
			 << studentRecord[count].test1
			 << setw(10) << studentRecord[count].test2;
		cout << setw(10) << studentRecord[count].final << endl;
	}

	return 0;
}

//**************************************************************
//	readIt
//
//	task:	  This procedure reads records into an array of
//	          records from an input file and keeps track of the
//	          total number of records
//	data in:  data file containing information to be placed in
//	          the array
//	data out: an array of records and the number of records
//
//**************************************************************

void readIt(ifstream& inData, Grades gradeRec[], int& total)// FILL IN THE CODE FOR THE FORMAL PARAMETERS AND THEIR
	        // DATA	TYPES.
	        // inData, gradeRec and total are the formal parameters
	        // total is passed by reference
{
	total = 0;

	inData.get(gradeRec[total].name, NAMESIZE);
	cout << endl;

	while (inData)
	{
		// FILL IN THE CODE TO READ test1
		string test1;
		inData >> test1;
		cout << test1 << endl;
		// FILL IN THE CODE TO READ test2
		string test2;
		inData >> test2;
		cout << test2 << endl;
		// FILL IN THE CODE TO READ final
		string test3;
		inData >> test3;
		cout << test3 << endl;
		
		total++;	// add one to total

		// FILL IN THE CODE TO CONSUME THE END OF LINE
		string skip;
		getline(inData, skip);
		cout << skip;
		
		// FILL IN THE CODE TO READ name
		string name;
		getline(inData, name);
		cout << name << endl;

		float avg = (stoi(test1) * .3 + stoi(test2) * .3 + stoi(test3) * .4);
		char grade;

		if(avg >= 90) {
			grade = 'A';
		} else if (avg >= 80) {
			grade = 'B';
		} else if (avg >= 70) {
			grade = 'C';
		} else if (avg >= 60) {
			grade = 'D';
		} else {
			grade = 'F';
		}

		cout << "The grade is " << grade << endl;
		}

}