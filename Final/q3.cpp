#include <iostream>
#include "PostFix.hpp"
using namespace std;

int main()
{
    PostfixExp e1;

    e1.setExpression("");
    e1.printExpression();
    e1.Evaluation();
}

// test results entering 78+ = 15
// 23*2/ = 3
// 34+6*7/ = 6
// 12+34+- = -4 
// all examples in question 1 works
