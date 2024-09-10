#include "Voter.h"

Voter::Voter(string firstname, string lastname, unsigned int voterage) {
	first = firstname;
	last = lastname;
	age = voterage;
}

Voter::Voter() {
	first = "";
	last = "";
	age = 0;
}

void Voter::show() {
	cout << last << ", " << first << ": " << age << endl;
}

