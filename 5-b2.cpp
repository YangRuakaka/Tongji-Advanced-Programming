
/* ÑîÓîçû ĞÅ01 2252843*/
#include <iostream>
using namespace std;

int main()
{
	int s[100],i,j,k,n;
	for (i = 0; i < 100; i++) {
		s[i] = -1;
	}
	for (j = 0; j < 100; j++) {
		for (k = j + 1,n=1;( k * n - 1) < 100; n++) {
			s[k * n - 1] = -s[k * n - 1];
		}
	}
	for (i = 0; i < 100; i++) {
		if (s[i] > 0) {
			if (i == 99) {
				cout << (i + 1);
			}
			else {
				cout << (i + 1) << " ";
			}
		
			
		}
    }
	cout << endl;
}
