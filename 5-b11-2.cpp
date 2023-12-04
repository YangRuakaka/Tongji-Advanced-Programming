/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//可按需增加需要的头文件
using namespace std;

const char chnstr[] = "零壹贰叁肆伍陆柒捌玖拾"; /* 所有输出大写 "零" ~ "玖" 的地方，只允许从这个数组中取值 */
string result ; /* 除result外，不再允许定义任何形式的全局变量 */

/* --允许添加需要的函数 --*/
void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */
	switch (num) {
		case 0:
			if (flag_of_zero)	//此标记什么意思请自行思考
				result = result + chnstr[0]+ chnstr[1];
			break;
		case 1:
			result = result + chnstr[2] + chnstr[3]; 
			break;
		case 2:
			result = result + chnstr[4] + chnstr[5]; 
			break;
		case 3:
			result = result + chnstr[6] + chnstr[7]; 
			break;
		case 4:
			result = result + chnstr[8] + chnstr[9]; 
			break;
		case 5:
			result = result + chnstr[10] + chnstr[11]; 
			break;
		case 6:
			result = result + chnstr[12] + chnstr[13]; 
			break;
		case 7:
			result = result + chnstr[14] + chnstr[15];
			break;
		case 8:
			result = result + chnstr[16] + chnstr[17]; 
			break;
		case 9:
			result = result + chnstr[18] + chnstr[19]; 
			break;
		default:

			break;
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{

	/* --允许添加需要的内容 --*/
	double a;
	while (1) {
		cout << "请输入[0-100亿)之间的数字:" << endl; 
		cin >> a;  //读入x的方式必须是scanf且格式符为%d，不准用非scanf


		if (cin.good()!=1) {

			cin.clear();
			cin.ignore(1234, '\n');

		}
		else if (cin.good() ==1&& (a >= 0 && a <= 9999999999)) {
			break;
		}
		else {
			continue;
		}


	}
	int shiyi = int(a / 1000000000), yi = int(a / 100000000) % 10, qianwan = int(a / 10000000) % 10, baiwan = int(a / 1000000) % 10, shiwan = int(a / 100000) % 10, wan = int(a / 10000) % 10, qian = int(a / 1000) % 10, bai = int(a / 100) % 10, shi = int(a / 10) % 10, yuan = int(a - int(a / 1e9) * 1e9) % 10, fen = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10, jiao = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10;

	cout << "大写结果是:" << endl;
	if (shiyi != 0) {
		daxie(shiyi, yi); result = result + "拾"; 
	}
	if (yi != 0) {
		daxie(yi, qianwan);
	}
	if (shiyi != 0 || yi != 0) {
		result = result + "亿";
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0) {
		daxie(qianwan, baiwan);
		if (qianwan != 0) {
			result = result + "仟";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0) {
		daxie(baiwan, shiwan);
		if (baiwan != 0) {
			result = result + "佰"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0) {
		daxie(shiwan, wan);
		if (shiwan != 0) {
			result = result + "拾"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
		if (wan != 0) {
			daxie(wan, qian);
		}
		if (qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
			result = result + "万"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0) {
		daxie(qian, bai);
		if (qian != 0) {
			result = result + "仟"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0) {
		daxie(bai, shi);
		if (bai != 0) {
			result = result + "佰"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0) {
		daxie(shi, yuan);
		if (shi != 0) {
			result = result + "拾"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || yuan != 0) {
		if (yuan != 0) {
			daxie(yuan, jiao);
		}
		result = result + "圆"; 
		if (jiao == 0 && fen == 0) {
			result = result + "整"; 
		}


	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0 && jiao == 0 && fen == 0) {
		daxie(yuan, 1);
		result = result + "圆整"; 
	}
	if (jiao != 0 && fen == 0) {
		daxie(jiao, fen); result = result + "角整"; 
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0) {
			daxie(fen, 1); result = result + "分";  
		}
		else {
			daxie(jiao, fen); daxie(fen, 1); result = result + "分"; 
		}
	}
	if (jiao != 0 && fen != 0) {
		daxie(jiao, fen); result = result + "角"; daxie(fen, 1); result = result + "分"; 
	}
	cout << result << endl;  /* 转换得到的大写结果，只允许用本语句输出，其它地方不允许以任何形式对大写结果进行全部/部分输出 */

	return 0;
}