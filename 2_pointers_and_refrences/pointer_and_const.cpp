// C++ offers two related meaning of constant -> const, constexpr
// const -> dont modify in this scope
// constexpr -> evaluate at compile-time

void f1(char* p){
    char s[] = "Gorm";

    const char *pc = s;
    //pc[3] = 'g';  -> error : pc points to constants
    pc = p;

    char *const cp = s;
    cp[3] = 'a';
    //cp = p;   ->error : cp is constant

    const char *const cpc = s;
    //cpc[3] = 'a';  -> error : cpc points to constant
    //cpc = p;        -> error : cpc is constants
}
