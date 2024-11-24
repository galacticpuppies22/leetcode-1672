#include "../incl/main.h"
#include "../incl/problem.h"
#include <assert.h>

int main(void)
{
    int* case1AccountPointers[case1AccountsSize];
    int* case2AccountPointers[case2AccountsSize];
    int* case3AccountPointers[case3AccountsSize];

    // double dereferenced pointers: https://stackoverflow.com/questions/42118190/dereferencing-a-double-pointer
    for (int i = 0; i < case1AccountsSize; i++)
    {   //copy the addresses of each row in the account array `case1InputNums` to case1AccountPointers to make them double derefenced, as `maximumWealth` expects
        case1AccountPointers[i] = case1InputNums[i];
    }

    for (int i = 0; i < case2AccountsSize; i++)
    {   //copy the addresses of each row in the account array `case1InputNums` to case1AccountPointers to make them double derefenced, as `maximumWealth` expects
        case2AccountPointers[i] = case2InputNums[i];
    }

    for (int i = 0; i < case3AccountsSize; i++)
    {   //copy the addresses of each row in the account array `case1InputNums` to case1AccountPointers to make them double derefenced, as `maximumWealth` expects
        case3AccountPointers[i] = case3InputNums[i];
    }

#ifndef DEBUG
    printf("TEST CASE %ld ", ++currentTestCase);
    assert(
#else
    if (
#endif /* DEBUG */
            maximumWealth(
                case1AccountPointers,
                case1AccountsSize,
                (int*) case1AccountsColSize
            )
            == case1OutputNums
#ifndef DEBUG
    );
    printf("PASSED!\n");
#else
    )
    {
        printf("TEST CASE %ld ", ++currentTestCase);
        printf("PASSED!\n");
    }
    else
    {
        printf("TEST CASE %ld ", ++currentTestCase);
        printf("failed!\n");
    }
#endif /* DEBUG */

#ifndef DEBUG
    printf("TEST CASE %ld ", ++currentTestCase);
    assert(
#else
    if (
#endif /* DEBUG */
            maximumWealth(
                case2AccountPointers,
                case2AccountsSize,
                (int*) case2AccountsColSize
            )
            == case2OutputNums
#ifndef DEBUG
    );
    printf("PASSED!\n");
#else
    )
    {
        printf("TEST CASE %ld ", ++currentTestCase);
        printf("PASSED!\n");
    }
    else
    {
        printf("TEST CASE %ld ", ++currentTestCase);
        printf("failed!\n");
    }
#endif /* DEBUG */

#ifndef DEBUG
    printf("TEST CASE %ld ", ++currentTestCase);
    assert(
#else
    if (
#endif /* DEBUG */
            maximumWealth(
                case3AccountPointers,
                case3AccountsSize,
                (int*) case3AccountsColSize
            )
            == case3OutputNums
#ifndef DEBUG
    );
    printf("PASSED!\n");
#else
    )
    {
        printf("TEST CASE %ld ", ++currentTestCase);
        printf("PASSED!\n");
    }
    else
    {
        printf("TEST CASE %ld ", ++currentTestCase);
        printf("failed!\n");
    }
#endif /* DEBUG */

    return 0;
}