#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
	for (int i = 0; i < A.size(); i++) {
		A[i] *= A[i];
	}
	sort(A.begin(), A.end()); // 快速排序
	return A;
}

int main() {
	vector<int> num;
	for (int i = 0; i < 10; i++) {
		int x;
		cin>>x;
		num.push_back(x);
	}
	sortedSquares(num);
	vector<int>::iterator b = num.begin();
	for (; b != num.end(); b++) {
		cout << *b << " ";
	}
	return 0;
}
