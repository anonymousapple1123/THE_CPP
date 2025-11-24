// Life of object starts with the constructor and ends with the destrunctor
//
// => Automatic -> they are allocated on stack (each call of the function get sits own stack
//                                              frame to hold its automatic objects )
//
// => Static -> objects declared in global and static x declared in function are initialized only once
//              life is of the life of program
//              they create problem in multithreaded program and and are loked to avoid races.
//
// => Free Store -> new nad delete control the life of the object.
//
//  => Thread-local objects -> objects thta are declared thread_local has life of the thread.
//
