#include <iostream>
#include <cstdio>

struct MyClass {
    MyClass() {
        puts(__PRETTY_FUNCTION__);
    }

    ~MyClass() {
        puts(__PRETTY_FUNCTION__);
    }

    void foo() {
        puts(__PRETTY_FUNCTION__);
    }
};

int main() {
    {
        puts("1");
        auto mc = MyClass();
        puts("2");
    }
    puts("3");
    return 0;
}