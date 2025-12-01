// Type aliases
//
using pchar = char*; // -> Pointer to character
using pf = int(*)(double);   // -> pointer to function taking a double and returning an int

// older syntax using 'typedef'
typedef int int32_t;    // equivalent to -> "using int32_t = int;"
typedef void(*ptof)(int); //equivalent to -> "using ptof = void(*)(int);"
