#include"CLASS.h"

//case 1
void addPerson(People* AddressBook[])//�����ָ�봫��
{
	cout << "���봴����ϵ������" << endl;
	cout << "1-ͬѧ 2-ͬ�� 3-���� 4-����" << endl;
	int select1_1 = 0;
	cin >> select1_1;

	if (select1_1 == 1)
	{
		cout << "����ͬѧ��ϵ��:" << endl;
		cout << "����--��������--�绰--Email��ַ--ѧУ" << endl;
		AddressBook[Classmate::Index()] = new Classmate;

	}
	else if (select1_1 == 2)
	{
		cout << "����ͬ����ϵ��:" << endl;
		cout << "����--��������--�绰--Email��ַ--���µ�λ" << endl;
		AddressBook[Colleague::Index()] = new Colleague;
	}
	else if (select1_1 == 3)
	{
		cout << "����������ϵ��:" << endl;
		cout << "����--��������--�绰--Email��ַ--��ʶ�ص�" << endl;
		AddressBook[Friend::Index()] = new Friend;
	}
	else if (select1_1 == 4)
	{
		cout << "����������ϵ��:" << endl;
		cout << "����--��������--�绰--Email��ַ--���ݳƺ�" << endl;
		AddressBook[Relative::Index()] = new Relative;
	}
	cout << "���ѳɹ����" << ((People::Index()) + 1) << "����ϵ��" << endl;

	system("pause");
	system("cls");
}

//case 2:�޸���ϵ��
void ChangePerson(People* AddressBook[])
{
	cout << "������" << People::Index() + 1 << "λ��ϵ��" << endl;
	for (int i = 0; i < (People::Index() + 1); i++)
	{
		cout << i + 1 << " ";//������ʾ��������
		AddressBook[i]->ShowFunction();
	}
	//��ʾ������ϵ��
	int select2_1 = 0;
	cout << "����������ĵ���ϵ����ţ�" << endl;
	cin >> select2_1;
	if (AddressBook[select2_1 - 1]->returnType() == "Classmate")
	{
		AddressBook[select2_1 - 1]->ChangeFunction();
	}
	else if (AddressBook[select2_1 - 1]->returnType() == "Colleague")
	{
		AddressBook[select2_1 - 1]->ChangeFunction();
	}
	else if (AddressBook[select2_1 - 1]->returnType() == "Friend")
	{
		AddressBook[select2_1 - 1]->ChangeFunction();
	}
	else if (AddressBook[select2_1 - 1]->returnType() == "Relative")
	{
		AddressBook[select2_1 - 1]->ChangeFunction();
	}
	system("pause");
	system("cls");
}


void BuildFileEnvironment()
{
	fstream outfile;
	outfile.open("D:\\addressbook1.txt", ios::out);
	outfile << "ͬѧ��ϵ��:" << endl;
	outfile << "����\t��������\t�绰\tEmail��ַ\tѧУ" << endl;
	outfile.close();


	outfile.open("D:\\addressbook2.txt", ios::out);
	outfile << "ͬ����ϵ��:" << endl;
	outfile << "����\t��������\t�绰\tEmail��ַ\t���µ�λ" << endl;
	outfile.close();

	outfile.open("D:\\addressbook3.txt", ios::out);
	outfile << "������ϵ��:" << endl;
	outfile << "����\t��������\t�绰\tEmail��ַ\t��ʶ�ص�" << endl;
	outfile.close();

	outfile.open("D:\\addressbook4.txt", ios::out);
	outfile << "������ϵ��:" << endl;
	outfile << "����\t��������\t�绰\tEmail��ַ\t���ݳƺ�" << endl;
	outfile.close();


}

