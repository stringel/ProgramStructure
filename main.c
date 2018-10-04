#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 55

// Prototypes:
int addThree(int);
void showMessage();
void checkRange(int);

int main()
{ //start main()

    checkRange(101);

    return 0;
} // end main()

int addThree(int x)
{

    return x + 3;
}

void showMessage()
{
    printf("Value is out of range!\n");
}

void checkRange(int enteredValue)
{
    // || - or
    // && - and

    if (enteredValue > MAX || enteredValue < MIN)
     {
        showMessage();
     }
}


