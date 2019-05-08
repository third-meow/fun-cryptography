#include<bits/stdc++.h>
#include "sha256/sha256.h"
using namespace std;

int main(int argc, char *argv[]) {
	string inp;
	cin >> inp;

	cout << sha256(inp) << endl;

	return 0;
}

