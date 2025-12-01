char p[] = "Zeno"; //size of this char is 5 char.
// "\a" -> gives bell sign sound output.

// String can be writted in separated quotes for better semantics like
char px[]= "abcd"
            "ABCD"; // Compiler will join these string to a single equivalent string.

//Raw character string -> R"(folder\file)"
char xp[] = R"(folder\file1.cpp)";

//Larger character sets

// R"()"  -> raw string
// u8"()" ->UTF-8 string
//u8R"()"   -> UTF-8 raw string
// u"....." -> UTF-16 string
// uR"()"   -> UTF-16 raw string
// U"..."   -> UTF-32 string
// UR"()"   -> UTF-32 raw string
