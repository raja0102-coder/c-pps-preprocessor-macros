#include <stdio.h>

// 1. Constant Definitions & Function-Like Macros
#define PI 3.1415926535
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

// 2. Preprocessor Stringification (#) and Token Concatenation (##) Operators
#define TO_STRING(x) #x
#define CONCAT(a, b) a##b

// 3. Conditional Compilation Flag
#define DEBUG_MODE

int main() {
    printf("==================================================\n");
    printf("    PPS PREPROCESSOR DIRECTIVES & MACROS ENGINE   \n");
    printf("==================================================\n\n");

    // 1. Macro Expansion
    int num = 5;
    int x = 14, y = 28;
    printf("[1] MACRO CONSTANTS & FUNCTION-LIKE EXPANSIONS:\n");
    printf("    Constant PI          : %.5f\n", PI);
    printf("    SQUARE(%d)           : %d\n", num, SQUARE(num));
    printf("    MAX(%d, %d)          : %d\n\n", x, y, MAX(x, y));

    // 2. Stringification & Token Concatenation
    int CONCAT(var, 100) = 42; // Expands to: int var100 = 42;
    printf("[2] ADVANCED PREPROCESSOR OPERATORS (# AND ##):\n");
    printf("    Stringification (#)  : %s\n", TO_STRING(Programming_for_Problem_Solving));
    printf("    Concatenation (##)   : var100 = %d\n\n", var100);

    // 3. Conditional Compilation (#ifdef / #ifndef)
    printf("[3] CONDITIONAL COMPILATION FLOW:\n");
#ifdef DEBUG_MODE
    printf("    [DEBUG] Debugging mode is ACTIVE.\n");
#else
    printf("    [RELEASE] Running in Production mode.\n");
#endif

#ifndef FEATURE_FLAGS
    printf("    [CONFIG] FEATURE_FLAGS not defined. Falling back to default PPS defaults.\n\n");
#endif

    // 4. Predefined C Standard Macros
    printf("[4] PREDEFINED STANDARD C MACROS:\n");
    printf("    Current File Path    : %s\n", __FILE__);
    printf("    Compilation Date     : %s\n", __DATE__);
    printf("    Compilation Time     : %s\n", __TIME__);
    printf("    Active Source Line   : %d\n", __LINE__);

    printf("\n==================================================\n");

    return 0;
}
