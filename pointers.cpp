// * -> derefrence operator
// & ->address-of operator

char c = 'a';
char *p = &c;
char c2 = *p;

// some complicated notation fo pointers are

int *pi;        // pointer to int
char** ppc;     // pointer to pointer to char
int* ap[15];    // array of 15 pointer to int
int (*fp)(char*);// pointer to function taking a char* argeuments, and returns an int
int* f(char*);   // function taking a char* argument and returns a pointer to int
