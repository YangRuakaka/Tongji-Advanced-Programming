/* ÑîÓîçû ĞÅ01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "ÇëÊäÈë[0,100ÒÚ)Ö®¼äµÄÊı×Ö:" << endl;
	double a;
	cin >> a;
	cout << "´óĞ´½á¹ûÊÇ:";
	if (a ==0) {
		cout << "ÁãÔ²";
	}
	if (!(int(a / 1000000000) == 0)) {
		switch (int(a / 1000000000)) {
			case 1:
				cout << "Ò¼Ê°";
				break;
			case 2:
				cout << "·¡Ê°";
				break;
			case 3:
				cout << "ÈşÊ°";
				break;
			case 4:
				cout << "ËÁÊ°";
				break;
			case 5:
				cout << "ÎéÊ°";
				break;
			case 6:
				cout << "Â½Ê°";
				break;
			case 7:
				cout << "ÆâÊ°";
				break;
			case 8:
				cout << "°ÆÊ°";
				break;
			case 9:
				cout << "¾ÁÊ°";
				break;
		}
	}
	
	
	if (!(int(a / 1000000000) % 10 == 0&& int(a / 100000000) % 10==0)) {
		switch (int(a / 100000000) % 10) {
			case 1:
				cout << "Ò¼ÒÚ";
				break;
			case 2:
				cout << "·¡ÒÚ";
				break;
			case 3:
				cout << "ÈşÒÚ";
				break;
			case 4:
				cout << "ËÁÒÚ";
				break;
			case 5:
				cout << "ÎéÒÚ";
				break;
			case 6:
				cout << "Â½ÒÚ";
				break;
			case 7:
				cout << "ÆâÒÚ";
				break;
			case 8:
				cout << "°ÆÒÚ";
				break;
			case 9:
				cout << "¾ÁÒÚ";
				break;
			case 0:
				cout << "ÒÚ";
				break;
		}

		}

	

	
		
	
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0&& int(a / 10000000) % 10==0)) {
		if (!(int(a / 1000000) % 10 == 0 && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0)) {
			switch (int(a / 10000000) % 10) {
				case 1:
					cout << "Ò¼Ç§";
					break;
				case 2:
					cout << "·¡Ç§";
					break;
				case 3:
					cout << "ÈşÇ§";
					break;
				case 4:
					cout << "ËÁÇ§";
					break;
				case 5:
					cout << "ÎéÇ§";
					break;
				case 6:
					cout << "Â½Ç§";
					break;
				case 7:
					cout << "ÆâÇ§";
					break;
				case 8:
					cout << "°ÆÇ§";
					break;
				case 9:
					cout << "¾ÁÇ§";
					break;
				case 0:
					cout << "Áã";
					break;
			}
		}
		else {
			switch (int(a / 10000000) % 10) {
				case 1:
					cout << "Ò¼Ç§";
					break;
				case 2:
					cout << "·¡Ç§";
					break;
				case 3:
					cout << "ÈşÇ§";
					break;
				case 4:
					cout << "ËÁÇ§";
					break;
				case 5:
					cout << "ÎéÇ§";
					break;
				case 6:
					cout << "Â½Ç§";
					break;
				case 7:
					cout << "ÆâÇ§";
					break;
				case 8:
					cout << "°ÆÇ§";
					break;
				case 9:
					cout << "¾ÁÇ§";
					break;
			}

		}
		
	}
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0&& int(a / 1000000) % 10==0)) {
		if (int(a / 10000000) % 10 == 0) {
			switch (int(a / 1000000) % 10) {
				case 1:
					cout << "Ò¼°Û";
					break;
				case 2:
					cout << "·¡°Û";
					break;
				case 3:
					cout << "Èş°Û";
					break;
				case 4:
					cout << "ËÁ°Û";
					break;
				case 5:
					cout << "Îé°Û";
					break;
				case 6:
					cout << "Â½°Û";
					break;
				case 7:
					cout << "Æâ°Û";
					break;
				case 8:
					cout << "°Æ°Û";
					break;
				case 9:
					cout << "¾Á°Û";
					break;
			}
		}
		else {
			if (!(int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0)) {
				switch (int(a / 1000000) % 10) {
					case 1:
						cout << "Ò¼°Û";
						break;
					case 2:
						cout << "·¡°Û";
						break;
					case 3:
						cout << "Èş°Û";
						break;
					case 4:
						cout << "ËÁ°Û";
						break;
					case 5:
						cout << "Îé°Û";
						break;
					case 6:
						cout << "Â½°Û";
						break;
					case 7:
						cout << "Æâ°Û";
						break;
					case 8:
						cout << "°Æ°Û";
						break;
					case 9:
						cout << "¾Á°Û";
						break;
					case 0:
						cout << "Áã";
						break;
				}
			}
			else {
				switch (int(a / 1000000) % 10) {
					case 1:
						cout << "Ò¼°Û";
						break;
					case 2:
						cout << "·¡°Û";
						break;
					case 3:
						cout << "Èş°Û";
						break;
					case 4:
						cout << "ËÁ°Û";
						break;
					case 5:
						cout << "Îé°Û";
						break;
					case 6:
						cout << "Â½°Û";
						break;
					case 7:
						cout << "Æâ°Û";
						break;
					case 8:
						cout << "°Æ°Û";
						break;
					case 9:
						cout << "¾Á°Û";
						break;
				}

			}
			
		}
	}
	
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0 && int(a / 100000) % 10 == 0)) {
		if (int(a / 1000000) % 10 == 0) {
			
				switch (int(a / 100000) % 10) {
					case 1:
						cout << "Ò¼Ê°";
						break;
					case 2:
						cout << "·¡Ê°";
						break;
					case 3:
						cout << "ÈşÊ°";
						break;
					case 4:
						cout << "ËÁÊ°";
						break;
					case 5:
						cout << "ÎéÊ°";
						break;
					case 6:
						cout << "Â½Ê°";
						break;
					case 7:
						cout << "ÆâÊ°";
						break;
					case 8:
						cout << "°ÆÊ°";
						break;
					case 9:
						cout << "¾ÁÊ°";
						break;
				}
			
			

		}
		else {
			if (!(int(a / 10000) % 10 == 0)) {
				switch (int(a / 100000) % 10) {
					case 1:
						cout << "Ò¼Ê°";
						break;
					case 2:
						cout << "·¡Ê°";
						break;
					case 3:
						cout << "ÈşÊ°";
						break;
					case 4:
						cout << "ËÁÊ°";
						break;
					case 5:
						cout << "ÎéÊ°";
						break;
					case 6:
						cout << "Â½Ê°";
						break;
					case 7:
						cout << "ÆâÊ°";
						break;
					case 8:
						cout << "°ÆÊ°";
						break;
					case 9:
						cout << "¾ÁÊ°";
						break;
					case 0:
						cout << "Áã";
						break;
				}
			}
			else {
				switch (int(a / 100000) % 10) {
					case 1:
						cout << "Ò¼Ê°";
						break;
					case 2:
						cout << "·¡Ê°";
						break;
					case 3:
						cout << "ÈşÊ°";
						break;
					case 4:
						cout << "ËÁÊ°";
						break;
					case 5:
						cout << "ÎéÊ°";
						break;
					case 6:
						cout << "Â½Ê°";
						break;
					case 7:
						cout << "ÆâÊ°";
						break;
					case 8:
						cout << "°ÆÊ°";
						break;
					case 9:
						cout << "¾ÁÊ°";
						break;
				}

			}
			
		}
	}
	
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0 && int(a / 10000) % 10 == 0&& int(a / 100000) % 10==0)) {
		switch (int(a / 10000) % 10) {
			case 1:
				cout << "Ò¼Íò";
				break;
			case 2:
				cout << "·¡Íò";
				break;
			case 3:
				cout << "ÈşÍò";
				break;
			case 4:
				cout << "ËÁÍò";
				break;
			case 5:
				cout << "ÎéÍò";
				break;
			case 6:
				cout << "Â½Íò";
				break;
			case 7:
				cout << "ÆâÍò";
				break;
			case 8:
				cout << "°ÆÍò";
				break;
			case 9:
				cout << "¾ÁÍò";
				break;
			case 0:
				cout << "Íò";
				break;
		}


	}
		
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0&& int(a / 10000) % 10==0&& int(a / 1000) % 10==0)) {
		switch (int(a / 1000) % 10) {
			case 1:
				cout << "Ò¼Ç§";
				break;
			case 2:
				cout << "·¡Ç§";
				break;
			case 3:
				cout << "ÈşÇ§";
				break;
			case 4:
				cout << "ËÁÇ§";
				break;
			case 5:
				cout << "ÎéÇ§";
				break;
			case 6:
				cout << "Â½Ç§";
				break;
			case 7:
				cout << "ÆâÇ§";
				break;
			case 8:
				cout << "°ÆÇ§";
				break;
			case 9:
				cout << "¾ÁÇ§";
				break;
			case 0:
				cout << "Áã";
				break;
		}
	}
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0&& int(a / 100) % 10==0)) {
		if (int(a / 1000) % 10 == 0) {
			switch (int(a / 100) % 10) {
			    case 1:
					cout << "Ò¼°Û";
					break;
				case 2:
					cout << "·¡°Û";
					break;
				case 3:
					cout << "Èş°Û";
					break;
				case 4:
					cout << "ËÁ°Û";
					break;
				case 5:
					cout << "Îé°Û";
					break;
				case 6:
					cout << "Â½°Û";
					break;
				case 7:
					cout << "Æâ°Û";
					break;
				case 8:
					cout << "°Æ°Û";
					break;
				case 9:
					cout << "¾Á°Û";
					break;
			}
		}
		else {
			if (!(int(a / 100) % 10 && int(a - int(a / 1000000000) * 1e9) % 10)) {
				switch (int(a / 100) % 10) {
					case 1:
						cout << "Ò¼°Û";
						break;
					case 2:
						cout << "·¡°Û";
						break;
					case 3:
						cout << "Èş°Û";
						break;
					case 4:
						cout << "ËÁ°Û";
						break;
					case 5:
						cout << "Îé°Û";
						break;
					case 6:
						cout << "Â½°Û";
						break;
					case 7:
						cout << "Æâ°Û";
						break;
					case 8:
						cout << "°Æ°Û";
						break;
					case 9:
						cout << "¾Á°Û";
						break;
					case 0:
						cout << "Áã";
						break;
				}
			}
			else {
				switch (int(a / 100) % 10) {
					case 1:
						cout << "Ò¼°Û";
						break;
					case 2:
						cout << "·¡°Û";
						break;
					case 3:
						cout << "Èş°Û";
						break;
					case 4:
						cout << "ËÁ°Û";
						break;
					case 5:
						cout << "Îé°Û";
						break;
					case 6:
						cout << "Â½°Û";
						break;
					case 7:
						cout << "Æâ°Û";
						break;
					case 8:
						cout << "°Æ°Û";
						break;
					case 9:
						cout << "¾Á°Û";
						break;
				}
			}
			
		}
	}
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0 && int(a / 100) % 10 == 0&& int(a / 10) % 10==0)) {
		if (int(a / 100) % 10==0) {
			switch (int(a / 10) % 10) {
				case 1:
					cout << "Ò¼Ê°";
					break;
				case 2:
					cout << "·¡Ê°";
					break;
				case 3:
					cout << "ÈşÊ°";
					break;
				case 4:
					cout << "ËÁÊ°";
					break;
				case 5:
					cout << "ÎéÊ°";
					break;
				case 6:
					cout << "Â½Ê°";
					break;
				case 7:
					cout << "ÆâÊ°";
					break;
				case 8:
					cout << "°ÆÊ°";
					break;
				case 9:
					cout << "¾ÁÊ°";
					break;
			}
		}
		else {
			if (!(int(a - int(a / 1000000000) * 1e9) % 10)) {
				switch (int(a / 10) % 10) {

					case 1:
						cout << "Ò¼Ê°";
						break;
					case 2:
						cout << "·¡Ê°";
						break;
					case 3:
						cout << "ÈşÊ°";
						break;
					case 4:
						cout << "ËÁÊ°";
						break;
					case 5:
						cout << "ÎéÊ°";
						break;
					case 6:
						cout << "Â½Ê°";
						break;
					case 7:
						cout << "ÆâÊ°";
						break;
					case 8:
						cout << "°ÆÊ°";
						break;
					case 9:
						cout << "¾ÁÊ°";
						break;
					case 0:
						cout << "Áã";
						break;
				}
			}
			else {
				switch (int(a / 10) % 10) {

					case 1:
						cout << "Ò¼Ê°";
						break;
					case 2:
						cout << "·¡Ê°";
						break;
					case 3:
						cout << "ÈşÊ°";
						break;
					case 4:
						cout << "ËÁÊ°";
						break;
					case 5:
						cout << "ÎéÊ°";
						break;
					case 6:
						cout << "Â½Ê°";
						break;
					case 7:
						cout << "ÆâÊ°";
						break;
					case 8:
						cout << "°ÆÊ°";
						break;
					case 9:
						cout << "¾ÁÊ°";
						break;
				}
			}
			
		}
	}
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0 && int(a / 100) % 10 == 0 && int(a / 10) % 10 == 0 && int(a - int(a / 1000000000) * 1e9) % 10 == 0)) {
		switch (int(a - int(a / 1000000000) * 1e9) % 10) {
			case 1:
				cout << "Ò¼Ô²";
				break;
			case 2:
				cout << "·¡Ô²";
				break;
			case 3:
				cout << "ÈşÔ²";
				break;
			case 4:
				cout << "ËÁÔ²";
				break;
			case 5:
				cout << "ÎéÔ²";
				break;
			case 6:
				cout << "Â½Ô²";
				break;
			case 7:
				cout << "ÆâÔ²";
				break;
			case 8:
				cout << "°ÆÔ²";
				break;
			case 9:
				cout << "¾ÁÔ²";
				break;
			case 0:
				cout << "Ô²";
		}
	}
	
	if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0 && int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
		cout << "Õû";
	}
	else {
		if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0 && int(a / 100) % 10 == 0 && int(a / 10) % 10 == 0 && int(a - int(a / 1000000000) * 1e9) % 10 == 0)) {
			if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ò¼½Ç";
						break;
					case 2:
						cout << "·¡½Ç";
						break;
					case 3:
						cout << "Èş½Ç";
						break;
					case 4:
						cout << "ËÁ½Ç";
						break;
					case 5:
						cout << "Îé½Ç";
						break;
					case 6:
						cout << "Â½½Ç";
						break;
					case 7:
						cout << "Æâ½Ç";
						break;
					case 8:
						cout << "°Æ½Ç";
						break;
					case 9:
						cout << "¾Á½Ç";
						break;
					case 0:
						cout << "Áã";
				}
				cout << "Õû";
			}
			else if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				cout << "Áã";
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ò¼·Ö";
						break;
					case 2:
						cout << "·¡·Ö";
						break;
					case 3:
						cout << "Èş·Ö";
						break;
					case 4:
						cout << "ËÁ·Ö";
						break;
					case 5:
						cout << "Îé·Ö";
						break;
					case 6:
						cout << "Â½·Ö";
						break;
					case 7:
						cout << "Æâ·Ö";
						break;
					case 8:
						cout << "°Æ·Ö";
						break;
					case 9:
						cout << "¾Á·Ö";
						break;

				}

			}
			else {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ò¼½Ç";
						break;
					case 2:
						cout << "·¡½Ç";
						break;
					case 3:
						cout << "Èş½Ç";
						break;
					case 4:
						cout << "ËÁ½Ç";
						break;
					case 5:
						cout << "Îé½Ç";
						break;
					case 6:
						cout << "Â½½Ç";
						break;
					case 7:
						cout << "Æâ½Ç";
						break;
					case 8:
						cout << "°Æ½Ç";
						break;
					case 9:
						cout << "¾Á½Ç";
						break;

				}
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ò¼·Ö";
						break;
					case 2:
						cout << "·¡·Ö";
						break;
					case 3:
						cout << "Èş·Ö";
						break;
					case 4:
						cout << "ËÁ·Ö";
						break;
					case 5:
						cout << "Îé·Ö";
						break;
					case 6:
						cout << "Â½·Ö";
						break;
					case 7:
						cout << "Æâ·Ö";
						break;
					case 8:
						cout << "°Æ·Ö";
						break;
					case 9:
						cout << "¾Á·Ö";
						break;

				}
			}
		}
		else {
			if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ò¼½Ç";
						break;
					case 2:
						cout << "·¡½Ç";
						break;
					case 3:
						cout << "Èş½Ç";
						break;
					case 4:
						cout << "ËÁ½Ç";
						break;
					case 5:
						cout << "Îé½Ç";
						break;
					case 6:
						cout << "Â½½Ç";
						break;
					case 7:
						cout << "Æâ½Ç";
						break;
					case 8:
						cout << "°Æ½Ç";
						break;
					case 9:
						cout << "¾Á½Ç";
						break;

				}
				cout << "Õû";
			}
			else if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ò¼·Ö";
						break;
					case 2:
						cout << "·¡·Ö";
						break;
					case 3:
						cout << "Èş·Ö";
						break;
					case 4:
						cout << "ËÁ·Ö";
						break;
					case 5:
						cout << "Îé·Ö";
						break;
					case 6:
						cout << "Â½·Ö";
						break;
					case 7:
						cout << "Æâ·Ö";
						break;
					case 8:
						cout << "°Æ·Ö";
						break;
					case 9:
						cout << "¾Á·Ö";
						break;

				}

			}
			else {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ò¼½Ç";
						break;
					case 2:
						cout << "·¡½Ç";
						break;
					case 3:
						cout << "Èş½Ç";
						break;
					case 4:
						cout << "ËÁ½Ç";
						break;
					case 5:
						cout << "Îé½Ç";
						break;
					case 6:
						cout << "Â½½Ç";
						break;
					case 7:
						cout << "Æâ½Ç";
						break;
					case 8:
						cout << "°Æ½Ç";
						break;
					case 9:
						cout << "¾Á½Ç";
						break;

				}
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ò¼·Ö";
						break;
					case 2:
						cout << "·¡·Ö";
						break;
					case 3:
						cout << "Èş·Ö";
						break;
					case 4:
						cout << "ËÁ·Ö";
						break;
					case 5:
						cout << "Îé·Ö";
						break;
					case 6:
						cout << "Â½·Ö";
						break;
					case 7:
						cout << "Æâ·Ö";
						break;
					case 8:
						cout << "°Æ·Ö";
						break;
					case 9:
						cout << "¾Á·Ö";
						break;

				}

			}

		}
	}
	
	return 0;


}