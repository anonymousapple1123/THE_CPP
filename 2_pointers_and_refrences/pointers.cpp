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

// VOID POINTERs -> used when the type is not known at compilation.
// generally used in memory allocation for a certain data type.
// They are  not recomended to use.
// They support implicit conversion.

int* px =0;
void * cp = px; //implicit conversion from int* to void*


//NULLPTR
// This keyword represent s null pointer
// It can be assigned to any pointer but not to any built-in types.
//
// In C NULL os (void*)0 so it makes it illegal to be used in C++
//int* p = NULL; --> cant assign void* to int*;
