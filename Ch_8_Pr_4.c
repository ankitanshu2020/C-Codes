#include <stdio.h>

void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        st[i] = st[i + m];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "Ankitanshu"; 
    slice(st, 2, 7); //it will give output of st from 2 to 6 th place,n to m-1
    printf("%s", st);
    return 0;
}