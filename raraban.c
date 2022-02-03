#include <stdio.h>
void raraban(int cho){
	printf("\nRaraban %i\n\n", cho);
	for(int i=1; i<=10; i++){
		printf("%i x %i = %i\n",i,cho,cho*i);
	}
}
void main(){
	int cho;
	printf("Raraban Sabaraha?: ");
	scanf("%i", &cho);
	raraban(cho);
}
