#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {

	// declare set
	set<string> foo = {
		"Canberra",
		"Vienna",
		"Port Louis",
		"Podgorica",
		"Canberra",
		"Ottawa",
		"Berlin"
	};

	// iterator and output
	for (set<string>::iterator it = foo.begin(); it != foo.end(); ++it)
		cout << *it << endl ;

	cout << endl;

	foo.clear();

	cin.get();
	return 0;

}