// 5.结构CandyBar包含3个成员。第一个成员存储了糖块的品牌：第二个成员存储糖块的重量（可以
// 有小数)：第三个成员存储了糖块的卡路里含量（整数）。请编写一个程序，声明这个结构，创建一个名为
// snack的CandyBar变量，并将其成员分别初始化为“Mocha Munch”、2.3和350。初始化应在声明snack
// 时进行。最后，程序显示snack变量的内容。

#include <string>
#include <iostream>

using namespace std;

int main ()
{
	struct CandyBar
	{
		string brand;
		double weight;
		int calorie;
	};
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << snack.brand;
	// # 暂停一下
	int aa;
	cin >> aa;
	return 0;
}