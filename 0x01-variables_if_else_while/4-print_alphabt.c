#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(vold)

{
char aphabet;

for (aphabet = 'a'; aphabet <= 'z'; aphabet++)
if (aphabet == 'q')
continue;

else if (aphabet == 'e')
continue;

putchar(aphabet);

putchar('\n');

return (0);

}
