#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//关机程序
//int main()//goto语句
//{
//	//shutdown-s-t 60----意思是电脑将在60s后关机shutdown-a是取消关机
//		//system()-执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown - s - t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>: ");
//		scanf("%s", input);//要想在电脑中输入字符串，比如输入汉字，那么就要创建一个字符串变量，具体操作怎么做如这个代码，否则不能输入字符串
//		if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
//		{
//			system("shutdown - a");
//			break;
//		}
//	}
//		return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()//goto语句
//{
////shutdown-s-t 60----意思是电脑将在60s后关机shutdown-a是取消关机
//	//system()-执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown - s - t 60");
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>: ");
//	scanf("%s", input);//要想在电脑中输入字符串，比如输入汉字，那么就要创建一个字符串变量，具体操作怎么做如这个代码，否则不能输入字符串
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
//	{
//		system("shutdown-a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//} 
//int main()//goto语句
//{
//again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************************\n");
//	printf("*****  1.play    0.exit   ******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret= rand() % 100 + 1;//生成随机数,RAND_MAX-32767,rand生成范围是0-32767，要想生成的是0-100，可以用rand()%100+1
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//			}//如果是满足if，好，按照if下的语句执行，执行完返回到while循环，不满足if的话则继续向下看是否满足else if
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	printf("%d\n",ret);
//}
//int main()//猜数字游戏
//          //1.电脑会生成一个随机数
//	      //2.猜数字
//{ 
//	int input = 0;
//	srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起始点,强制转换成unsigned int
//	// time_t time(time_t *timer)
//	// time_t,长整形
//	do
//	{
//		menu();
//		printf("请选择/>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);//当这里为0时，退出游戏，当这里非0时，会继续循环
//	return 0;
//}
//int main()//在屏幕上输出9*9乘法口诀表
//          //1*1=1
//	      //2*1=2 2*2=4
//	      //3*1=3 3*2=6 3*3=9
//	      //......
//	      //9*1=9......
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//这样打印出来的不好看，所以可以改成%d*%d=%-2d
//			//%2d表示打印这个数的时候打印两位，如果不够两位就用空格补齐，右对齐
//			//%-2d表示打印这个数的时候打印两位，如果不够两位就用空格补齐，左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()//求最大值，求10个整数中最大值
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//注意细节，从数组中第一个数开始，这里就别赋值0了
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)//从数组中第二个数开始和max比较就行了
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()//分数求和，计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100，打印出结果
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()//编写程序数一下1到100的所有整数中出现多少个数字9,这样是一共20个数，包含99中有两个9
//          //要注意和1到100中有多少个数带9不是一个概念，这样是一共19个数，99就算一次了
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//只要模，这样统计99的后一个9
//			count++;    //这样写两个if要和一个if一个else区别开，两个if是需要两个程序都进行的
//		                //一个if一个else是假如执行了if那么else就不执行了，两者只执行其中一个 
//		if (i / 10 == 9)//只要商，不管模，这样统计99的前一个9
//			count++;
//	}
//	printf("count=%d\n",count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()//再次优化打印素数，打印100~200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)//因为这里的偶数不可能是素数，所以把这里从101开始，变成i+=2,即i=i+2
//	{
//		//判断i是否为素数
//		//素数判断法则
//		//2.先把j的范围限制在i开平方以内，然后用i去除于j如果还是没有整除说明i是素数
//		for (j = 2; j <= sqrt(i); j++)//引用开平方的数学库函数
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}//第一类是中途跳出的数，第二类是没有满足的数，接下来的if就是把这第二类挑出来
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//#include<stdio.h>
//#include<math.h>
//int main()//优化打印素数，打印100~200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断法则
//	    //2.先把j的范围限制在i开平方以内，然后用i去除于j如果还是没有整除说明i是素数
//		for (j = 2; j <=sqrt(i); j++)//引用开平方的数学库函数
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}//第一类是中途跳出的数，第二类是没有满足的数，接下来的if就是把这第二类挑出来
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}