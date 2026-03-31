#include <stdio.h>

int genera_id() {
    static int id = 0;
    id++;
    return id;
}
int main() {
    for (int i = 0; i < 5; i++) {
        printf("ID generato: %d\n", genera_id());
    }
    return 0;
}