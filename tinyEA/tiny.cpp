#include<bits/stdc++.h>
using namespace std;

uint32_t delta=0x9E3779B9;

void encrypt (uint32_t (&v)[2], uint32_t k[4]) {
    uint32_t sum = 0;
    for (int i = 0; i < 32; i++) {
        sum += delta;
        v[0] += ((v[1]<<4) + k[0]) ^ (v[1] + sum) ^ ((v[1]>>5) + k[1]);
        v[1] += ((v[0]<<4) + k[2]) ^ (v[0] + sum) ^ ((v[0]>>5) + k[3]);
    }
}

void decrypt (uint32_t (&v)[2], uint32_t k[4]) {
    uint32_t sum = 0xC6EF3720;
    for (int i = 0; i < 32; i++) {
        v[1] -= ((v[0]<<4) + k[2]) ^ (v[0] + sum) ^ ((v[0]>>5) + k[3]);
        v[0] -= ((v[1]<<4) + k[0]) ^ (v[1] + sum) ^ ((v[1]>>5) + k[1]);
        sum -= delta;
    }
}

int main(int argc, char *argv[]) {
	uint32_t data[2] = {88888, 55555};
	uint32_t key[4];

	cout << "Enter data: " << endl;
	for(int i = 0; i < 2; ++i) {
		cin >> data[i];
	}
	cout << "Enter Key: " << endl;
	for(int i = 0; i < 4; ++i) {
		cin >> key[i];
	}

	encrypt(data, key);
	cout << data[0] << endl << data[1] << endl;
	decrypt(data, key);
	cout << data[0] << endl << data[1] << endl;





	return 0;
}

