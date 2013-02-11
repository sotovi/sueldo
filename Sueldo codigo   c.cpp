#include<stdio.h>
using namespace std;
#define p=.20, ls=1230
int main() {
	int	sa,sca;
	printf("Introduzca su sueldo actual:" );
	scanf("%d",& sa);
	if(sa<1250)
		sca=(sa*.20)+sa;
	printf("Tu nuevo sueldo:%d",sca);
	
	return 0;
}


