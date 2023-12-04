/* ÑîÓîçû ÐÅ01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
static const char other[] = "!@#$%^&*-_=+,.?";

int main()
{
	cin.ignore(1234, '\n');
	int len, upper, lower, num, others, i, j, sum_u, sum_l, sum_n, sum_o,sum;
	char pw[11][17] = { 0 };
	cin >> len >> upper >> lower >> num >> others;
	cin.ignore(1234, '\n');
	for (i = 0; i < 10; i++) {
		for (j = 0; j < len; j++) {
			cin >> pw[i][j];
		}
	}
	for (i = 0; i < 10; i++) {
		sum_u = 0; sum_l = 0; sum_n = 0; sum_o = 0; sum = 0;
		for (j = 0; j < len; j++) {
			if (pw[i][j] >= 'a' && pw[i][j] <= 'z') {
				sum_l++;
				sum++;
				continue;
			}

			if (pw[i][j] >= 'A' && pw[i][j] <= 'Z') {
				sum_u++;
				sum++;
				continue;
			}

			if (pw[i][j] >= '0' && pw[i][j] <= '9') {
				sum_n++;
				sum++;
				continue;
			}
			for (int k = 0; k < 15; k++) {
				if (pw[i][j] == other[k]) {
					sum_o++;
					sum++;
					continue;
				}
			}

		}
		if ((sum == len) && (sum_u >= upper) && (sum_l >= lower) && (sum_n >= num) && (sum_o >= others)) {
			continue;
		}
		else {
			cout << "´íÎó" << endl;
			return -1;
		}
	}
	cout << "ÕýÈ·" << endl;
	return 0;
}