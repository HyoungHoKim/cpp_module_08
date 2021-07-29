#include <iostream>
#include <list>

#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main()
{
	std::cout << "-------------- default test ----------------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-------------- list test ----------------" << std::endl;
	std::list<int>    list;

    list.push_back(5);
    list.push_back(17);

    std::cout << list.back() << std::endl;

    list.pop_back();

    std::cout << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    //[...]
    list.push_back(0);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

    ++itlist;
    --itlist;

    while(itlist != itliste){
        std::cout << *itlist << std::endl;
        ++itlist;
    }
    
    std::list<int> s2(list);

	std::cout << "-------------- Other type test ----------------" << std::endl;
	MutantStack<char>	cms;
	for(char i='a'; i<='z'; i++)
		cms.push(i);
	for(MutantStack<char>::iterator iter=cms.begin(); iter != cms.end(); iter++)
		std::cout << *iter << " ";
    std::cout << std::endl;
	return 0;
}