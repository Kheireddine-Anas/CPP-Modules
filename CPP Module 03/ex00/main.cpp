#include <iostream>

class Par {
    private:
        std::string s;
        int n;
        int a;
    public:
        void set(int f, std::string r) {
            n = f;
            s = r;
        };
        void print() {
            std::cout << n << s << a << std::endl;
        };
};

class Pars : public Par {
    private:
        int n;
        std::string s;
    public:
        void set(int f, std::string r) {
            n = f;
            s = r;
        };
        void print() {
            std::cout << n << s << std::endl;
        };
};

int main() {
    Pars fd;
    fd.set(44, "gol");
    fd.print();
}