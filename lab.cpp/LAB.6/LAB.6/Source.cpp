#include <iostream>
#include <string.h.>
using namespace std;
int main()
{
    char s1[] = "hi1m534yn56am7ei3ss34li500m234sha2d45y\0";

    int k = strlen(s1), j = 0;

    char* s2 = new char[k];

    for (int i = 0; i < k; i++)
        if (s1[i] < '0' || s1[i] > '9')
        {
            s2[j] = s1[i];
            j++;
        }
    s2[j] = '\0';


    for (int i = 0; i < k; i++)
        if (!(s1[i] < '0' || s1[i] > '9'))
        {
            s2[j] = s1[i];
            j++;
        }
    s2[j] = '\0';

    cout << s1 << endl << s2;
    return(0);
}