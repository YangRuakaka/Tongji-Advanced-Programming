/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("������[0,100��)֮�������:\n"); 
	double a;
	scanf("%lf", &a);
	printf("��д�����:");
	if (a == 0) {
		printf("��Բ"); 
	}
	if (!((int)a / 1000000000 == 0)) {
		switch ((int)(a / 1000000000)) {
			case 1:
				printf("Ҽʰ"); 
				break;
			case 2:
				printf("��ʰ");  
				break;
			case 3:
				printf("��ʰ"); 
				break;
			case 4:
				printf("��ʰ"); 
				break;
			case 5:
				printf("��ʰ"); 
				break;
			case 6:
				printf("½ʰ"); 
				break;
			case 7:
				printf("��ʰ");
				break;
			case 8:
				printf("��ʰ");
				break;
			case 9:
				printf("��ʰ");
				break;
		}
	}


	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) % 10 == 0)) {
		switch ((int)(a / 100000000) % 10) {
			case 1:
				printf("Ҽ��");
				break;
			case 2:
				printf("����");
				break;
			case 3:
				printf("����");
				break;
			case 4:
				printf("����");
				break;
			case 5:
				printf("����");
				break;
			case 6:
				printf("½��");
				break;
			case 7:
				printf("����");
				break;
			case 8:
				printf("����");
				break;
			case 9:
				printf("����");
				break;
			case 0:
				printf("��");
				break;
		}

	}






	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0)) {
		if (!((int)(a / 1000000) % 10 == 0 && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0)) {
			switch ((int)(a / 10000000) % 10) {
				case 1:
					printf("Ҽǧ");
					break;
				case 2:
					printf("��ǧ");
					break;
				case 3:
					printf("��ǧ");
					break;
				case 4:
					printf("��ǧ");
					break;
				case 5:
					printf("��ǧ");
					break;
				case 6:
					printf("½ǧ");
					break;
				case 7:
					printf("��ǧ");
					break;
				case 8:
					printf("��ǧ");
					break;
				case 9:
					printf("��ǧ");
					break;
				case 0:
					printf("��");
					break;
			}
		}
		else {
			switch ((int)(a / 10000000) % 10) {
				case 1:
					printf("Ҽǧ");
					break;
				case 2:
					printf("��ǧ");
					break;
				case 3:
					printf("��ǧ");
					break;
				case 4:
					printf("��ǧ");
					break;
				case 5:
					printf("��ǧ");
					break;
				case 6:
					printf("½ǧ");
					break;
				case 7:
					printf("��ǧ");
					break;
				case 8:
					printf("��ǧ");
					break;
				case 9:
					printf("��ǧ");
					break;
			}

		}

	}
	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0)) {
		if ((int)(a / 10000000) % 10 == 0) {
			switch ((int)(a / 1000000) % 10) {
				case 1:
					printf("Ҽ��");
					break;
				case 2:
					printf("����");
					break;
				case 3:
					printf("����");
					break;
				case 4:
					printf("����");
					break;
				case 5:
					printf("���");
					break;
				case 6:
					printf("½��");
					break;
				case 7:
					printf("���");
					break;
				case 8:
					printf("�ư�");
					break;
				case 9:
					printf("����");
					break;
			}
		}
		else {
			if (!((int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0)) {
				switch ((int)(a / 1000000) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ư�");
						break;
					case 9:
						printf("����");
						break;
					case 0:
						printf("��");
						break;
				}
			}
			else {
				switch ((int)(a / 1000000) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ư�");
						break;
					case 9:
						printf("����");
						break;
				}

			}

		}
	}

	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0 && (int)(a / 100000) % 10 == 0)) {
		if ((int)(a / 1000000) % 10 == 0) {

			switch ((int)(a / 100000) % 10) {
				case 1:
					printf("Ҽʰ");
					break;
				case 2:
					printf("��ʰ"); 
					break;
				case 3:
					printf("��ʰ");
					break;
				case 4:
					printf("��ʰ"); 
					break;
				case 5:
					printf("��ʰ");
					break;
				case 6:
					printf("½ʰ");
					break;
				case 7:
					printf("��ʰ");
					break;
				case 8:
					printf("��ʰ");
					break;
				case 9:
					printf("��ʰ");
					break;
			}



		}
		else {
			if (!((int)(a / 10000) % 10 == 0)) {
				switch ((int)(a / 100000) % 10) {
					case 1:
						printf("Ҽʰ");
						break;
					case 2:
						printf("��ʰ"); 
						break;
					case 3:
						printf("��ʰ");
						break;
					case 4:
						printf("��ʰ"); 
						break;
					case 5:
						printf("��ʰ");
						break;
					case 6:
						printf("½ʰ");
						break;
					case 7:
						printf("��ʰ");
						break;
					case 8:
						printf("��ʰ");
						break;
					case 9:
						printf("��ʰ");
						break;
					case 0:
						printf("��");
						break;
				}
			}
			else {
				switch ((int)(a / 100000) % 10) {
					case 1:
						printf("Ҽʰ");
						break;
					case 2:
						printf("��ʰ"); 
						break;
					case 3:
						printf("��ʰ");
						break;
					case 4:
						printf("��ʰ"); 
						break;
					case 5:
						printf("��ʰ");
						break;
					case 6:
						printf("½ʰ");
						break;
					case 7:
						printf("��ʰ");
						break;
					case 8:
						printf("��ʰ");
						break;
					case 9:
						printf("��ʰ");
						break;
				}

			}

		}
	}

	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 100000) % 10 == 0)) {
		switch ((int)(a / 10000) % 10) {
			case 1:
				printf("Ҽ��");
				break;
			case 2:
				printf("����");
				break;
			case 3:
				printf("����");
				break;
			case 4:
				printf("����");
				break;
			case 5:
				printf("����");
				break;
			case 6:
				printf("½��");
				break;
			case 7:
		    	printf("����");
				break;
			case 8:
				printf("����");
				break;
			case 9:
				printf("����");
				break;
			case 0:
				printf("��");
				break;
		}


	}

	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0)) {
		switch ((int)(a / 1000) % 10) {
			case 1:
				printf("Ҽǧ");
				break;
			case 2:
				printf("��ǧ");
				break;
			case 3:
				printf("��ǧ");
				break;
			case 4:
				printf("��ǧ");
				break;
			case 5:
				printf("��ǧ");
				break;
			case 6:
				printf("½ǧ");
				break;
			case 7:
				printf("��ǧ");
				break;
			case 8:
				printf("��ǧ");
				break;
			case 9:
				printf("��ǧ");
				break;
			case 0:
				printf("��");
				break;
		}
	}
	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0)) {
		if ((int)(a / 1000) % 10 == 0) {
			switch ((int)(a / 100) % 10) {
				case 1:
					printf("Ҽ��");
					break;
				case 2:
					printf("����");
					break;
				case 3:
					printf("����");
					break;
				case 4:
					printf("����");
					break;
				case 5:
					printf("���");
					break;
				case 6:
					printf("½��");
					break;
				case 7:
					printf("���");
					break;
				case 8:
					printf("�ư�");
					break;
				case 9:
					printf("����");
					break;
			}
		}
		else {
			if (!((int)(a / 100) % 10 && (int)(a - (int)(a / 1000000000) * 1e9) % 10)) {
				switch ((int)(a / 100) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ư�");
						break;
					case 9:
						printf("����");
						break;
					case 0:
						printf("��");
						break;
				}
			}
			else {
				switch ((int)(a / 100) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ư�");
						break;
					case 9:
						printf("����");
						break;
				}
			}

		}
	}
	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0 && (int)(a / 10) % 10 == 0)) {
		if ((int)(a / 100) % 10 == 0) {
			switch ((int)(a / 10) % 10) {
				case 1:
					printf("Ҽʰ");
					break;
				case 2:
					printf("��ʰ"); 
					break;
				case 3:
					printf("��ʰ");
					break;
				case 4:
					printf("��ʰ"); 
					break;
				case 5:
					printf("��ʰ");
					break;
				case 6:
					printf("½ʰ");
					break;
				case 7:
					printf("��ʰ");
					break;
				case 8:
					printf("��ʰ");
					break;
				case 9:
					printf("��ʰ");
					break;
			}
		}
		else {
			if (!((int)(a - (int)(a / 1000000000) * 1e9) % 10)) {
				switch ((int)(a / 10) % 10) {

					case 1:
						printf("Ҽʰ");
						break;
					case 2:
						printf("��ʰ"); 
						break;
					case 3:
						printf("��ʰ");
						break;
					case 4:
						printf("��ʰ"); 
						break;
					case 5:
						printf("��ʰ");
						break;
					case 6:
						printf("½ʰ");
						break;
					case 7:
						printf("��ʰ");
						break;
					case 8:
						printf("��ʰ");
						break;
					case 9:
						printf("��ʰ");
						break;
					case 0:
						printf("��");
						break;
				}
			}
			else {
				switch ((int)(a / 10) % 10) {

					case 1:
						printf("Ҽʰ");
						break;
					case 2:
						printf("��ʰ"); 
						break;
					case 3:
						printf("��ʰ");
						break;
					case 4:
						printf("��ʰ"); 
						break;
					case 5:
						printf("��ʰ");
						break;
					case 6:
						printf("½ʰ");
						break;
					case 7:
						printf("��ʰ");
						break;
					case 8:
						printf("��ʰ");
						break;
					case 9:
						printf("��ʰ");
						break;
				}
			}

		}
	}
	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0 && (int)(a / 10) % 10 == 0 && (int)(a - (int)(a / 1000000000) * 1e9) % 10 == 0)) {
		switch ((int)(a - (int)(a / 1000000000) * 1e9) % 10) {
			case 1:
				printf("ҼԲ");
				break;
			case 2:
				printf("��Բ");
				break;
			case 3:
				printf("��Բ");
				break;
			case 4:
				printf("��Բ");
				break;
			case 5:
				printf("��Բ");
				break;
			case 6:
				printf("½Բ");
				break;
			case 7:
				printf("��Բ");
				break;
			case 8:
				printf("��Բ");
				break;
			case 9:
				printf("��Բ");
				break;
			case 0:
				printf("Բ");
		}
	}

	if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0 && (int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
		printf("��");
	}
	else {
		if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0 && (int)(a / 10) % 10 == 0 && (int)(a - (int)(a / 1000000000) * 1e9) % 10 == 0)) {
			if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ƽ�");
						break;
					case 9:
						printf("����");
						break;
					case 0:
						printf("��");
				}
				printf("��");
			}
			else if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				printf("��");
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�Ʒ�");
						break;
					case 9:
						printf("����");
						break;

				}

			}
			else {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ƽ�");
						break;
					case 9:
						printf("����");
						break;

				}
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�Ʒ�");
						break;
					case 9:
						printf("����");
						break;

				}
			}
		}

		else {
			if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ƽ�");
						break;
					case 9:
						printf("����");
						break;

				}
				printf("��");
			}
			else if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�Ʒ�");
						break;
					case 9:
						printf("����");
						break;

				}

			}
			else {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�ƽ�");
						break;
					case 9:
						printf("����");
						break;

				}
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ҽ��");
						break;
					case 2:
						printf("����");
						break;
					case 3:
						printf("����");
						break;
					case 4:
						printf("����");
						break;
					case 5:
						printf("���");
						break;
					case 6:
						printf("½��");
						break;
					case 7:
						printf("���");
						break;
					case 8:
						printf("�Ʒ�");
						break;
					case 9:
						printf("����");
						break;

				}

			}

		}
	}

	return 0;


}