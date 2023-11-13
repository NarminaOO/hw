#include <iostream>
#include <vector>
#include<list>


void Print(std::vector<int>vec, char ch)
{
    for (auto iter = vec.begin(); iter != vec.end(); ++iter)
    {
        std::cout << *iter;
        if (std::next(iter) != vec.end())
        {
            std::cout << ch;
        }

    }
    std::cout << std::endl;

}
void Print(std::list<char>l, char ch)
{
    for (auto iter = l.begin(); iter != l.end(); ++iter)
    {
        std::cout << *iter;
        if (std::next(iter) != l.end())
        {
            std::cout << ch;
        }
    }


}

int main()
{
    std::vector<int> vec = { 0,10,20 };
    std::list<char>l = { 'a','b','c' };
    Print(vec, ',');
    Print(l, '*');
    return 0;
}
