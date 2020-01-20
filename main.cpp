#include <cstdio> // The printf function is within this library

int stepFunction(int x){
    int result = 0;
    if (x < 0){
        result = -1;
    } else if (x > 0){
        result = 1;
    }
    return result;
}

int absoluteValue(int y){
    int result = 0;
    if (y > 0){
        result = y;
    } else {
        result = y * -1;
    }
    return result;
}


int main() { // C++ programs have a single entry point, the main function
    int theAnswer = 42;
    int result1 = stepFunction(theAnswer);
    printf("theAnswer: %d, Step: %d\n", theAnswer, result1);

    int luckyNumber = theAnswer / 6;
    int result2 = stepFunction(luckyNumber);
    printf("luckyNumber: %d, Step: %d\n", luckyNumber, result2);

    int randomNumber = 0;
    int result3 = stepFunction(randomNumber);
    printf("randomNumber: %d, Step: %d\n", randomNumber, result3);

    int negativeNumber = -12331;
    int result4 = stepFunction(negativeNumber);
    printf("negativeNumber: %d, Step: %d\n", negativeNumber, result4);

    int sampleNumberForAbsolute = -10;
    printf("The absolute value of %d is %d\n", sampleNumberForAbsolute, absoluteValue(sampleNumberForAbsolute));

    unsigned short a = 0b10101010;
    printf("%hu\n", a);
    int b = 0123;
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d);

    return 0; // 0 is an Exit Code. Exit Codes are integer values that the operating system uses to determine how well a Program ran. Generally, a zero (0) exit code means the program ran successfully
}