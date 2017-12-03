#include <stdio.h>



int maxi(int *tab){
       	int i, maximum = tab[0];

	        for(i=0; i<11; i++){
        	        if(maximum < tab[i])
                	        maximum = tab[i];}
return maximum;}



int mini(int *tab){
       	int i, minimum = tab[0];

	        for(i=0; i<11; i++){
        	        if(minimum > tab[i])
                	        minimum = tab[i];}
return minimum;}



int difference(int minimum, int maximum){
        int roznica;

        roznica = maximum - minimum;

return roznica;}



int main(){
        int tab[11] = {161, 19, 17, 1, 6, 1, 2, 1, 3, 7, 1918};
        int roznica;

		printf("maximum: %d\n", maxi(tab));
        	printf("minimum: %d\n", mini(tab));
	        printf("maximum - minimum = %d\n", difference(mini(tab),maxi(tab)));

return 0;}
