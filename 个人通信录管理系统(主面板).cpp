#include<iostream>
#include"PrintFunction.h"
#include"CLASS.h"

using namespace std;
# define MAX 100 //����һ���궨�壬�������

int main()
{

	int select=0;
	
	People *AddressBook[MAX];//��һ���궨�壬���������С���������
	BuildFileEnvironment();//���ļ����������
	int tag = 0;
	People::setOwner();
	cout << "����ɹ�����ʼͨѶ¼����ϵͳ" << endl;
	system("pause");
	system("cls");
	while (1)
	{	
		PrintMenu();//�˵�����
		cin >> select;
		switch (select)
		{
			
		 case 1://¼����ϵ�˸�����Ϣ
			//����Ӧ�ÿ��Գ�ɺ���
			 //���
			addPerson(AddressBook);
			tag = 0;
			break;
		case 2://���
			ChangePerson(AddressBook);
			tag = 0;
			break;
		case 3://���
			tag = 0;
			deletePerson(AddressBook);
			break;
		case 4://���
			tag = 0;
			FindFunction(AddressBook);
			break;
		case 5://���
			ShowFunction(AddressBook);
			break;
		case 6://���
			tag = 1;//���ǿ���Ҫ��Ҫ������txt�ļ�
			cout << "�����Ѿ����ͨѶ¼��ϵ��!" << endl;
			system("pause");
			system("cls");
			break;
		case 0://��дһ���ļ�,�γ����յ��ļ�
			//���
			BuildFileEnvironment();
			if (tag == 0)
			{
				FinalizeFunction(AddressBook);
			}
			cout << "��лʹ��ͨѶ¼ϵͳ!" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "���������޷������Ӧ����\n";
			break;
				
		}

    }

	system("pause");
	return 0;
}





