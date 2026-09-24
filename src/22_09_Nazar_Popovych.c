#include <stdio.h>
#include <stdbool.h>

bool simple_or(bool left, bool right) {
    if (left == true) {
        return true;
    }

    else if (right == true) {
        return true;
    }

    else {
        return false;
    }

}

// or

bool logical_or(bool left, bool right) {
    return left || right;
}


bool xor_v1(bool left, bool right) {
    if ((left == true) && (right == false)) {
        return true;
    }

    else if ((left == false) && (right == true)) {
        return true;
    }

    else {
        return false;
    }
}


// or

bool xor_v2(bool left, bool right) {
    return left != right; //if both are equal, either true or false, xor returns false, otherwise true
}


bool nand(bool left, bool right) {
    if ((left == right) && (left == true)) {
        return false;
    }

    else {
        return true;
    }
}

int main(void) {
    bool a = true;
    bool b = true;

    printf("Simple OR: %d\n", simple_or(a, b));
    printf("Logical OR: %d\n", logical_or(a, b));
    printf("XOR version 1: %d\n", xor_v1(a, b));
    printf("XOR version 2: %d\n", xor_v2(a, b));
    printf("NAND: %d\n", nand(a, b));

    return 0;
}
