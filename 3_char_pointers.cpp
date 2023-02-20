#include<iostream>

int main()
{   
    int i {0};
    char c[4] = {'G','h','a','n'};
    char* ptr = &c[0];
    char d[5] = {'s','h','y','a','m'};
    char* ptr1 = &d[0];
    char e[9] = {};
    char* ptr2 = &e[0];
    while(i<4)
    {
        *(ptr2+i) = *(ptr + i);
        i++;
    }
    i = 0;
    while(i<5)
    {
        *(ptr2+4+i) = *(ptr1 + i);
        i++;
    }
    i = 0;
    while(i<9)
    {
        std::cout<<*(ptr2 + i);
        i++;
    }
}