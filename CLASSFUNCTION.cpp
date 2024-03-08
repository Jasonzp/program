#include"CLASS.h"
void BornDate::setDate()
{
	cin >> y >> m >> d;
}

int BornDate::ReturnD()
{
	return d;

}

int BornDate::ReturnM()
{
	return m;

}

int BornDate::ReturnY()
{
	return y;

}

BornDate::BornDate()
{
	y = 0;
	m = 0;
	d = 0;
}


//--------------------------------------------------


string People::Owner = "通讯录用户";
int People::index = -1;

string People::returnType()
{
	return Type;
}

string People::returnOwner()
{
	return Owner;
}

int People::Index()
{
	return index;
}

void People::setOwner()
{
	cout << "输入机主姓名\t";
	cin >> Owner;
}

void People::deleteIndex()
{
	index--;
}

string People::returnName()
{
	return Name;
}
string People::returnPhoneNum()
{
	return PhoneNum;
}

string People::returnEmail()
{
	return Email;
}

int People::returnY()
{
	return Date.ReturnY();
}

int People::returnD()
{
	return Date.ReturnD();
}

int People::returnM()
{
	return Date.ReturnM();
}

//---------------------------------------------------------

Classmate::Classmate()
{
	Type = "Classmate";
	cin >> Name;
	Date.setDate();
	cin >> PhoneNum >> Email >> SchoolName;
	index++;

}

void Classmate::ShowFunction()
{
	cout << Name << "\t" << Date.ReturnY() << "年" << Date.ReturnM() << "月" << Date.ReturnD() << "日\t" << PhoneNum << "\t" << Email << "\t" << SchoolName << endl;

}

void Classmate::ChangeFunction()
{
	cout << "想更改的信息：1-电话号码 2-邮件地址 3-学校名称" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "输入新的电话号码：" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "输入新的邮件地址：" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "输入新的学校名称：" << endl;
		cin >> SchoolName;
	}
}

string Classmate::returnSchoolName()
{
	return SchoolName;
}
//-------------------------------------------------------------------


Colleague::Colleague()
{
	Type = "Colleague";
	cin >> Name;
	Date.setDate();
	cin >> PhoneNum >> Email >> WorkName;
	index++;


}

void Colleague::ShowFunction()
{
	cout << Name << "\t" << Date.ReturnY() << "年" << Date.ReturnM() << "月" << Date.ReturnD() << "日\t" << PhoneNum << "\t" << Email << "\t" << WorkName << endl;

}

void Colleague::ChangeFunction()
{
	cout << "想更改的信息：1-电话号码 2-邮件地址 3-共事单位" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "输入新的电话号码：" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "输入新的邮件地址：" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "输入新的共事单位：" << endl;
		cin >> WorkName;
	}
}

string Colleague::returnWorkName()
{
	return WorkName;
}

//--------------------------------------------------



Friend::Friend()
{
	Type = "Friend";
	cin >> Name;
	Date.setDate();
	cin >> PhoneNum >> Email >> Place;
	index++;
}

void Friend::ShowFunction()
{
	cout << Name << "\t" << Date.ReturnY() << "年" << Date.ReturnM() << "月" << Date.ReturnD() << "日\t" << PhoneNum << "\t" << Email << "\t" << Place << endl;

}

void Friend::ChangeFunction()
{
	cout << "想更改的信息：1-电话号码 2-邮件地址 3-相识地点" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "输入新的电话号码：" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "输入新的邮件地址：" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "输入新的相识地点：" << endl;
		cin >> Place;
	}
}

string Friend::returnPlace()
{
	return Place;
}



Relative::Relative()
{
	Type = "Relative";
	cin >> Name;
	Date.setDate();
	cin >> PhoneNum >> Email >> CallName;
	index++;

}

void Relative::ShowFunction()
{
	cout << Name << "\t" << Date.ReturnY() << "年" << Date.ReturnM() << "月" << Date.ReturnD() << "日\t" << PhoneNum << "\t" << Email << "\t" << CallName << endl;

}

void Relative::ChangeFunction()
{
	cout << "想更改的信息：1-电话号码 2-邮件地址 3-亲戚名称" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "输入新的电话号码：" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "输入新的邮件地址：" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "输入新的亲戚名称：" << endl;
		cin >> CallName;
	}
}

string Relative::returnCallName()
{
	return CallName;
}
