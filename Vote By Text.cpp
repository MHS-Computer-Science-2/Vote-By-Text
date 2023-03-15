// Vote By Text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //Create a vector to hold the voters (phone #s)
  

    ifstream fin;
    fin.open("votes.txt");



    while (!fin.eof()) {
        //Input phone number of the voter
        string phone;
        fin >> phone;
        //Input the voter's vote
        string vote;
        fin >> vote;
        
        // Part C. Check to see if the phone number has already voted

  
        // Part B. Add the phone number to the vector
          

        // Part A. Count the votes

     
    }//repeat until the end of the file

    cout << "Should we launch a mission to see if the moon is made of cheese?" << endl << endl;

    system("pause");
}
