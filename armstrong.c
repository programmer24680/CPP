#include <stdio.h>
#include <math.h>

int numlength(int );
int armstrongCheck(int , int );

int main() {
    for(int i = 1; i <= 501; i++) {
        int num = armstrongCheck(i, numlength(i));
        if (num == i) {
            printf("%d\n", num);
        }
    }
    return 0;
}


int numlength(int num) {
    int length = 0;
    for(int i = 1;;i++) {
        if(!floor(num/pow(10, i))) {
            length = i;
            break;
        }
    }
    return length;
}
int armstrongCheck(int num, int length) {
    int cubeSum = 0;
    int newNum = 0;
    for(int i = 0; i < length; i++) {
        newNum = num/floor(pow(10, i));
        for(int j = length - i - 1; j > 0; j--) {
            int power = floor(pow(10, j));
            newNum %= power;
        }
        cubeSum += floor(pow(newNum, length));
    }
    return cubeSum;
}