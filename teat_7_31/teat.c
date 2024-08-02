#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//int a = 1;
//	//if (a=3)
//	//	printf("hehe\n");
//	/*int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能饮酒\n");
//	}
//	else
//		printf("成年\n");*/
//
//	int age = 10;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 80)
//		printf("老年\n");
//	else
//		printf("寿星\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 5;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		printf("成年\n");
//		printf("打游戏\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("haha\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}


//1.变量的命名（有意义）
//空格，空行，换行


//int main()
//{
//	int num = 5;
//	if(5==num)//if(num == 5 )防止丢等号
//		printf("hh\n")
//
//	return 0
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("huhu\n");
//	else
//		printf("hnhn\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	while (a > 0 && a < 100)
//	{
//		if (a % 2 == 1)
//		
//			printf("%d\n", a);
//			a++;
//		
//
//	}
//	return 0;
//}


//switch语句(必须包含整形)

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//			printf("星期1\n");
//			break;
//		case 2:
//			printf("星期2\n");
//			break;
//		case 3:
//			printf("星期3\n");
//			break;
//		case 4:
//			printf("星期4\n");
//			break;
//		case 5:
//			printf("星期5\n");
//			break;
//		case 6:
//			printf("星期6\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//
//
//
//
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weecend\n");
//		break;
//	default://所有case不能匹配就到这里
//		printf("选择错误\n");
//		break;
//
//	}
//
//
//	return 0;
//}


//
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//			break;
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//while循环中的break是用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断


//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//			continue;
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}



//int main()
//{
//	//int ch = 0;c
//	//while(getchar())
//	//int ch = getchar();
//	//printf("%c\n",ch);//1
//	//putchar(ch);//2
//
//
//	/*int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	//getchar();//读取了\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）:>");
//	int ret = getchar();
//	if ('Y' == ret && 'y'== ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	//只打印数字
//
//	return 0;
//}

