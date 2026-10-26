#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double t1, t2, t3;

	cout << "choose 3 numbers: " << endl;
	cin >> t1 >> t2 >> t3;
	if (t1 > 10000 || t2 > 10000 || t3 > 10000 || t1 <= 0 || t2 <= 0 || t3 <= 0) {
		cout << "you need to choose number that are less than 10000!" << endl;
		return 1; 
	}
	double total_time = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

	cout << "Time you need to eat a pie: "
		<< fixed << setprecision(2) << total_time << " hours " << endl;

	return 0;
}

