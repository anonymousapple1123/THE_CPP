// Ways to intialize
int a1{4}; //   -> Prefer this in most cases.
int a2 = {4};
int a3 = 4;
int a4(4);

//pros of using int a{10};
// lossy type conversion is not possible /-> possible from char to int /-> but not possible from int to char
// same applies for float to float.

//Auto type casting
auto num = 0;
//decltype(expr) -> declared type of "expr"
// -> Matrix <decltype(T{} + U{})>  <-
