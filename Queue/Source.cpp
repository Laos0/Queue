#include <iostream>
#include <queue>

using namespace std;

// Basic Queue member function: empty, size, front, back, push, pop

int main() {

	queue<int> myQ;


	for (int i = 0; i < 10; i++) {
		cout << "Pushing in: " << i << endl;
		myQ.push(i);
	}
	cout << endl;

	cout << "The size of the queue is: " << myQ.size() << endl;
	cout << "The front of the queue is: " << myQ.front() << endl;
	cout << "The back of the queue is: " << myQ.back() << endl;
	cout << endl;

	while (!myQ.empty()) {
		cout << "Popping: " << myQ.front() << endl;
		myQ.pop();
	}

	system("pause");
	return 0;
}