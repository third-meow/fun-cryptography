#include<bits/stdc++.h>
using namespace std;

int encrypt(int msg, int key, int pq) {
	return ((int) msg^key) % pq;
	//return ((int) pow(msg, key)) % pq;
}

/*
 * int decrypt(int msg, int key, int pq) {
 * 	return encrypt(msg, key, pq);
 * }
 */

int main(int argc, char *argv[]) {

	int secret;
	int key;
	int pq;

	cout << "Enter your secret message or encrypted message (as int): ";
	cin >> secret;

	cout << "Enter your public (to encrypt) or private (to decrypt) key: ";
	cin >> key;

	cout << "Enter your pq value: ";
	cin >> pq;

	cout << endl << "Your result is: " << encrypt(secret, key, pq) << endl;
	
	return 0;
}

