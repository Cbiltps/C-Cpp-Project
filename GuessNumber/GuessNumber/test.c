#define _CRT_SECURE_NO_DEPRECATE 1

//
//猜数字游戏
//1：电脑随机生成一个1—100之间的数字
//2：玩家猜数字
//   如果猜对了，就提示：猜对了
//   如果猜错了，就提示：猜大了，或者猜小了，知道猜正确
//3：反复玩
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Menu()
{
	printf("**************************************\n");
	printf("*************  1.play  ***************\n");
	printf("*************  0.exit  ***************\n");
	printf("**************************************\n");
}

void game()
{
	//1.生成随机数
	int ret = rand() % 100 + 1;
	/*printf("%d\n", ret);    这里可以看生成的随机数    */

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;

	//设置随机数的生成起点——注意不要频繁调用
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}

//下面讲解一下C语言实现猜数字游戏的难点:
//1：随机数的生成——我是传进去了一个时间戳
//2：有几个陌生的函数——在CSDN查找