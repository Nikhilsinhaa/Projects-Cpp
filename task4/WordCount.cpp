#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWordsInFile(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Unable to open file " << filename << endl;
        return -1;
    }

    int wordCount = 0;
    string line, word;

    while (getline(inputFile, line)) {
        istringstream iss(line);
        while (iss >> word) {
            wordCount++;
        }
    }

    inputFile.close();
    return wordCount;
}

int main() {
    string filename;

    cout << "Enter the name of the text file: ";
    cin >> filename;

    int totalWords = countWordsInFile(filename);
    if (totalWords >= 0) {
        cout << "Total number of words in the file: " << totalWords << endl;
    }

    return 0;
}
