#include"CLASS.h"

//case 1
void addPerson(People* AddressBook[])//数组的指针传递
{
	cout << "输入创建联系人类型" << endl;
	cout << "1-同学 2-同事 3-朋友 4-亲戚" << endl;
	int select1_1 = 0;
	cin >> select1_1;

	if (select1_1 == 1)
	{
		cout << "生成同学联系人:" << endl;
		cout << "姓名--出生日期--电话--Email地址--学校" << endl;
		AddressBook[Classmate::Index()] = new Classmate;

	}
	else if (select1_1 == 2)
	{
		cout << "生成同事联系人:" << endl;
		cout << "姓名--出生日期--电话--Email地址--共事单位" << endl;
		AddressBook[Colleague::Index()] = new Colleague;
	}
	else if (select1_1 == 3)
	{
		cout << "生成朋友联系人:" << endl;
		cout << "姓名--出生日期--电话--Email地址--认识地点" << endl;
		AddressBook[Friend::Index()] = new Friend;
	}
	else if (select1_1 == 4)
	{
		cout << "生成亲戚联系人:" << endl;
		cout << "姓名--出生日期--电话--Email地址--亲戚称呼" << endl;
		AddressBook[Relative::Index()] = new Relative;
	}
	cout << "您已成功添加" << ((People::Index()) + 1) << "名联系人" << endl;

	system("pause");
	system("cls");
}

//case 2:修改联系人
void ChangePerson(People* AddressBook[])
{
	cout << "现在有" << People::Index() + 1 << "位联系人" << endl;
	for (int i = 0; i < (People::Index() + 1); i++)
	{
		cout << i + 1 << " ";//这样显示更加清晰
		AddressBook[i]->ShowFunction();
	}
	//显示所有联系人
	int select2_1 = 0;
	cout << "输入你想更改的联系人序号：" << endl;
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
	outfile << "同学联系人:" << endl;
	outfile << "姓名\t出生日期\t电话\tEmail地址\t学校" << endl;
	outfile.close();


	outfile.open("D:\\addressbook2.txt", ios::out);
	outfile << "同事联系人:" << endl;
	outfile << "姓名\t出生日期\t电话\tEmail地址\t共事单位" << endl;
	outfile.close();

	outfile.open("D:\\addressbook3.txt", ios::out);
	outfile << "朋友联系人:" << endl;
	outfile << "姓名\t出生日期\t电话\tEmail地址\t认识地点" << endl;
	outfile.close();

	outfile.open("D:\\addressbook4.txt", ios::out);
	outfile << "亲戚联系人:" << endl;
	outfile << "姓名\t出生日期\t电话\tEmail地址\t亲戚称呼" << endl;
	outfile.close();


}

//case0:重置文件流，重新写一下文件
void FinalizeFunction(People* AddressBook[])
{
	fstream outfile;
	for (int i = 0; i < People::Index() + 1; i++)
	{
		if (AddressBook[i]->returnType() == "Classmate")
		{

			outfile.open("D:\\AddressBook1.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "年" << AddressBook[i]->returnM() << "月" << AddressBook[i]->returnD() << "日    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Classmate*)AddressBook[i])->returnSchoolName() << endl;
			outfile.close();
		}
		else if (AddressBook[i]->returnType() == "Colleague")
		{
			outfile.open("D:\\AddressBook2.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "年" << AddressBook[i]->returnM() << "月" << AddressBook[i]->returnD() << "日    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Colleague*)AddressBook[i])->returnWorkName() << endl;
			outfile.close();
		}
		else if (AddressBook[i]->returnType() == "Friend")
		{
			outfile.open("D:\\AddressBook3.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "年" << AddressBook[i]->returnM() << "月" << AddressBook[i]->returnD() << "日    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Friend*)AddressBook[i])->returnPlace() << endl;
			outfile.close();
		}
		else if (AddressBook[i]->returnType() == "Relative")
		{
			outfile.open("D:\\AddressBook4.txt", ios::out | ios::app);
			//outfile << AddressBook[i]->Index() + 1 << "    ";
			outfile << AddressBook[i]->returnName() << "    " << AddressBook[i]->returnY() << "年" << AddressBook[i]->returnM() << "月" << AddressBook[i]->returnD() << "日    " << AddressBook[i]->returnPhoneNum() << "    " << AddressBook[i]->returnEmail() << " " << ((Relative*)AddressBook[i])->returnCallName() << endl;
			outfile.close();
		}
	}
}

