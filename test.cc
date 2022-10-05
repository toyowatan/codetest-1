#include <stdio.h>
#include <cstring>

int main(void) {

    char s2[10] = "";
    char s1[100] = "";
    char* p = fgets(s1, sizeof(s1)/sizeof(s1[0]), stdin);
    if ( p == s1 ) {
	if( p[strlen(p) - 1] == '\n' ) {
	    p[strlen(p) - 1] = '\0';
	}
	printf( "s1=[%s]\n", s1 );
	printf( "memcpy\n" );
	memcpy(s2, s1, strlen(p) + 1);
	printf( "s1=[%s]\n", s1 );
	printf( "s2=[%s]\n", s2 );
    }
    return 0;
}
