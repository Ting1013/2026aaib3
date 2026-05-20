// Week13-2.cpp

#include <stdio.h>

int a = 100, b = 200; // global 办跑计

void fun1()
{
    int b = 80; // local 跋办跑计

    printf("void fun1() a 琌: %d\n", a);

    printf("void fun1() b 琌: %d\n", b);
}

void fun2()
{
    b = 30; // э global 办跑计
}

int main()
{
    int a = 50; // local 跋办跑计

    printf("int main() a 琌: %d\n", a);

    printf("int main() b 琌: %d\n", b);

    fun1();

    fun2();

    printf("int main() a 琌: %d\n", a);

    printf("int main() b 琌: %d\n", b);

    return 0;
}
