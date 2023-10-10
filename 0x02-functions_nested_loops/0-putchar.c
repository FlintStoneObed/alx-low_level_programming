#include <unistd.h>

int main(void)
{
char s[] = "_putchar\n";
int i = 0;

while (s[i])
{
write(1, &s[i], 1);
I++;
}
return (0);
}
