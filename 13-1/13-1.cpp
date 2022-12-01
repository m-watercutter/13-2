#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void pressEnterToContinue();
bool readFromFile(string filename);
bool letters(char a);

int main() {
	string datafile;
	cout << "Enter filename: ";
	getline(cin, datafile);
	bool status = readFromFile(datafile);
	if (status) cout << "Success!\n";
	else cout << "Failure :-(\n";
	pressEnterToContinue();
}

void pressEnterToContinue() {
	cout << "\nPress enter to continue...";
	cin.clear();
	while (cin.get() != '\n') continue;
}

bool readFromFile(string filename) {
	ifstream inFile;
	string word;
	int count = 0;
	int length = 0;
	
	inFile.open(filename);

	if (inFile.fail()) {
		cout << "read error - sorry\n";
		return false;
	}
	while (true) {
		inFile >> word;
		if (inFile.fail()) break;
		else {
			for (int i = 0; i < word.length(); i++) {
				if (letters(word[i])) {
					length++;
				}
			}
			if (word.length() > 1) {
				count++;
			}
			else if (letters(word[0])) {
				count++;
			}
			
		}
	}
	cout << "Words: " << count << endl;
	cout << "Characters: " << length << endl;
	return true;
}

bool letters(char a) {
	switch (a){
	case 'A':
		return true;
	case 'B':
		return true;
	case 'C':
		return true;
	case 'D':
		return true;
	case 'E':
		return true;
	case 'F':
		return true;
	case 'G':
		return true;
	case 'H':
		return true;
	case 'I':
		return true;
	case 'J':
		return true;
	case 'K':
		return true;
	case 'L':
		return true;
	case 'M':
		return true;
	case 'N':
		return true;
	case 'O':
		return true;
	case 'P':
		return true;
	case 'Q':
		return true;
	case 'R':
		return true;
	case 'S':
		return true;
	case 'T':
		return true;
	case 'U':
		return true;
	case 'V':
		return true;
	case 'W':
		return true;
	case 'X':
		return true;
	case 'Y':
		return true;
	case 'Z':
		return true;
	case 'a':
		return true;
	case 'b':
		return true;
	case 'c':
		return true;
	case 'd':
		return true;
	case 'e':
		return true;
	case 'f':
		return true;
	case 'g':
		return true;
	case 'h':
		return true;
	case 'i':
		return true;
	case 'j':
		return true;
	case 'k':
		return true;
	case 'l':
		return true;
	case 'm':
		return true;
	case 'n':
		return true;
	case 'o':
		return true;
	case 'p':
		return true;
	case 'q':
		return true;
	case 'r':
		return true;
	case 's':
		return true;
	case 't':
		return true;
	case 'u':
		return true;
	case 'v':
		return true;
	case 'w':
		return true;
	case 'x':
		return true;
	case 'y':
		return true;
	case 'z':
		return true;
	default:
		return false;
	}
}
