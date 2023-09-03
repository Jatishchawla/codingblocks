#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> v = {1, 2, 1, 4, 1};

	int slow = v[0];
	int fast = v[0];

	while (true) {

		slow = v[slow];
		fast = v[v[fast]];

		if (slow == fast) {
			break;
		}

	}

	slow = v[0];

	while (slow != fast) {
		slow = v[slow];
		fast = v[fast];
	}

	cout << slow << endl; // or fast

	return 0;
}