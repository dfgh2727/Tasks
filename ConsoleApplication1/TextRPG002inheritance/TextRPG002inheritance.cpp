
#include <iostream>

//class PlayerSaveData
//{
//public:
//    int Hp;
//    int Att;
//};

const int NAMELEN = 10;


class StatusUnit
{
protected:
    char Name[NAMELEN] = "NONE";
    int Hp = 100;
    int MinAtt = 10;
    int MaxAtt = 20;
    int Speed = 10;
    int Charm = 0;

  
};


class FightUnit : public StatusUnit
{
public:

    int GetDamage() const
    {
        srand(time(0));

        int DamRate = MinAtt + rand() % (MaxAtt - MinAtt);

        // minAtt ~ MaxAtt 사이의 숫자가 리턴되는 함수를 만드세요.
        return DamRate;
    }

    
    void DamageLogic(const FightUnit& _AttUnit)
    {
        // _AttUnit => 나를 공격하려는 상대
        Hp -= _AttUnit.GetDamage();
    }

    void DamageRender(const char* const _AttName, int _Att)
    {
        printf_s("%s 가 %s를 공격해서 %d의 데미지를 입혔습니다.\n", _AttName, Name, _Att);
    }


protected:

    const char* GetName(const StatusUnit& _Stats) const
    {
        return Name;
    }

private:
};

class Player : public FightUnit
{
};

class Monster : public FightUnit
{

};




int main()
{

    Player NewPlayer;
    Monster NewMonster;
    NewMonster.DamageLogic(NewPlayer);
}

    