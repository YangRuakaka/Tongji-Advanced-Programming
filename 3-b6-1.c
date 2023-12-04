/* ÑîÓîçû ÐÅ01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("ÇëÊäÈë[0,100ÒÚ)Ö®¼äµÄÊý×Ö:\n"); 
	double a;
	scanf("%lf", &a);
	printf("´óÐ´½á¹ûÊÇ:");
	if (a == 0) {
		printf("ÁãÔ²"); 
	}
	if (!((int)a / 1000000000 == 0)) {
		switch ((int)(a / 1000000000)) {
			case 1:
				printf("Ò¼Ê°"); 
				break;
			case 2:
				printf("·¡Ê°");  
				break;
			case 3:
				printf("ÈþÊ°"); 
				break;
			case 4:
				printf("ËÁÊ°"); 
				break;
			case 5:
				printf("ÎéÊ°"); 
				break;
			case 6:
				printf("Â½Ê°"); 
				break;
			case 7:
				printf("ÆâÊ°");
				break;
			case 8:
				printf("°ÆÊ°");
				break;
			case 9:
				printf("¾ÁÊ°");
				break;
		}
	}


	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) % 10 == 0)) {
		switch ((int)(a / 100000000) % 10) {
			case 1:
				printf("Ò¼ÒÚ");
				break;
			case 2:
				printf("·¡ÒÚ");
				break;
			case 3:
				printf("ÈþÒÚ");
				break;
			case 4:
				printf("ËÁÒÚ");
				break;
			case 5:
				printf("ÎéÒÚ");
				break;
			case 6:
				printf("Â½ÒÚ");
				break;
			case 7:
				printf("ÆâÒÚ");
				break;
			case 8:
				printf("°ÆÒÚ");
				break;
			case 9:
				printf("¾ÁÒÚ");
				break;
			case 0:
				printf("ÒÚ");
				break;
		}

	}






	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0)) {
		if (!((int)(a / 1000000) % 10 == 0 && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0)) {
			switch ((int)(a / 10000000) % 10) {
				case 1:
					printf("Ò¼Ç§");
					break;
				case 2:
					printf("·¡Ç§");
					break;
				case 3:
					printf("ÈþÇ§");
					break;
				case 4:
					printf("ËÁÇ§");
					break;
				case 5:
					printf("ÎéÇ§");
					break;
				case 6:
					printf("Â½Ç§");
					break;
				case 7:
					printf("ÆâÇ§");
					break;
				case 8:
					printf("°ÆÇ§");
					break;
				case 9:
					printf("¾ÁÇ§");
					break;
				case 0:
					printf("Áã");
					break;
			}
		}
		else {
			switch ((int)(a / 10000000) % 10) {
				case 1:
					printf("Ò¼Ç§");
					break;
				case 2:
					printf("·¡Ç§");
					break;
				case 3:
					printf("ÈþÇ§");
					break;
				case 4:
					printf("ËÁÇ§");
					break;
				case 5:
					printf("ÎéÇ§");
					break;
				case 6:
					printf("Â½Ç§");
					break;
				case 7:
					printf("ÆâÇ§");
					break;
				case 8:
					printf("°ÆÇ§");
					break;
				case 9:
					printf("¾ÁÇ§");
					break;
			}

		}

	}
	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0)) {
		if ((int)(a / 10000000) % 10 == 0) {
			switch ((int)(a / 1000000) % 10) {
				case 1:
					printf("Ò¼°Û");
					break;
				case 2:
					printf("·¡°Û");
					break;
				case 3:
					printf("Èþ°Û");
					break;
				case 4:
					printf("ËÁ°Û");
					break;
				case 5:
					printf("Îé°Û");
					break;
				case 6:
					printf("Â½°Û");
					break;
				case 7:
					printf("Æâ°Û");
					break;
				case 8:
					printf("°Æ°Û");
					break;
				case 9:
					printf("¾Á°Û");
					break;
			}
		}
		else {
			if (!((int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0)) {
				switch ((int)(a / 1000000) % 10) {
					case 1:
						printf("Ò¼°Û");
						break;
					case 2:
						printf("·¡°Û");
						break;
					case 3:
						printf("Èþ°Û");
						break;
					case 4:
						printf("ËÁ°Û");
						break;
					case 5:
						printf("Îé°Û");
						break;
					case 6:
						printf("Â½°Û");
						break;
					case 7:
						printf("Æâ°Û");
						break;
					case 8:
						printf("°Æ°Û");
						break;
					case 9:
						printf("¾Á°Û");
						break;
					case 0:
						printf("Áã");
						break;
				}
			}
			else {
				switch ((int)(a / 1000000) % 10) {
					case 1:
						printf("Ò¼°Û");
						break;
					case 2:
						printf("·¡°Û");
						break;
					case 3:
						printf("Èþ°Û");
						break;
					case 4:
						printf("ËÁ°Û");
						break;
					case 5:
						printf("Îé°Û");
						break;
					case 6:
						printf("Â½°Û");
						break;
					case 7:
						printf("Æâ°Û");
						break;
					case 8:
						printf("°Æ°Û");
						break;
					case 9:
						printf("¾Á°Û");
						break;
				}

			}

		}
	}

	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0 && (int)(a / 100000) % 10 == 0)) {
		if ((int)(a / 1000000) % 10 == 0) {

			switch ((int)(a / 100000) % 10) {
				case 1:
					printf("Ò¼Ê°");
					break;
				case 2:
					printf("·¡Ê°"); 
					break;
				case 3:
					printf("ÈþÊ°");
					break;
				case 4:
					printf("ËÁÊ°"); 
					break;
				case 5:
					printf("ÎéÊ°");
					break;
				case 6:
					printf("Â½Ê°");
					break;
				case 7:
					printf("ÆâÊ°");
					break;
				case 8:
					printf("°ÆÊ°");
					break;
				case 9:
					printf("¾ÁÊ°");
					break;
			}



		}
		else {
			if (!((int)(a / 10000) % 10 == 0)) {
				switch ((int)(a / 100000) % 10) {
					case 1:
						printf("Ò¼Ê°");
						break;
					case 2:
						printf("·¡Ê°"); 
						break;
					case 3:
						printf("ÈþÊ°");
						break;
					case 4:
						printf("ËÁÊ°"); 
						break;
					case 5:
						printf("ÎéÊ°");
						break;
					case 6:
						printf("Â½Ê°");
						break;
					case 7:
						printf("ÆâÊ°");
						break;
					case 8:
						printf("°ÆÊ°");
						break;
					case 9:
						printf("¾ÁÊ°");
						break;
					case 0:
						printf("Áã");
						break;
				}
			}
			else {
				switch ((int)(a / 100000) % 10) {
					case 1:
						printf("Ò¼Ê°");
						break;
					case 2:
						printf("·¡Ê°"); 
						break;
					case 3:
						printf("ÈþÊ°");
						break;
					case 4:
						printf("ËÁÊ°"); 
						break;
					case 5:
						printf("ÎéÊ°");
						break;
					case 6:
						printf("Â½Ê°");
						break;
					case 7:
						printf("ÆâÊ°");
						break;
					case 8:
						printf("°ÆÊ°");
						break;
					case 9:
						printf("¾ÁÊ°");
						break;
				}

			}

		}
	}

	if (!((int)(a / 1000000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 100000) % 10 == 0)) {
		switch ((int)(a / 10000) % 10) {
			case 1:
				printf("Ò¼Íò");
				break;
			case 2:
				printf("·¡Íò");
				break;
			case 3:
				printf("ÈþÍò");
				break;
			case 4:
				printf("ËÁÍò");
				break;
			case 5:
				printf("ÎéÍò");
				break;
			case 6:
				printf("Â½Íò");
				break;
			case 7:
		    	printf("ÆâÍò");
				break;
			case 8:
				printf("°ÆÍò");
				break;
			case 9:
				printf("¾ÁÍò");
				break;
			case 0:
				printf("Íò");
				break;
		}


	}

	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0)) {
		switch ((int)(a / 1000) % 10) {
			case 1:
				printf("Ò¼Ç§");
				break;
			case 2:
				printf("·¡Ç§");
				break;
			case 3:
				printf("ÈþÇ§");
				break;
			case 4:
				printf("ËÁÇ§");
				break;
			case 5:
				printf("ÎéÇ§");
				break;
			case 6:
				printf("Â½Ç§");
				break;
			case 7:
				printf("ÆâÇ§");
				break;
			case 8:
				printf("°ÆÇ§");
				break;
			case 9:
				printf("¾ÁÇ§");
				break;
			case 0:
				printf("Áã");
				break;
		}
	}
	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0)) {
		if ((int)(a / 1000) % 10 == 0) {
			switch ((int)(a / 100) % 10) {
				case 1:
					printf("Ò¼°Û");
					break;
				case 2:
					printf("·¡°Û");
					break;
				case 3:
					printf("Èþ°Û");
					break;
				case 4:
					printf("ËÁ°Û");
					break;
				case 5:
					printf("Îé°Û");
					break;
				case 6:
					printf("Â½°Û");
					break;
				case 7:
					printf("Æâ°Û");
					break;
				case 8:
					printf("°Æ°Û");
					break;
				case 9:
					printf("¾Á°Û");
					break;
			}
		}
		else {
			if (!((int)(a / 100) % 10 && (int)(a - (int)(a / 1000000000) * 1e9) % 10)) {
				switch ((int)(a / 100) % 10) {
					case 1:
						printf("Ò¼°Û");
						break;
					case 2:
						printf("·¡°Û");
						break;
					case 3:
						printf("Èþ°Û");
						break;
					case 4:
						printf("ËÁ°Û");
						break;
					case 5:
						printf("Îé°Û");
						break;
					case 6:
						printf("Â½°Û");
						break;
					case 7:
						printf("Æâ°Û");
						break;
					case 8:
						printf("°Æ°Û");
						break;
					case 9:
						printf("¾Á°Û");
						break;
					case 0:
						printf("Áã");
						break;
				}
			}
			else {
				switch ((int)(a / 100) % 10) {
					case 1:
						printf("Ò¼°Û");
						break;
					case 2:
						printf("·¡°Û");
						break;
					case 3:
						printf("Èþ°Û");
						break;
					case 4:
						printf("ËÁ°Û");
						break;
					case 5:
						printf("Îé°Û");
						break;
					case 6:
						printf("Â½°Û");
						break;
					case 7:
						printf("Æâ°Û");
						break;
					case 8:
						printf("°Æ°Û");
						break;
					case 9:
						printf("¾Á°Û");
						break;
				}
			}

		}
	}
	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0 && (int)(a / 10) % 10 == 0)) {
		if ((int)(a / 100) % 10 == 0) {
			switch ((int)(a / 10) % 10) {
				case 1:
					printf("Ò¼Ê°");
					break;
				case 2:
					printf("·¡Ê°"); 
					break;
				case 3:
					printf("ÈþÊ°");
					break;
				case 4:
					printf("ËÁÊ°"); 
					break;
				case 5:
					printf("ÎéÊ°");
					break;
				case 6:
					printf("Â½Ê°");
					break;
				case 7:
					printf("ÆâÊ°");
					break;
				case 8:
					printf("°ÆÊ°");
					break;
				case 9:
					printf("¾ÁÊ°");
					break;
			}
		}
		else {
			if (!((int)(a - (int)(a / 1000000000) * 1e9) % 10)) {
				switch ((int)(a / 10) % 10) {

					case 1:
						printf("Ò¼Ê°");
						break;
					case 2:
						printf("·¡Ê°"); 
						break;
					case 3:
						printf("ÈþÊ°");
						break;
					case 4:
						printf("ËÁÊ°"); 
						break;
					case 5:
						printf("ÎéÊ°");
						break;
					case 6:
						printf("Â½Ê°");
						break;
					case 7:
						printf("ÆâÊ°");
						break;
					case 8:
						printf("°ÆÊ°");
						break;
					case 9:
						printf("¾ÁÊ°");
						break;
					case 0:
						printf("Áã");
						break;
				}
			}
			else {
				switch ((int)(a / 10) % 10) {

					case 1:
						printf("Ò¼Ê°");
						break;
					case 2:
						printf("·¡Ê°"); 
						break;
					case 3:
						printf("ÈþÊ°");
						break;
					case 4:
						printf("ËÁÊ°"); 
						break;
					case 5:
						printf("ÎéÊ°");
						break;
					case 6:
						printf("Â½Ê°");
						break;
					case 7:
						printf("ÆâÊ°");
						break;
					case 8:
						printf("°ÆÊ°");
						break;
					case 9:
						printf("¾ÁÊ°");
						break;
				}
			}

		}
	}
	if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0 && (int)(a / 10) % 10 == 0 && (int)(a - (int)(a / 1000000000) * 1e9) % 10 == 0)) {
		switch ((int)(a - (int)(a / 1000000000) * 1e9) % 10) {
			case 1:
				printf("Ò¼Ô²");
				break;
			case 2:
				printf("·¡Ô²");
				break;
			case 3:
				printf("ÈþÔ²");
				break;
			case 4:
				printf("ËÁÔ²");
				break;
			case 5:
				printf("ÎéÔ²");
				break;
			case 6:
				printf("Â½Ô²");
				break;
			case 7:
				printf("ÆâÔ²");
				break;
			case 8:
				printf("°ÆÔ²");
				break;
			case 9:
				printf("¾ÁÔ²");
				break;
			case 0:
				printf("Ô²");
		}
	}

	if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0 && (int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
		printf("Õû");
	}
	else {
		if (!(((int)(a / 100000000) % 10 == 0 && (int)(a / 100000000) == 0 && (int)(a / 10000000) % 10 == 0 && (int)(a / 1000000) % 10 == 0) && (int)(a / 100000) % 10 == 0 && (int)(a / 10000) % 10 == 0 && (int)(a / 1000) % 10 == 0 && (int)(a / 100) % 10 == 0 && (int)(a / 10) % 10 == 0 && (int)(a - (int)(a / 1000000000) * 1e9) % 10 == 0)) {
			if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ò¼½Ç");
						break;
					case 2:
						printf("·¡½Ç");
						break;
					case 3:
						printf("Èþ½Ç");
						break;
					case 4:
						printf("ËÁ½Ç");
						break;
					case 5:
						printf("Îé½Ç");
						break;
					case 6:
						printf("Â½½Ç");
						break;
					case 7:
						printf("Æâ½Ç");
						break;
					case 8:
						printf("°Æ½Ç");
						break;
					case 9:
						printf("¾Á½Ç");
						break;
					case 0:
						printf("Áã");
				}
				printf("Õû");
			}
			else if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				printf("Áã");
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ò¼·Ö");
						break;
					case 2:
						printf("·¡·Ö");
						break;
					case 3:
						printf("Èþ·Ö");
						break;
					case 4:
						printf("ËÁ·Ö");
						break;
					case 5:
						printf("Îé·Ö");
						break;
					case 6:
						printf("Â½·Ö");
						break;
					case 7:
						printf("Æâ·Ö");
						break;
					case 8:
						printf("°Æ·Ö");
						break;
					case 9:
						printf("¾Á·Ö");
						break;

				}

			}
			else {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ò¼½Ç");
						break;
					case 2:
						printf("·¡½Ç");
						break;
					case 3:
						printf("Èþ½Ç");
						break;
					case 4:
						printf("ËÁ½Ç");
						break;
					case 5:
						printf("Îé½Ç");
						break;
					case 6:
						printf("Â½½Ç");
						break;
					case 7:
						printf("Æâ½Ç");
						break;
					case 8:
						printf("°Æ½Ç");
						break;
					case 9:
						printf("¾Á½Ç");
						break;

				}
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ò¼·Ö");
						break;
					case 2:
						printf("·¡·Ö");
						break;
					case 3:
						printf("Èþ·Ö");
						break;
					case 4:
						printf("ËÁ·Ö");
						break;
					case 5:
						printf("Îé·Ö");
						break;
					case 6:
						printf("Â½·Ö");
						break;
					case 7:
						printf("Æâ·Ö");
						break;
					case 8:
						printf("°Æ·Ö");
						break;
					case 9:
						printf("¾Á·Ö");
						break;

				}
			}
		}

		else {
			if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ò¼½Ç");
						break;
					case 2:
						printf("·¡½Ç");
						break;
					case 3:
						printf("Èþ½Ç");
						break;
					case 4:
						printf("ËÁ½Ç");
						break;
					case 5:
						printf("Îé½Ç");
						break;
					case 6:
						printf("Â½½Ç");
						break;
					case 7:
						printf("Æâ½Ç");
						break;
					case 8:
						printf("°Æ½Ç");
						break;
					case 9:
						printf("¾Á½Ç");
						break;

				}
				printf("Õû");
			}
			else if ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ò¼·Ö");
						break;
					case 2:
						printf("·¡·Ö");
						break;
					case 3:
						printf("Èþ·Ö");
						break;
					case 4:
						printf("ËÁ·Ö");
						break;
					case 5:
						printf("Îé·Ö");
						break;
					case 6:
						printf("Â½·Ö");
						break;
					case 7:
						printf("Æâ·Ö");
						break;
					case 8:
						printf("°Æ·Ö");
						break;
					case 9:
						printf("¾Á·Ö");
						break;

				}

			}
			else {
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						printf("Ò¼½Ç");
						break;
					case 2:
						printf("·¡½Ç");
						break;
					case 3:
						printf("Èþ½Ç");
						break;
					case 4:
						printf("ËÁ½Ç");
						break;
					case 5:
						printf("Îé½Ç");
						break;
					case 6:
						printf("Â½½Ç");
						break;
					case 7:
						printf("Æâ½Ç");
						break;
					case 8:
						printf("°Æ½Ç");
						break;
					case 9:
						printf("¾Á½Ç");
						break;

				}
				switch ((int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						printf("Ò¼·Ö");
						break;
					case 2:
						printf("·¡·Ö");
						break;
					case 3:
						printf("Èþ·Ö");
						break;
					case 4:
						printf("ËÁ·Ö");
						break;
					case 5:
						printf("Îé·Ö");
						break;
					case 6:
						printf("Â½·Ö");
						break;
					case 7:
						printf("Æâ·Ö");
						break;
					case 8:
						printf("°Æ·Ö");
						break;
					case 9:
						printf("¾Á·Ö");
						break;

				}

			}

		}
	}

	return 0;


}