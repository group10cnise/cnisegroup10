#include  <stdio.h> 
void main(int argc, char **argv)
{
	// This line is safe
	printf("%s\n", argv[1]);

	// This line is vulnerable
	printf(argv[1]);
	printf ("%s%s%s%s%s%s%s%s%s%s%s%s");
    printf ("%08x.%08x.%08x.%08x.%08x\n");

}
