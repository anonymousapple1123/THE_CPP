// A refrence is an alias for an object, is usually implemented
// to hold a machine address of an object

template<class T>
class vector{
    T* elem;

    public:
        T& operator[](int i){       //return reference to an element
            return elem[i];
        }

        const T& operator[](int i)const {   //return reference to an const element
            return elem[i];
        }

        void push_back(const T& a);
};

void f(const vector<double>& v){
    double d1 = v[1];
    v[2] = 7;
    v.push_back(d1);
}
