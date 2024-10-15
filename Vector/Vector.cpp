// Vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include "UVector.h"

// 자료구조는 2가지 메모리적 분류 공식은 아닙니다.
// 노드형태로 관리하는 자료구조와
// 배열형태로 관리하는 자료구조가 있다.

// vector 자료들을 배열형태로 관리합니다.

// 3가지 형태적 분류로 나눈다고 했습니다.
// 시퀀스 형태의 컨테이너(자료구조)
// 시퀀스 vector 
// 9 4 1 7 => 9417 for문 돌렸는데.
// 9 4 1 7 => 그냥 내가 넣어준대로 그대로 순환하는 자료구조가 시퀀스


// 연관 => 내가 넣어준 자료를 순회했더니 순서가 바뀌어 있는 자료구조를 연관 컨테이너라고 부르지
//         정려해주는 자료구조가 연관 컨테이너가 아니에요.
// 9 4 1 7 => 1 4 7 9 
// 9 4 1 7 => 7 4 1 9 

// 어뎁터 => 거의 안나옵니다. 추후 설명하겠습니다.
//           특수한 자신만의 규칙이 존재하면 어뎁터 queue stack이 있습니다.
//          사용하는 방법이 특수하면

// 직접 만든 벡터를 사용하는 일은 일단 없을 겁니다.
// 사후 관리가 너무 어렵고 짜증납니다.
// 이미 완성된 std::vector가 있고 개네가 아무리 느리고 비효율적이어도 그냥 쓸거에요.
// 다 외부라이브러리들이 훨씬 빠릅니다.
// std::vector보다 빠른 자료구조들이 github나 널려 있어요.
// 언리얼도 전부다 자기들이 만들었다. 
// 언리얼에서 std 자료구조는 사용하지 않는게 좋습니다.

class Skill
{

};

// 벡터는 정적 배열이 들어갈 위치에서 벡터를 사용합니다.
// std::vector<Skill> AllSkill;
// Skill AllSkill[200]


int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    {
        std::vector<int> stdvector;

    
        stdvector.reserve(100);
        stdvector.reserve(10);

 
        for (int i = 0; i < 10; i++)
        {
        
            stdvector.push_back(i);
            std::cout << "push : " << stdvector[i] << std::endl;
            std::cout << "capacity : " << stdvector.capacity() << std::endl;
            std::cout << "size     : " << stdvector.size() << std::endl;
        }

        stdvector.clear();

        std::cout << "claer after capacity : " << stdvector.capacity() << std::endl;
    }


    {
        UVector stdvector;
        
        stdvector.reserve(10);

        for (int i = 0; i < 10; i++)
        {
            stdvector.push_back(i);
            std::cout << "push : " << stdvector[i] << std::endl;
            std::cout << "capacity : " << stdvector.capacity() << std::endl;
            std::cout << "size     : " << stdvector.size() << std::endl;
        }

        stdvector.claer();
    }

}
