#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	vector<int> vec;
	
	
	int num;
	while (cin >> num) {
		vec.push_back(num);
	}

	
	sort(vec.rbegin(), vec.rend());
	cout << "ordered array "<<endl;
	for (auto i : vec)
		cout << i << endl;
	
	
	
	system("pause");
}

