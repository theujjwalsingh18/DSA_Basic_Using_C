#include <stdio.h>

struct Ujjwal
{
    char name;
    int age;
    float height;
};

struct Ujjwal s1; // This is globaly created user defined data type that can be accesed by all

int main()
{
    // struct Ujjwal s1;  this is in the nmain function i.e it can only accsed in main() only
    s1.name = 'U';
    s1.age = 19;
    s1.height = 5.10;
    printf("%c\n", s1.name);
    return 0;
}
