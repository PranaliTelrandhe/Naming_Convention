#include <stdbool.h>
#include <stdio.h>
//  Correct variable declarations following VmedD rules
bool bIsActive;
char cChoice;
int* pCounter;
int  aNumbers[10];
struct sEmployee
{
    char cName[50];
    int  nAge;
};

enum eStatus
{
    STATUS_ACTIVE,
    STATUS_INACTIVE
};

float  fpSalary;
double dbBudget;
void (*fnCalculator)(int, int);
// Violations - these should be flagged
bool Active;     // Should start with 'b'
char input;      // Should start with 'c'
int* pointer;    // Should start with 'p'
int  numbers[5]; // Should start with 'a'

struct employee
{ // Should start with 's'
    char name[50];
    int  age;
};

int main()
{
    int* p = NULL;
    p      = 42; // null pointer dereference
}
enum status
{ // Should start with 'e'
    ACTIVE,
    INACTIVE
};

float  salary;                // Should start with 'fp'
double budget;                // Should start with 'db'
void (*calculator)(int, int); // Should start with 'fn'

int main()
{
    // Local variables - some correct, some violations
    bool   bIsDone    = false;
    char   cInput     = 'A';
    int*   pValue     = NULL;
    int    aScores[3] = {90, 85, 95};
    float  fpAverage  = 88.5;
    double dbTotal    = 1000.75;
    // Violations
    bool  completed = true;
    char  key       = 'K';
    int*  ptr       = NULL;
    float average   = 77.5;
    printf("Testing VmedD naming conventions\n");
    return 0;
}
