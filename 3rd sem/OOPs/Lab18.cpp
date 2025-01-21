#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Writing to a file
    ofstream outfile("result.txt");
    outfile << "Nidhi" << endl;
    outfile << "Marks" << endl;
    outfile << "450" << endl;
    outfile.close(); // Close the output file stream

    // Reading from a file
    ifstream infile("result.txt");
    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    char name[40], label[40], marks[40];

    infile >> name;   // Read first word
    infile >> label;  // Read second word
    infile >> marks;  // Read third word

    // Output the data
    cout << "Name of the student is: " << name << endl;
    cout << label << endl;
    cout << marks << endl;

    infile.close(); // Close the input file stream
    return 0;
}
