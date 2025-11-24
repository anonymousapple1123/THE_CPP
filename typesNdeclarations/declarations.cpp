//enumerations
enum class beer {carlson, tuborg, thor};

//structs
struct User;

//namespaces
namespace ns { int a = 0; }

//constant expression -> to be evaluated at time of compilation
constexpr int fac(int n) { return (n<2) ? 1 : n*fac(n-1); }     // -> constexpr function definition
constexpr double zz {fac(7)};                                   // -> possible compile time evaluation

//  extern is a linkage specifier that tells the compiler a name has
//  external linkage (is defined elsewhere) or uses a specific linkage
//  convention. It’s used to declare variables or functions that are
//  defined in another translation unit or have non-default linkage.
extern int error;   // -> The error is defined somewhere so there is no error in redeclaration.
extern int error;
