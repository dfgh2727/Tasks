// Map.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// Map.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include "UMap.h"


class MapNode
{
public:
    MapNode* Parent;
    MapNode* LeftChild;
    MapNode* RightChild;
};


class greater
{
    
public:
    bool operator()(int _left, int _Right)
    {
        return _left < _Right;
    }
};



int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    {
        std::vector<int> Test;
        // int* index
        std::vector<int>::iterator StartIter = Test.begin();
        std::vector<int>::iterator EndIter = Test.end();

        for (; StartIter != EndIter; ++StartIter)
        {
            int Value = *StartIter;
        }
    }

    {
        std::list<int> Test;
        // int* index
        std::list<int>::iterator StartIter = Test.begin();
        std::list<int>::iterator EndIter = Test.end();

        for (; StartIter != EndIter; ++StartIter)
        {
            int Value = *StartIter;
        }

    
    }


    {
        // Set은 value가 없는 map입니다.
        std::set<int> TestSet;

        std::map<int, int, std::greater<int>> TestMap;

        std::pair<int, int> PairValue;
        PairValue.first = 10;
        PairValue.second = 10;
        // std::make_pair(10, 20) return std::pair<int, int>
        // 결론적으로는 pair를 만들어서 넣어줘야 한다.
        TestMap.insert(PairValue);
        TestMap.insert({10, 20});
        TestMap.insert(std::make_pair(10, 0));
        TestMap.insert(std::map<int, int>::value_type(2, 0));
        TestMap.insert(std::make_pair(5, 0));
        TestMap.insert(std::make_pair(7, 0));
        TestMap.insert(std::make_pair(15, 0));

        // 맵을 사용하는 이유
        std::map<int, int>::iterator FindIter = TestMap.find(7);
        FindIter->first;
        FindIter->second;

        // 같은 키 넣으면 map은 무시한다.
        // TestMap.insert(std::make_pair(10, 0));


        std::map<int, int>::iterator StartIter = TestMap.begin();
        std::map<int, int>::iterator EndIter = TestMap.end();

        for (; StartIter != EndIter; ++StartIter)
        {
            std::cout << StartIter->first << std::endl;
        }

    }

    {
        UMap TestMap;

        // pair가 뭔지 
        UPair PairValue = {10, 2};
        PairValue.first = 10;
        PairValue.second = 2;

        TestMap.insert({10, 0}); // <= root
        TestMap.insert({ 2, 0 });
        TestMap.insert(Umake_pair(6, 0));
        TestMap.insert(Umake_pair(5, 0));
        TestMap.insert(Umake_pair(4, 0));
        TestMap.insert(Umake_pair(7, 9999));
        TestMap.insert(Umake_pair(15, 0));

     
    }
}

