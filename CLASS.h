#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;

class BornDate
{
public:
	BornDate();
	void setDate();
	int ReturnY();
	int ReturnM();
	int ReturnD();

private:
	int y;
	int m;
	int d;
};

class People
{
public:
	virtual void ShowFunction() = 0;
	virtual void ChangeFunction() = 0;
	string returnType();
	static int Index();
	static void deleteIndex();
	string returnName();
	string returnPhoneNum();
	string returnEmail();
	int returnY();
	int returnM();
	int returnD();
	static string returnOwner();
	static void setOwner();
protected:
	string Name;
	BornDate Date;
	string PhoneNum;
	string Email;
	string Type;
	static int index;
	static string Owner;
};

class Classmate : public People
{
public:
	Classmate();
	void ShowFunction();
	void ChangeFunction();
	string returnSchoolName();
private:
	string SchoolName;

};

class Colleague :public People
{
public:
	Colleague();
	void ShowFunction();
	void ChangeFunction();
	string returnWorkName();
private:
	string WorkName;
};

class Friend :public People
{
public:
	Friend();
	void ShowFunction();
	void ChangeFunction();
	string returnPlace();
private:
	string Place;

};

class Relative :public People
{
public:
	Relative();
	void ShowFunction();
	void ChangeFunction();
	string returnCallName();
private:
	string CallName;
};

//����txtͨѶ¼ԭ���Ļ���
void BuildFileEnvironment();
//����ף���ı�,��д����Ӧ��txt�ļ�
void Congratulate(People* p);
//����������ת��������
void CaculateWeekDay(People* p);


//case0:�����ļ���������дһ���ļ�
void FinalizeFunction(People* AddressBook[]);
//case 1
void addPerson(People* AddressBook[]);//�����ָ�봫��
//case 2:�޸���ϵ��
void ChangePerson(People* AddressBook[]);
//case 3 ɾ����ϵ��
void deletePerson(People* AddressBook[]);
//case4:��ѯ���ܵ�ʵ��
void FindFunction(People* AddressBook[]);
//case 5:��ʾ��ϵ��
void ShowFunction(People* AddressBook[]);