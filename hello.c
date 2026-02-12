#include <stdbool.h>
#include <stdio.h>

// Correct variable declarations
bool bIsActive;
char cChoice;
int* pCounter;
int  aNumbers[10];
struct sEmployee
{
    char cName[50];
    int  nAge;
};


enum Status
{
    STATUS_ACTIVE,
    STATUS_INACTIVE
};

float  fpSalary;
double dbBudget;
void (*fnCalculator)(int, int);

// Violations - these should be flagged by naming convention rules
bool Active;     // Violation: should start with 'b'
char input;      // Violation: should start with 'c'
int* pointer;    // Violation: should start with 'p'
int  numbers[5]; // Violation: should start with 'a'

struct employee // Violation: should start with 's'
{
    char name[50]; // Violation: should start with 'c'
    int  age;      // Violation: should start with 'n'
};

enum status // Violation: should start with 'e'
{
    ACTIVE,
    INACTIVE
};

float  salary;                // Violation: should start with 'fp'
double budget;                // Violation: should start with 'db'
void (*calculator)(int, int); // Violation: should start with 'fn'

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
    bool  completed = true; // Violation: should start with 'b'
    char  key       = 'K';  // Violation: should start with 'c'
    int*  ptr       = NULL; // Violation: should start with 'p'
    float average   = 77.5; // Violation: should start with 'fp'

    printf("Testing VmedD naming conventions\n");
    return 0;
}
