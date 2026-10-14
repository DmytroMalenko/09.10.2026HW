#include <iostream>

using namespace std;

void hanoi(int n, char source, char target, char auxiliary) {
	if (n == 1) {
		cout << "Move disk 1 from " << source << " to " << target << "\n";
		return;
	}
	hanoi(n - 1, source, auxiliary, target);
	cout << "Move disk " << n << " from " << source << " to " << target << "\n";

	hanoi(n - 1, auxiliary, target, source);
}

int main()
{
	/* Task 1 */

	hanoi(3, 'S', 'T', 'H');








}
