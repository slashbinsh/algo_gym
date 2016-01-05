//============================================================================
// Name        : zigzag.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : http://www.geeksforgeeks.org/print-concatenation-of-zig-zag-string-form-in-n-rows/
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printZigZagConcat(string input, int n) {
	if (n == 1) {
		return;
	}
	string output[n];
	int row = 0;
	bool down;
	int len = input.length();

	for (int i = 0; i < len; i++) {
		output[row].push_back(input[i]);

		if (row == 0)
			down = true;
		else if (row == n - 1)
			down = false;

		down ? (row++) : (row--);
	}

	for (int i = 0; i < n; i++) {
		cout << output[i];
	}
}

int main() {
	printZigZagConcat("GEEKSFORGEEKS", 2);
	return 0;
}
