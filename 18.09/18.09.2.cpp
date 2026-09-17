#include <iostream>
#include <string>
#include <random>

void cycle(int r)
{
    std::cout << "I thought of a number from 1 to 100." << std::endl;
    int guess =-1;
    while(1)
    {
        std::cout << "Try to guess: ";
        std::cin >> guess;
        if(guess==r) break;
        else if(guess>r) std::cout << "Less" << std::endl;
        else if(guess<r) std::cout << "More" << std::endl;
        else std::cout << "Error" << std::endl;
    }
    std::cout << "You are right!";
}

void init()
{
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<> dist(1, 100);
    int rand = dist(gen);
    cycle(rand);
}

int main()
{
    init();
    return 0;
}