//case 5:显示联系人
void ShowFunction(People* AddressBook[])
{
	int select5;
	cout << "1--按联系人类型显示\t2--按出生日期排序显示\t3--按指定月份显示" << endl;
	cin >> select5;
	if (select5 == 1)
	{
		int select5_1;
		cout << "显示联系人类型：" << endl;
		cout << "1-同学 2-同事 3-朋友 4-亲戚 0-全部" << endl;
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
			cout << "现在有" << People::Index() + 1 << "位联系人" << endl;
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
		//按出生日期进行排序，年长的在前面
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
		cout << "指定哪一个月份" << endl;
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
			cout << "对不起，您的通讯录里面没有这个月份出生的联系人\n";

		}
	}
	else
	{
		cout << "输入有误，无法完成相应功能" << endl;
	}

	system("pause");
	system("cls");
}

//case 3 删除联系人
void deletePerson(People* AddressBook[])
{
	int select3_1 = 0;
	cout << "现在有" << People::Index() + 1 << "位联系人" << endl;
	for (int i = 0; i < (People::Index() + 1); i++)
	{
		cout << i + 1 << " ";
		AddressBook[i]->ShowFunction();
	}
	cout << "你想删除哪一位联系人" << endl;
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
		cout << "现在已经删除成功" << endl;

	}
	else
	{
		cout << "您的输入有误，无法删除！" << endl;
	}

	system("pause");
	system("cls");
}



void Congratulate(People* p)
{
	cout << p->returnName() << ": " << endl;
	cout << "            祝生日快乐，健康幸福          " << endl;
	cout << "                                            " << p->returnOwner() << endl;
	fstream outfile;
	outfile.open("D:\\AddressBook_Congratulation.txt", ios::out | ios::app);
	outfile << p->returnName() << ": " << endl;
	outfile << "            祝生日快乐，健康幸福          " << endl;
	outfile << "                                            " << p->returnOwner() << endl;


}

void CaculateWeekDay(People* p)
{
	int m = p->returnM();
	int y = p->returnY();
	int d = p->returnD();
	if (m == 1 || m == 2) //把一月和二月换算成上一年的十三月和是四月
	{

		m += 12;
		y--;
	}
	int Week = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
	switch (Week)
	{
	case 0:  cout << "星期一 "; break;
	case 1:  cout << "星期二 "; break;
	case 2:  cout << "星期三 "; break;
	case 3:  cout << "星期四 "; break;
	case 4:  cout << "星期五 "; break;
	case 5:  cout << "星期六 "; break;
	case 6:  cout << "星期日 "; break;
	}
}

//case4:查询功能的实现
void FindFunction(People* AddressBook[])
{
	int select4 = 0;
	int key = 0;
	cout << "您的联系人查询指标是：" << endl;
	cout << "1.按照姓名查询个人信息--" <<
		"2.查找5天之内过生日的人员【发出祝贺】" << endl;
	cin >> select4;
	if (select4 == 1)
	{
		string name;

		cout << "您想查询的联系人名字是：" << endl;
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
			cout << "通讯录里没有这个联系人！" << endl;
		}
	}
	else if (select4 == 2)
	{
		int arr[100] = {};
		cout << "请输入一个日期：" << endl;
		cout << "年\t月\t日" << endl;
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
			cout << "在这个日期范围内没有人过生日！" << endl;
		}
		else
		{
			for (int i = 0; i < key; i++)
			{
				CaculateWeekDay(AddressBook[arr[i]]);
				AddressBook[arr[i]]->ShowFunction();

			}

			cout << endl;
			cout << "生成生日祝福短信，并且存在D:\\AddressBook_Congratulation.txt" << endl;
			for (int i = 0; i < key; i++)
			{
				Congratulate(AddressBook[arr[i]]);

			}

			cout << "完成任务！" << endl;
		}

	}
	else
	{
		cout << "您的输入有误，功能无法实现" << endl;

	}

	system("pause");
	system("cls");


}