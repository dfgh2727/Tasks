#include "BlackSmith.h"
#include "Player.h"
#include <BaseSystem/EngineDebug.h>
#include <conio.h>


void BlackSmith::BSFunc(class UPlayer& _Player)
{
	bool Luck = rand() % 2;
	int Rate = rand() % 16;

	int Value = _Player.GetGold();
	Value -= Luck * Rate *100;
	_Player.SetGold(Value);



	//if (Rate <= 5)
	//{   
	//	int Expend = Luck * Rate * 100;
	//	// 1000
	//	int Value = _Player.GetGold();
	//	Value -= Expend;
	//	_Player.SetGold(Value);

	//	if(Luck)
	//	{
	//		printf_s("��ȭ�� �����ϼ̽��ϴ�.")
	//	}
	//	else
	//	{
	//		printf_s("��ȭ�� �����ϼ̽��ϴ�.")

	//	}
	//	printf_s("�ݾ��� %d��ŭ ����Ǿ����ϴ�.\n", Expend)

	//}
	//else if (6 <= Rate <= 10)
	//{

	//}
	//else if (11 <= Rate < 15)
	//{

	//}
	//else
	//{

	//}

	// Ȯ���� ���δ� 2���� 1
	// 1���� �𿩾� �Ѵ�. �÷��̾��� ��ȭ �ܰ� * 100
	// ���� ���� 5���� �����ϰ� �ִ�. �׷��� 500���� �￩�� �Ѵ�.
	// 1~5������ ���а� ����Ȯ���� ������.
	// �ٿ������ �ʴ´�.
	// 6~10������ �����ϸ� 1�� �ٿ�ȴ�.
	// 10~15�� 0���� �����ϸ� 0���� ��������.
	// 15�� �̻��̸� ��ȭ�� ���ϰ� �ؾ����Ѵ�.
}

void BlackSmith::InPlayer(class UPlayer& _Player/*, int& Result*/)
{
	if (nullptr == ParentZone)
	{
		MSGASSERT("�θ����� ���õ��� �ʾҽ��ϴ�");
		return;
	}



	_Player.SetGold(1000000);

	srand(time(nullptr));

	while (true)
	{
		system("cls");
		_Player.StatusRender();
		std::cout << "1. ��ȭ\n";
		std::cout << "2. ������\n";
		int Select = _getch();
		switch (Select)
		{
		case '1':
			BSFunc(_Player);
			return;
		case '2':
			return;
		default:
			break;
		}
	}
}