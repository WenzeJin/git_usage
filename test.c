#include <assert.h>
#include <stdio.h>

int add(int a, int b);

void test_add() {
    printf("Testing add...\n");
    assert(add(1, 2) == 3);
    assert(add(0, 0) == 0);
    assert(add(-1, 1) == 0);
    assert(add(-1, -1) == -2);
    assert(add(1, -1) == 0);
    printf("All tests passed!\n");
}

int main() {
    test_add();
    return 0;
}