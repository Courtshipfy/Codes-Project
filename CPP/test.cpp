#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class print
{
public:
    void operator()(const T& elem) 
    { std::cout<< elem << " ";}
};

template <typename T1,typename T2 = T1>
auto sum(T1 t1,T2 t2) -> decltype(t1 + t2)
{
    return t1 + t2;
}

auto func(int i) -> int(*)[10]
{
    return 0;
}

int main()
{
    int ia[6] = {0,1,2,3,4,5};
    std::vector<int> iv(ia,ia + 6);

    for_each(iv.begin(),iv.end(),print<int>());

    bool x = true;
    //x = x && false;
    //x &= false;
    std::cout << x << std::endl;
    std::cout << (1 << 20) << std::endl;

    auto xxxx = func(2);
    std::cout << xxxx << std::endl;

    std::cout << sum(1,2.0) << std::endl;

    auto lambdafunc = [](int a,int b) -> double
    {
        return static_cast<double>(a) / b;
    };
}