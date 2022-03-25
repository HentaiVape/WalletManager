#include <iostream>

using namespace std;

int main() {
	const int daysWeek = 7, cup = 100;
	string days[daysWeek] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int dailySpending[daysWeek];
	int sum = 0, countOver = 0, average;
	for (int i = 0; i < daysWeek; i++) {
		cout << "Enter your spend sum for " << days[i] << ":"; cin >> dailySpending[i];
		sum += dailySpending[i];
	}
	cout << endl << endl;
	average = sum / daysWeek;
	cout << "Sum spend for week:" << sum << endl;
	cout << "Average spend for day:" << average << endl << endl;
	for (int i = 0; i < daysWeek; i++) {
		if (dailySpending[i] > cup) {
			cout << days[i] << " overspend:" << dailySpending[i] << endl;
			countOver++;
		}
	}
	cout << endl << "Count overspended days:" << countOver << endl;
	system("pause");
	return 0;
}
