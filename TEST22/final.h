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
int testFun(int n);//���ú���
void fun10();//��ʾ�˵�����
int fun1(int x);//����ֶκ�����ֵ
void testFun1();
void fun2(int* data, int* max, int* min, float* ave, int n);//��һ�����ݵ����ֵ����Сֵ��ƽ��ֵ
void testFun2();
int fun3(const char* str1, const char* str2);//�Ƚ������ַ�����С
void testFun3();
float fun4(STU stu[], int n);//��һ��ѧ��ÿ��ѧ�����ſγ̵�ƽ��ֵ
void testFun4();
void fun5();//���ļ�����һ��ѧ������Ϣ�����浽һ���ṹ������
void fun6();//���ĳһѧ���ṹ�������Ϣ��ÿ���˵��ܷ֡�ƽ���ֵ�ĳһ�ı��ļ���
void fun7(struct sTudent sTu[], int size);//��ӡ���ѧ���ṹ�������Ϣ����Ļ��
void testFun7();
void fun8(struct StUdent StU[], int size);//��һ��ѧ���ɼ���Ϣ���ֽܷ�������
void testFun8();
void fun9(struct stuDent stu[]);//���Ҹ���ѧ�ŵ�ѧ���ɼ���Ϣ
void testFun9();
#endif
