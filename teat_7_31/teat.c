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
//		printf("δ����\n");
//		printf("��������\n");
//	}
//	else
//		printf("����\n");*/
//
//	int age = 10;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 80)
//		printf("����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 5;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		printf("����\n");
//		printf("����Ϸ\n");
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


//1.�����������������壩
//�ո񣬿��У�����


//int main()
//{
//	int num = 5;
//	if(5==num)//if(num == 5 )��ֹ���Ⱥ�
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


//switch���(�����������)

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//			printf("����1\n");
//			break;
//		case 2:
//			printf("����2\n");
//			break;
//		case 3:
//			printf("����3\n");
//			break;
//		case 4:
//			printf("����4\n");
//			break;
//		case 5:
//			printf("����5\n");
//			break;
//		case 6:
//			printf("����6\n");
//			break;
//		case 7:
//			printf("������\n");
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
//	default://����case����ƥ��͵�����
//		printf("ѡ�����\n");
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

//whileѭ���е�break���������õ���ֹѭ��
//continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�


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
//	printf("����������:>");
//	scanf("%s", password);
//
//	//getchar();//��ȡ��\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����루Y/N��:>");
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
//	//ֻ��ӡ����
//
//	return 0;
//}

