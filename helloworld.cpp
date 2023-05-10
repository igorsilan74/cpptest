#include <iostream> 
 
template<typename T> T add(const T&, T&); 
 
int main()
{
    int a {3};
    std::cout << "int: " << add(a, a) << std::endl; 
    std::cout << "a= " << a << std::endl;
}
template<typename T> T add(const T &a, T &b)
{
    return a + b;
}