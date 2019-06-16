#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>
#define SIZE 10
typedef struct student
{
	int id;
	char name[20];
	float math, Chinese, computer, English, total, ave;
}STU;
STU stu[SIZE];
struct student_type
{
	char name[30];
	int id;
	float grade;
}stud[SIZE];
struct Student
{
	char name[30];
	char gender[10];
	int id;
	int age;
	int height;
	int grade;
	int total;
	float ave;
}Stu[SIZE];
struct sTudent
{
	char name[30];
	int id;
	float grade;
}sTu[SIZE];
struct StUdent
{
	char name[30];
	int id;
	float grade;
}StU[SIZE];
struct stuDent
{
	char name[30];
	int id;
	int math;
	int English;
	int Chinese;
};

/*
*函数功能：选择需要的函数调用
*入口参数：int n
*返回值：无
*/
int testFun(int n)
{
	switch (n)
	{
	case 1:testFun1(); break;
	case 2:testFun2(); break;
	case 3:testFun3(); break;
	case 4:testFun4();break;
	case 5:fun5(); break;
	case 6:fun6(); break;
	case 7:testFun7(); break;
	case 8:testFun8(); break;
	case 9:testFun9(); break;
	}
	printf("\n");
	printf("继续吗？\n");
}

/*
*函数功能：显示菜单界面
*入口参数：无
*返回值：无
*/
void fun10()
{
	printf("|-----------------------------------------|\n");
	printf("|             请选择需要的函数              |\n");
	printf("|-----------------------------------------|\n");
	printf("|    1.testFun1                           |\n");
	printf("|    2.testFun2                           |\n");
	printf("|    3.testFun3                           |\n");
	printf("|    4.testFun4                           |\n");
	printf("|    5.testFun5                           |\n");
	printf("|    6.testFun6                           |\n");
	printf("|    7.testFun7                           |\n");
	printf("|    8.testFun8                           |\n");
	printf("|    9.testFun9                           |\n");
	printf("|-----------------------------------------|\n");
	printf("请输入所需要调用函数的序号:\n");
}

/*
*函数功能：计算分段函数的值
*入口参数：double
*/
int fun1(int x)
{
	if (x > 0)
		return 3 * x* x - 4;
	if (x == 0)
		return 2;
	else
		return 0;
}
void testFun1()
{
	int x;
	printf("请输入数值：");
	scanf_s("%d", &x);
	printf("%.2f\n", fun1(x));
}

/*
*函数功能：求一组数据的最大值、最小值和平均值
*入口参数：int* , int* , int* , float* , int
*返回值：无
*/
void fun2(int* data, int* max, int* min, float* ave, int n)
{
	int i;
	int sum = *data;
	*max = *data;
	*min = *data;
	for (i = 1; i < n; i++)
	{
		if (*(data + i) > * max)
			* max = *(data + i);
		if (*(data + i) < *min)
			* min = *(data + i);
		sum += *(data + i);
	}
	*ave = 1.0 * sum / n;
}
void testFun2()
{
	int i, max, min, n;
	float kave;
	int* data;
	printf("请输入数据个数：\n");
	scanf_s("%d", &n);
	data = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("please input numbers:\n");
		scanf_s("%d", &data[i]);
	}
	fun2(data, &max, &min, &kave, n);
	printf("max:%d\nmin:%d\nave:%.1f\n", max, min, kave);
}

/*
*函数功能：比较两个字符串大小
*入口参数：const char* str1, const char* str2
*/
int fun3(const char* str1, const char* str2)
{
	for (; *str1 != 0 || *str2 != 0; str1++, str2++)
	{
		if (*str1 > * str2)
			return 1;
		if (*str1 == *str2)
			return 0;
		else
			return -1;
	}
}
void testFun3()
{
	char str1[100], str2[100];
	printf("please enter str1:");
	scanf_s("%s", str1, 100);
	printf("please enter str2:");
	scanf_s("%s", str2, 100);
	printf("result:%d\n", fun3(str1, str2));
}

/*
*函数功能：求一组学生每个学生各门课程的平均值
*入口参数：STU stu[], int
*/
float fun4(STU stu[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		stu[i].total = stu[i].math + stu[i].Chinese + stu[i].computer + stu[i].English;
		stu[i].ave = stu[i].total / 4;
	}
	return stu[i].ave;
}
void testFun4()
{
	int i, n;
	printf("请输入学生数：\n");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("请输入学生姓名、学号及四门科目成绩：\n");
		scanf_s("%s %d %f %f %f %f", &stu[i].name, 30, &stu[i].id, &stu[i].math, &stu[i].Chinese, &stu[i].computer, &stu[i].English);
	}
	fun4(stu, n);
	for (i = 0; i < n; i++)
	{
		printf("姓名：%s\n", stu[i].name);
		printf("学号：%d\n", stu[i].id);
		printf("平均分：%g\n", stu[i].ave);
	}
}

