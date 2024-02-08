
// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment:Lab 3B
//Write a program minmax.cpp that finds the minimum and maximum storage in East basin in 2018.



#include <fstream>
#include <cstdlib>
#include <climits>
#include <limits.h>
#include <iostream>
using namespace std;

int main(){

        
ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

// string user_input; // user input

string date; // date
double eastEl, westEl, eastSt, westSt, min, max; // east and west coordinates
int i = 0;
// cout << "Enter date: ";
// cin >> user_input; // User input date

string junk;        // new string variable
getline(fin, junk); // read one line from the file 

while(fin >> date >> eastSt >> westSt >> eastEl >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
        fin.ignore(INT_MAX, '\n'); //ignorring the reqmaining columns 
 
    // for example, to print the date and East basin storage:
//     if (user_input == date) { // if the user input date is the same as the date
//     cout << date << " East basin storage: " << eastSt <<" billion gallons" << endl; // prints the date and East storage

// }

        if(i == 0){

                min = eastSt; // minimum
                max = eastSt; // maximum

                }
        if( min > eastSt)

            min = eastSt; // set minimum

        if(max < eastSt)

            max = eastSt; // set maximum
            i++; // increment i to the next i-th

    }

    cout<<"minimum storage in East basin: "<<min<<" billion gallons"<<endl;
    cout<<"MAXimum storage in East basin: "<<max<<" billion gallons"<<endl;
    
    
fin.close(); // close the file

}


    

