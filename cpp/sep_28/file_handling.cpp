#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Step 1: Open a file for writing
    ofstream outputFile("myFile.txt");

    // Step 2: Check if the file opened successfully
    if (outputFile.is_open()) {
        // Step 3: Write data to the file
        outputFile << "Hello, world!" << endl;
        outputFile << "This is a line of text." << endl;

        // Step 6: Close the file when done
        outputFile.close();

        cout << "Data has been written to the file." << endl;
    } else {
        cout << "Failed to open the file for writing." << endl;
    }

    // Step 4: Open a file for reading
    ifstream inputFile("myFile.txt");

    // Step 2: Check if the file opened successfully
    if (inputFile.is_open()) {
        string line;

        // Step 5: Read data from the file
        while (getline(inputFile, line)) {
            cout << "Read from file: " << line << endl;
        }

        // Step 6: Close the file when done
        inputFile.close();
    } else {
        cout << "Failed to open the file for reading." << endl;
    }

    return 0;
}