/*
*函数功能：从文件读入一组学生的信息，保存到一个结构数组中
*/
void fun5()
{
	int i;
	FILE* fp;
	fp = fopen("D:\\student\\grade.txt", "r");
	if (fp == NULL)
	{
		printf("can't open file\n");
		exit(0);
	}
	for (i = 0; i < SIZE; i++)
	{
		fscanf_s(fp, "%s", &stud[i].name, 30);
		fscanf_s(fp, "%d", &stud[i].id);
		fscanf_s(fp, "%f", &stud[i].grade);
		printf("%-5s %4d %10.2f\n", stud[i].name, stud[i].id, stud[i].grade);
	}
	fclose(fp);
}

/*
*函数功能：输出某一学生结构数组的信息和每个人的总分、平均分到某一文本文件中
*/
void fun6()
{
	int i;
	FILE* fp;
	fp = fopen("D:\\student\\input2.txt", "w");
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%s", &Stu[i].name, 30);
		scanf_s("%s", &Stu[i].gender, 10);
		scanf_s("%d", &Stu[i].id);
		scanf_s("%d", &Stu[i].age);
		scanf_s("%d", &Stu[i].height);
		scanf_s("%d", &Stu[i].grade);
		scanf_s("%d", &Stu[i].total);
		scanf_s("%f", &Stu[i].ave);
		fprintf(fp, "%s %s %d %d %d %d %d %5.2f\n", Stu[i].name, Stu[i].gender, Stu[i].id, Stu[i].age, Stu[i].height, Stu[i].grade, Stu[i].total, Stu[i].ave);
	}
}

/*
*函数功能：打印输出学生结构数组的信息到屏幕上
*入口参数：struct sTudent sTu[], int size
*返回值：无
*/
void fun7(struct sTudent sTu[], int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		printf("name:%s\n", sTu[j].name);
		printf("id:%d\n", sTu[j].id);
		printf("grade:%5.2f\n", sTu[j].grade);
	}
}
void testFun7()
{
	int m;
	for (m = 0; m < SIZE; m++)
	{
		printf("请输入学生姓名、学号、成绩:\n");
		scanf_s("%s %d %f", &sTu[m].name, 30, &sTu[m].id, &sTu[m].grade);
	}
	fun7(sTu, SIZE);
}

/*
*函数功能：把一组学生成绩信息按总分进行排序
*入口参数：struct StUdent StU[], int size
*返回值：无
*/
void fun8(struct StUdent StU[], int size)
{
	int i, j, max;
	struct StUdent t;
	for (i = 0; i < SIZE - 1; i++)
	{
		max = i;
		for (j = i + 1; j < SIZE; j++)
		{
			if (StU[j].grade > StU[max].grade)
				max = j;
		}
		if (max != i)
		{
			t = StU[max];
			StU[max] = StU[i];
			StU[i] = t;
		}
	}
}
void testFun8()
{
	int m;
	for (m = 0; m < SIZE; m++)
	{
		printf("请输入学生姓名、学号、成绩:\n");
		scanf_s("%s %d %f", &StU[m].name, 30, &StU[m].id, &StU[m].grade);
	}
	printf("结果为：\n");
	fun8(StU, SIZE);
	for (m = 0; m < SIZE; m++)
		printf("%10s%6d%8.1f\n", StU[m].name, StU[m].id, StU[m].grade);
}

/*
*函数功能：查找给定学号的学生成绩信息
*入口参数：struct stuDent stu[]
*返回值：无
*/
void fun9(struct stuDent stu[])
{
	int i, j, flag = 0;
	printf("输入要查找的学生id:");
	scanf_s("%d", &j);
	printf("查找结果为:\n");
	for (i = 0; i < 6; i++)
	{
		if (j == stu[i].id)
		{
			printf("姓名:%s 学号:%d 数学:%d 英语:%d 语文:%d", stu[i].name, stu[i].id, stu[i].math, stu[i].English, stu[i].Chinese);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("not found!\n");
}
void testFun9()
{
	struct stuDent stuD[5] = { {"zhangsan",11111,99,99,99},{"lisi",22222,88,88,88},{"wangwu",33333,77,77,77},{"cuici",44444,66,66,66},{"asan",55555,55,55,55} };
	printf("请输入学号：\n");
	fun9(stuD);
}
