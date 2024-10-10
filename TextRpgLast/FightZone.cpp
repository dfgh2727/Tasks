#include "FightZone.h"
#include "Monster.h"
#include "Player.h"
#include <conio.h>
#include "Orc.h"
#include "Goblin.h"
#include <BaseSystem/EngineDebug.h>
#include "TextRpgCore.h"
#include "Orc.h"
#include "Goblin.h"


void UFightZone::CreateMonster()
{
	switch (MonsterType)
	{
	case Enums::MONSTERTYPE::GOBLIN:
	{
		// class AMonster* CurMonster;
		AGoblin* Ptr = new AGoblin();
		CurMonster = Ptr;
		break;
	}
	case Enums::MONSTERTYPE::ORC:
		CurMonster = new AOrc();
		break;
	default:
		break;
	}

	// FightZone을 만드는 사람과 
	
	// 고블린인지 오크인지가 정해졌다.
	// 모두다 만들었으면 준비시켜야 한다.
	CurMonster->BeginPlay();
}


UZone* UFightZone::InPlayer()
{
	if (Enums::MONSTERTYPE::NONE == MonsterType)
	{
		MSGASSERT("몬스터 타입이 정해지지 않은 사냥터입니다.");
		return nullptr;
	}

	InMsgPrint();
	_getch();

	
	CreateMonster();
	APlayer& Player = TextRpgCore::GetPlayer();
	AMonster& Monster = *CurMonster;

	// 여기서 싸우겠죠?
	while (true)
	{
		Player.StatusRender();
		Monster.StatusRender();
		_getch();

		break;
	}

	if (nullptr != CurMonster)
	{
		delete CurMonster;
		CurMonster = nullptr;
	}

	// 이 내부에서 어떤 메모리들이 할당되었고
	// 기존의 코드를 그냥 사용해도 될겁니다.
	// 4시 15분까지 마을로 돌아가는 코드 아래쪽에 넣어주세요.
	
	return ConnectingProgress();
}