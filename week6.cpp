#include <iostream>
#include <cstring>
using namespace std;
void reverse(char *s) {
    char *s1 = new char[50];
    int a = strlen(s);
    s1 += a - 1;
    while(*s != '\0'){
        *s1 = *s;
        s1--;
        s++;
    }
    s1++;
    *(s1 + a) = '\0';
    s -= a;
    while(*s1 != '\0'){
        *s = *s1;
        s1++;
        s++;
    }
    s -= a;
    s1 -= a;
    delete[] s1;
}
int main()
{

}
