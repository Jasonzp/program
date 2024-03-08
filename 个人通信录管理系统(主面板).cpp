#include<iostream>
#include"PrintFunction.h"
#include"CLASS.h"

using namespace std;
# define MAX 100 //创建一个宏定义，方便更改

int main()
{

	int select=0;
	
	People *AddressBook[MAX];//用一个宏定义，定义这个大小，方便操作
	BuildFileEnvironment();//将文件环境搭建出来
	int tag = 0;
	People::setOwner();
	cout << "输入成功，开始通讯录管理系统" << endl;
	system("pause");
	system("cls");
	while (1)
	{	
		PrintMenu();//菜单界面
		cin >> select;
		switch (select)
		{
			
		 case 1://录入联系人个人信息
			//这里应该可以抽成函数
			 //完成
			addPerson(AddressBook);
			tag = 0;
			break;
		case 2://完成
			ChangePerson(AddressBook);
			tag = 0;
			break;
		case 3://完成
			tag = 0;
			deletePerson(AddressBook);
			break;
		case 4://完成
			tag = 0;
			FindFunction(AddressBook);
			break;
		case 5://完成
			ShowFunction(AddressBook);
			break;
		case 6://完成
			tag = 1;//就是控制要不要保存至txt文件
			cout << "现在已经清空通讯录联系人!" << endl;
			system("pause");
			system("cls");
			break;
		case 0://再写一下文件,形成最终的文件
			//完成
			BuildFileEnvironment();
			if (tag == 0)
			{
				FinalizeFunction(AddressBook);
			}
			cout << "感谢使用通讯录系统!" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，无法完成相应功能\n";
			break;
				
		}

    }

	system("pause");
	return 0;
}





