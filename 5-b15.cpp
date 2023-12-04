/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char str[3][128] = { 0 };
	int i, j,sum_n=0,sum_u=0,sum_l=0,sum_b=0,sum_e=0; 
	
	for (i = 0; i < 3; i++) {
		cout << "请输入第" << i + 1 <<"行"<< endl;
		cin.getline(str[i], 128);
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 128; j++) {
			if ((str[i][j] >= '0' && str[i][j] <= '9') || (str[i][j] >= 'a' && str[i][j] <= 'z') || (str[i][j] >= 'A' && str[i][j] <= 'Z') || (str[i][j] == ' ')|| (str[i][j] == '\0')) {
				if (str[i][j] >= '0' && str[i][j] <= '9')
					sum_n++;
				if (str[i][j] >= 'a' && str[i][j] <= 'z')
					sum_l++;
				if (str[i][j] >= 'A' && str[i][j] <= 'Z')
					sum_u++;
				if (str[i][j] == ' ')
					sum_b++;
			}
			else
				sum_e++;
		}
	}
	cout << "大写 : " << sum_u << endl;
	cout << "小写 : " << sum_l << endl;
	cout << "数字 : " << sum_n << endl;
	cout << "空格 : " << sum_b << endl;
	cout << "其它 : " << sum_e << endl;
	
}