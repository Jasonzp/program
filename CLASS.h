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

//构建txt通讯录原本的环境
void BuildFileEnvironment();
//生成祝贺文本,并写入相应的txt文件
void Congratulate(People* p);
//将生日日期转换成星期
void CaculateWeekDay(People* p);


//case0:重置文件流，重新写一下文件
void FinalizeFunction(People* AddressBook[]);
//case 1
void addPerson(People* AddressBook[]);//数组的指针传递
//case 2:修改联系人
void ChangePerson(People* AddressBook[]);
//case 3 删除联系人
void deletePerson(People* AddressBook[]);
//case4:查询功能的实现
void FindFunction(People* AddressBook[]);
//case 5:显示联系人
void ShowFunction(People* AddressBook[]);