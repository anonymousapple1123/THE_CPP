// Resource is something that has to be acquired and released.
// Acquired by "new" and released by "delete"
// Its indistinguishable a pointer that has resource allocated and a ptr that does'nt.
#include<iostream>

void confused(int* p){
    //delete p?????
    std::cout<<"= "<<*p<<std::endl;
}
int global{7};

void f(){
    int* pn = new int{7};
    int i{7};
    int* q = &i;
    confused(pn);
    confused(q);
    confused(&global);
}
