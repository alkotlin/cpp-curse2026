#include <iostream>
#include <string>

std::string month(int c)
{
    switch (c)
    {
        case 1: return {"January"}; break;
        case 2: return {"Feburary"}; break;
        case 3: return {"March"}; break;
        case 4: return {"April"}; break;
        case 5: return {"May"}; break;
        case 6: return {"June"}; break;
        case 7: return {"July"}; break;
        case 8: return {"August"}; break;
        case 9: return {"September"}; break;
        case 10: return {"October"}; break;
        case 11: return {"November"}; break;
        case 12: return {"December"}; break;
        default: return {"0"}; break;
    }
}

void type()
{
    int c;
    std::cout << "Write down a natural number from 1 to 12: ";
    std::cin >> c;
    if(month(c)=="0") std::cout<< "Error. You were supposed to write a natural number from 1 to 12.";
    else std::cout << "The month with number " << c << " is " << month(c); 
}

int main()
{
    type();
    return 0;
}