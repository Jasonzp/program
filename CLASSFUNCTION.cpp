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


string People::Owner = "ͨѶ¼�û�";
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
	cout << "�����������\t";
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
	cout << Name << "\t" << Date.ReturnY() << "��" << Date.ReturnM() << "��" << Date.ReturnD() << "��\t" << PhoneNum << "\t" << Email << "\t" << SchoolName << endl;

}

void Classmate::ChangeFunction()
{
	cout << "����ĵ���Ϣ��1-�绰���� 2-�ʼ���ַ 3-ѧУ����" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "�����µĵ绰���룺" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "�����µ��ʼ���ַ��" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "�����µ�ѧУ���ƣ�" << endl;
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
	cout << Name << "\t" << Date.ReturnY() << "��" << Date.ReturnM() << "��" << Date.ReturnD() << "��\t" << PhoneNum << "\t" << Email << "\t" << WorkName << endl;

}

void Colleague::ChangeFunction()
{
	cout << "����ĵ���Ϣ��1-�绰���� 2-�ʼ���ַ 3-���µ�λ" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "�����µĵ绰���룺" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "�����µ��ʼ���ַ��" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "�����µĹ��µ�λ��" << endl;
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
	cout << Name << "\t" << Date.ReturnY() << "��" << Date.ReturnM() << "��" << Date.ReturnD() << "��\t" << PhoneNum << "\t" << Email << "\t" << Place << endl;

}

void Friend::ChangeFunction()
{
	cout << "����ĵ���Ϣ��1-�绰���� 2-�ʼ���ַ 3-��ʶ�ص�" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "�����µĵ绰���룺" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "�����µ��ʼ���ַ��" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "�����µ���ʶ�ص㣺" << endl;
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
	cout << Name << "\t" << Date.ReturnY() << "��" << Date.ReturnM() << "��" << Date.ReturnD() << "��\t" << PhoneNum << "\t" << Email << "\t" << CallName << endl;

}

void Relative::ChangeFunction()
{
	cout << "����ĵ���Ϣ��1-�绰���� 2-�ʼ���ַ 3-��������" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "�����µĵ绰���룺" << endl;;
		cin >> PhoneNum;
	}
	else if (select == 2)
	{
		cout << "�����µ��ʼ���ַ��" << endl;
		cin >> Email;

	}
	else if (select == 3)
	{
		cout << "�����µ��������ƣ�" << endl;
		cin >> CallName;
	}
}

string Relative::returnCallName()
{
	return CallName;
}
