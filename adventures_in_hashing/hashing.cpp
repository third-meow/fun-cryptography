#include<bits/stdc++.h>
using namespace std;

/*
 * This hash func is not super useful because algo is implementation dependant
 */ 
hash<string> hash_func;

int main(int argc, char *argv[]) {

	string pass;
	cout << "Set Password: ";
	cin >> pass;

	unsigned long pass_hash = hash_func(pass);

	/*
	 * Another Day....
	 */

	cout << "Enter Password: ";

	string pass_attempt;
	cin >> pass_attempt;

	if (hash_func(pass_attempt) == pass_hash)
		cout << "Hello User" << endl;
	else
		cout << "Goodbye attacker" << endl;


	return 0;
}

