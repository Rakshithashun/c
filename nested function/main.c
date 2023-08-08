#include <stdio.h>
#include <stdlib.h>

int main()
{
    auto int view();
    view();
    printf("Main");
    int view()
    {
        printf("View");
        return 1;
    }
    printf("SMVEC");
    return 0;
}
