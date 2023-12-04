/* 杨宇琨 信01 2252843 */
#include <iostream>
using namespace std;

/* 可根据需要添加相应的内容 */

/***************************************************************************
  函数名称：
  功    能：输出大写的0~9
  输入参数：
  返 回 值：
  说    明：除本函数外，不允许任何函数中输出“零”-“玖”!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */
	switch (num) {
		case 0:
			if (flag_of_zero)	//此标记什么意思请自行思考
				cout << "零";
			break;
		case 1:
			cout << "壹";
			break;
		case 2:
			cout << "贰";
			break;
		case 3:
			cout << "叁";
			break;
		case 4:
			cout << "肆";
			break;
		case 5:
			cout << "伍";
			break;
		case 6:
			cout << "陆";
			break;
		case 7:
			cout << "柒";
			break;
		case 8:
			cout << "捌";
			break;
		case 9:
			cout << "玖";
			break;
		default:
			cout << "error";
			break;
	}
}


/* 可根据需要自定义其它函数(也可以不定义) */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	cout << "请输入[0-100亿)之间的数字:" << endl;
	double a;
	cin >> a;
	int shiyi = int(a / 1000000000), yi = int(a / 100000000) % 10, qianwan = int(a / 10000000) % 10, baiwan = int(a / 1000000) % 10, shiwan = int(a / 100000) % 10, wan = int(a / 10000) % 10, qian = int(a / 1000) % 10, bai = int(a / 100) % 10, shi = int(a / 10) % 10, yuan = int(a - int(a / 1e9) * 1e9) % 10, fen = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10, jiao = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10;
	cout << "大写结果是:" << endl;
	if (shiyi != 0) {
		daxie(shiyi, yi); cout << "拾";
	}
	if (yi != 0) {
		daxie(yi, qianwan);
	}
	if (shiyi != 0 || yi != 0) {
		cout << "亿";
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0) {
		daxie(qianwan, baiwan);
		if (qianwan != 0) {
			cout << "仟";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0) {
		daxie(baiwan, shiwan);
		if (baiwan != 0) {
			cout << "佰";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0) {
		daxie(shiwan, wan);
		if (shiwan != 0) {
			cout << "拾";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
		if (wan != 0) {
			daxie(wan, qian);
		}
		if (qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
			cout << "万";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0) {
		daxie(qian, bai);
		if (qian != 0) {
			cout << "仟";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0) {
		daxie(bai, shi);
		if (bai != 0) {
			cout << "佰";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0) {
		daxie(shi, yuan);
		if (shi != 0) {
			cout << "拾";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || yuan != 0) {
		if (yuan != 0) {
			daxie(yuan, jiao);
		}
		cout << "圆";
		if (jiao == 0 && fen == 0) {
			cout << "整";
		}


	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0 && jiao == 0 && fen == 0) {
		daxie(yuan, 1);
		cout << "圆整";
	}
	if (jiao != 0 && fen == 0) {
		daxie(jiao, fen); cout << "角整";
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0) {
			daxie(fen, 1); cout << "分";
		}
		else {
			daxie(jiao, fen); daxie(fen, 1); cout << "分";
		}
	}
	if (jiao != 0 && fen != 0) {
		daxie(jiao, fen); cout << "角"; daxie(fen, 1); cout << "分";
	}
	cout << endl;
	return 0;




	/* 按需完成 */
	return 0;
}