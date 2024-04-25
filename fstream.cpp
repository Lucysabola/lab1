#include <iostream>
#include <fstream>
#include <string>
#include <cctype> 

using namespace std;

int countVowels(const string& vowel) {
    int count = 0;
    for (char vow : vowel) {
        if (isalpha(vow)) {
            char lowercase = tolower(vow);
            if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
                count++;
            }
        }
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

string reverseString(const string& str) {
    return string(str.rbegin(), str.rend());
}

string capitalizeSecondLetter(const string& str) {
    string result;
    bool capitalizeNext = true;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (capitalizeNext) {
                result += toupper(ch);
                capitalizeNext = false;
            } else {
                result += ch;
            }
        } else {
            result += ch;
            capitalizeNext = true;
        }
    }
    return result;
}

int main() {
    const string filename = "fileData.txt"; 
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: File '" << filename << "' not found." << endl;
        return 1;
    }

    string fileData;
    getline(inputFile, fileData);

    cout << "File contents:\n" << fileData << endl;
    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed statement: " << reverseString(fileData) << endl;
    cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