//case0:�����ļ���������дһ���ļ�
void FinalizeFunction(People* AddressBook[])
{
	fstream outfile;
	for (int i = 0; i < People::Index() + 1; i++)
	{
		if (AddressBook[i]->returnType() == "Classmate")
		{

			outfile.open("D:\\AddressBook1.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "��" << AddressBook[i]->returnM() << "��" << AddressBook[i]->returnD() << "��    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Classmate*)AddressBook[i])->returnSchoolName() << endl;
			outfile.close();
		}
		else if (AddressBook[i]->returnType() == "Colleague")
		{
			outfile.open("D:\\AddressBook2.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "��" << AddressBook[i]->returnM() << "��" << AddressBook[i]->returnD() << "��    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Colleague*)AddressBook[i])->returnWorkName() << endl;
			outfile.close();
		}
		else if (AddressBook[i]->returnType() == "Friend")
		{
			outfile.open("D:\\AddressBook3.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "��" << AddressBook[i]->returnM() << "��" << AddressBook[i]->returnD() << "��    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Friend*)AddressBook[i])->returnPlace() << endl;
			outfile.close();
		}
		else if (AddressBook[i]->returnType() == "Relative")
		{
			outfile.open("D:\\AddressBook4.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "��" << AddressBook[i]->returnM() << "��" << AddressBook[i]->returnD() << "��    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Relative*)AddressBook[i])->returnCallName() << endl;
			outfile.close();
		}
	}
}

