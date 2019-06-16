#ifndef _TEST22_h
#define _TEST22_h
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
int testFun(int n);//调用函数
void fun10();//显示菜单界面
int fun1(int x);//计算分段函数的值
void testFun1();
void fun2(int* data, int* max, int* min, float* ave, int n);//求一组数据的最大值、最小值、平均值
void testFun2();
int fun3(const char* str1, const char* str2);//比较两个字符串大小
void testFun3();
float fun4(STU stu[], int n);//求一组学生每个学生各门课程的平均值
void testFun4();
void fun5();//从文件读入一组学生的信息，保存到一个结构数组中
void fun6();//输出某一学生结构数组的信息和每个人的总分、平均分到某一文本文件中
void fun7(struct sTudent sTu[], int size);//打印输出学生结构数组的信息到屏幕上
void testFun7();
void fun8(struct StUdent StU[], int size);//把一组学生成绩信息按总分进行排序
void testFun8();
void fun9(struct stuDent stu[]);//查找给定学号的学生成绩信息
void testFun9();
#endif
