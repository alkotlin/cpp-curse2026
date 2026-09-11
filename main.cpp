#include <iostream>

int rec(int c)
{
    if(c>2) return rec(c-1)+rec(c-2);
    else return 1;
}
int main()
{
int c;
std::cin>>c;

std::cout<<rec(c);

return 0;
}