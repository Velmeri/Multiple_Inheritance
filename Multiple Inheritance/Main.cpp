#include <iostream>
#include <string>
#include "InscribedCircle.h"

using namespace std;

int main() {
	InscribedCircle::InscribedCircle A (10, 5);
	InscribedCircle::InscribedCircle B (5, 10);

	string answerA = A.IsInscribed() ? "yes": "no";
	string answerB = B.IsInscribed() ? "yes" : "no";
	
	cout << answerA << endl;
	cout << answerB << endl;

	return 0;
}