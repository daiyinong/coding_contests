#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
	string line;
	ifstream file ("tourist_sample_input.txt");

	if (file.is_open()) {
		while(getline(file, line)) {
			cout << line << '\n';
		}
		file.close();
	}
	return 0;
}