// Vote By Text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //Create a vector to hold the votes
    vector<string> voters;

    ifstream fin;
    fin.open("votes.txt");

    int yes = 0, no = 0, invalid = 0, duplicates = 0;

    while (!fin.eof()) {
        //Input phone number of the voter
        string phone;
        fin >> phone;
        //Input the voter's vote
        string vote;
        fin >> vote;
        
        // Part C. Check to see if the phone number has already voted
        bool found = false;
        for (int i = 0; i < voters.size(); i++) {
            if (phone == voters[i]) {
                found = true;
                duplicates++;
                break;
            }
        }
        if (found) continue;
            // Part B. Add the phone number to the vector
            voters.push_back(phone);

            // Part A. Count the votes
            if (vote == "yes") {
                yes++;
            }
            else if (vote == "no") {
                no++;
            }
            else {
                invalid++;
            }
     
    }//repeat until the end of the file

    cout << "Should we launch a mission to see if the moon is made of cheese?" << endl << endl;

    //Display the final results and winner
    cout << "Total votes: " << yes + no + invalid << endl;
    cout << "Yes: " << yes << endl;
    cout << "No: " << no << endl;
    cout << "Invalid: " << invalid << endl;
    cout << "Duplicate votes: " << duplicates << endl;

    if (yes > no) {
        cout << "Yes wins." << endl;
    }
    else if (no > yes) {
        cout << "No wins." << endl;
    }
    else {
        cout << "Tie." << endl;
    }

}
