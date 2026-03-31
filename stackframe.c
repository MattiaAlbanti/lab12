#include <stdio.h>
void f1(void);
void f2(void);
void f3(void);
int main(void) {
     f1();
     f2();
     f3();
    return 0;
}

void f1() {
    int a = 2;
    printf("%d\n", a);
}

void f2() {
    char c = 'f';
    printf("%c\n", c);
}

void f3() {
    double d = 1.5;
    printf("%lf\n", d);
}
