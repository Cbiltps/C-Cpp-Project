#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//
//int main()
//{
//	char input[20] = { 0 };
//	//倒计时关机
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		//判断用户输入的是不是：我是猪
//		if (0 == strcmp(input, "我是猪"))//2个字符串比较不能使用==，要使用strcmp  string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



int main()
{
	char input[20] = { 0 };
	//倒计时关机
	system("shutdown -s -t 60");

again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	//判断用户输入的是不是：我是猪
	if (0 == strcmp(input, "我是猪"))//2个字符串比较不能使用==，要使用strcmp  string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