//case 5:��ʾ��ϵ��
void ShowFunction(People* AddressBook[])
{
	int select5;
	cout << "1--����ϵ��������ʾ\t2--����������������ʾ\t3--��ָ���·���ʾ" << endl;
	cin >> select5;
	if (select5 == 1)
	{
		int select5_1;
		cout << "��ʾ��ϵ�����ͣ�" << endl;
		cout << "1-ͬѧ 2-ͬ�� 3-���� 4-���� 0-ȫ��" << endl;
		cin >> select5_1;
		switch (select5_1)
		{
		case 1:

			for (int i = 0; i < (People::Index() + 1); i++)
			{
				if (AddressBook[i]->returnType() == "Classmate")
				{
					AddressBook[i]->ShowFunction();
				}
			}
			break;
		case 2:

			for (int i = 0; i < (People::Index() + 1); i++)
			{
				if (AddressBook[i]->returnType() == "Colleague")
				{
					AddressBook[i]->ShowFunction();
				}
			}
			break;
		case 3:

			for (int i = 0; i < (People::Index() + 1); i++)
			{
				if (AddressBook[i]->returnType() == "Friend")
				{
					AddressBook[i]->ShowFunction();
				}
			}
			break;
		case 4:

			for (int i = 0; i < (People::Index() + 1); i++)
			{
				if (AddressBook[i]->returnType() == "Relative")
				{
					AddressBook[i]->ShowFunction();
				}
			}
			break;
		case 0:
			cout << "������" << People::Index() + 1 << "λ��ϵ��" << endl;
			for (int i = 0; i < (People::Index() + 1); i++)
			{
				cout << i + 1 << " ";
				AddressBook[i]->ShowFunction();
			}
			break;

		}
	}
	else if (select5 == 2)
	{
		//���������ڽ��������곤����ǰ��
		People* temp = NULL;
		for (int i = 0; i < ((People::Index() + 1) - 1); i++)
		{
			for (int j = 0; j < (People::Index() + 1) - i - 1; j++)
			{
				if (AddressBook[j]->returnY() > AddressBook[j + 1]->returnY())
				{
					temp = AddressBook[j];
					AddressBook[j] = AddressBook[j + 1];
					AddressBook[j + 1] = temp;
				}
				else if (AddressBook[j]->returnM() > AddressBook[j + 1]->returnM())
				{
					temp = AddressBook[j];
					AddressBook[j] = AddressBook[j + 1];
					AddressBook[j + 1] = temp;
				}
				else if (AddressBook[j]->returnD() > AddressBook[j + 1]->returnD())
				{
					temp = AddressBook[j];
					AddressBook[j] = AddressBook[j + 1];
					AddressBook[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < (People::Index() + 1); i++)
		{
			cout << i + 1 << " ";
			AddressBook[i]->ShowFunction();
		}

	}
	else if (select5 == 3)
	{
		int M;
		cout << "ָ����һ���·�" << endl;
		cin >> M;
		int index = 0;

		for (int i = 0; i < (People::Index() + 1); i++)
		{
			if (AddressBook[i]->returnM() == M)
			{
				AddressBook[i]->ShowFunction();
				index++;
			}
		}
		if (index == 0)
		{
			cout << "�Բ�������ͨѶ¼����û������·ݳ�������ϵ��\n";

		}
	}
	else
	{
		cout << "���������޷������Ӧ����" << endl;
	}

	system("pause");
	system("cls");
}

//case 3 ɾ����ϵ��
void deletePerson(People* AddressBook[])
{
	int select3_1 = 0;
	cout << "������" << People::Index() + 1 << "λ��ϵ��" << endl;
	for (int i = 0; i < (People::Index() + 1); i++)
	{
		cout << i + 1 << " ";
		AddressBook[i]->ShowFunction();
	}
	cout << "����ɾ����һλ��ϵ��" << endl;
	cin >> select3_1;
	if (select3_1 >= 1 && select3_1 <= (People::Index() + 1))
	{
		People* temp = NULL;
		if (select3_1 < (People::Index() + 1))
		{
			for (int i = select3_1 - 1; i < (People::Index() + 1); i++)
			{
				AddressBook[i] = AddressBook[i + 1];

			}
			AddressBook[People::Index()] = NULL;
		}
		else if (select3_1 == (People::Index() + 1))
		{
			AddressBook[select3_1 - 1] = NULL;
		}

		People::deleteIndex();
		cout << "�����Ѿ�ɾ���ɹ�" << endl;

	}
	else
	{
		cout << "�������������޷�ɾ����" << endl;
	}

	system("pause");
	system("cls");
}



void Congratulate(People* p)
{
	cout << p->returnName() << ": " << endl;
	cout << "            ף���տ��֣������Ҹ�          " << endl;
	cout << "                                            " << p->returnOwner() << endl;
	fstream outfile;
	outfile.open("D:\\AddressBook_Congratulation.txt", ios::out | ios::app);
	outfile << p->returnName() << ": " << endl;
	outfile << "            ף���տ��֣������Ҹ�          " << endl;
	outfile << "                                            " << p->returnOwner() << endl;


}

void CaculateWeekDay(People* p)
{
	int m = p->returnM();
	int y = p->returnY();
	int d = p->returnD();
	if (m == 1 || m == 2) //��һ�ºͶ��»������һ���ʮ���º�������
	{

		m += 12;
		y--;
	}
	int Week = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
	switch (Week)
	{
	case 0:  cout << "����һ "; break;
	case 1:  cout << "���ڶ� "; break;
	case 2:  cout << "������ "; break;
	case 3:  cout << "������ "; break;
	case 4:  cout << "������ "; break;
	case 5:  cout << "������ "; break;
	case 6:  cout << "������ "; break;
	}
}

//case4:��ѯ���ܵ�ʵ��
void FindFunction(People* AddressBook[])
{
	int select4 = 0;
	int key = 0;
	cout << "������ϵ�˲�ѯָ���ǣ�" << endl;
	cout << "1.����������ѯ������Ϣ--" <<
		"2.����5��֮�ڹ����յ���Ա������ף�ء�" << endl;
	cin >> select4;
	if (select4 == 1)
	{
		string name;

		cout << "�����ѯ����ϵ�������ǣ�" << endl;
		cin >> name;
		for (int i = 0; i < (People::Index() + 1); i++)
		{
			if (AddressBook[i]->returnName() == name)
			{
				AddressBook[i]->ShowFunction();
				key++;
			}
		}
		if (key == 0)
		{
			cout << "ͨѶ¼��û�������ϵ�ˣ�" << endl;
		}
	}
	else if (select4 == 2)
	{
		int arr[100] = {};
		cout << "������һ�����ڣ�" << endl;
		cout << "��\t��\t��" << endl;
		BornDate temp;
		temp.setDate();
		for (int i = 0; i < (People::Index() + 1); i++)
		{
			if ((//abs(AddressBook[i]->returnY() - temp.ReturnY()) * 365 +
				abs(AddressBook[i]->returnM() - temp.ReturnM()) * 30 + abs(AddressBook[i]->returnD() - temp.ReturnD())) <= 5)
			{
				arr[key] = i;
				key++;
			}

		}
		if (key == 0)
		{
			cout << "��������ڷ�Χ��û���˹����գ�" << endl;
		}
		else
		{
			for (int i = 0; i < key; i++)
			{
				CaculateWeekDay(AddressBook[arr[i]]);
				AddressBook[arr[i]]->ShowFunction();

			}

			cout << endl;
			cout << "��������ף�����ţ����Ҵ���D:\\AddressBook_Congratulation.txt" << endl;
			for (int i = 0; i < key; i++)
			{
				Congratulate(AddressBook[arr[i]]);

			}

			cout << "�������" << endl;
		}

	}
	else
	{
		cout << "�����������󣬹����޷�ʵ��" << endl;

	}

	system("pause");
	system("cls");


}