#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	int barnabe = 6;
	int barnabeH = 0;
	int i = 0;
	char * fly = "BAS_BAS_BAS_BAS_BAS_HAUT_BAS_BAS_GAUCHE_BAS_HAUT_BAS_BAS_BAS_BAS_BAS_HAUT_HAUT_GAUCHE_HAUT_GAUCHE_DROITE_BAS_DROITE_BAS_HAUT_HAUT_DROITE_DROITE_BAS_HAUT_BAS_DROITE_HAUT_DROITE_BAS_DROITE_BAS_BAS_BAS_GAUCHE_DROITE_BAS_BAS_DROITE_BAS_BAS_HAUT_BAS_GAUCHE_HAUT_BAS_HAUT_BAS_BAS_BAS_BAS_BAS_BAS_GAUCHE_GAUCHE_BAS_HAUT_HAUT_BAS_DROITE_BAS_GAUCHE_DROITE_BAS_GAUCHE_HAUT_BAS_DROITE_BAS_HAUT_GAUCHE_BAS_HAUT_HAUT_HAUT_BAS_DROITE_BAS_BAS_BAS_DROITE_GAUCHE_GAUCHE_BAS_GAUCHE_BAS_HAUT_DROITE_HAUT_BAS_BAS_GAUCHE_BAS_BAS_BAS_DROITE_BAS_GAUCHE_BAS_GAUCHE_GAUCHE_GAUCHE_BAS_BAS_GAUCHE_GAUCHE_BAS_GAUCHE_BAS_GAUCHE_GAUCHE_GAUCHE_DROITE_DROITE_BAS_GAUCHE_DROITE_GAUCHE_BAS_DROITE_GAUCHE_DROITE_GAUCHE_BAS_DROITE_GAUCHE_BAS_GAUCHE_DROITE_DROITE_GAUCHE_GAUCHE_GAUCHE_BAS_BAS_BAS_BAS_GAUCHE_GAUCHE_BAS_GAUCHE_DROITE_BAS_GAUCHE_GAUCHE_GAUCHE_GAUCHE_BAS_GAUCHE_DROITE_BAS_GAUCHE_GAUCHE_GAUCHE_GAUCHE_BAS_DROITE_GAUCHE_DROITE_BAS_BAS_GAUCHE_GAUCHE_GAUCHE_BAS_GAUCHE_DROITE_GAUCHE_BAS_DROITE_BAS_DROITE_DROITE_BAS_DROITE_DROITE_BAS_DROITE_GAUCHE_BAS_GAUCHE_GAUCHE_GAUCHE_GAUCHE_GAUCHE_GAUCHE_GAUCHE_DROITE_DROITE_GAUCHE_BAS_BAS_GAUCHE_BAS_GAUCHE_GAUCHE_HAUT_DROITE_GAUCHE_HAUT_DROITE_HAUT_HAUT_HAUT_HAUT_HAUT_HAUT_HAUT_DROITE_GAUCHE_DROITE_DROITE_HAUT_DROITE_HAUT_GAUCHE_GAUCHE_DROITE_GAUCHE_HAUT_GAUCHE_HAUT_HAUT_HAUT_HAUT_HAUT_GAUCHE_GAUCHE_HAUT_HAUT_HAUT_HAUT_HAUT_GAUCHE_HAUT_DROITE_DROITE_HAUT_GAUCHE_DROITE_DROITE_HAUT_DROITE_HAUT_HAUT_GAUCHE_HAUT_HAUT_HAUT_HAUT_GAUCHE_DROITE_HAUT_HAUT_HAUT_GAUCHE_HAUT_HAUT_GAUCHE_HAUT_HAUT_GAUCHE_GAUCHE_HAUT_HAUT_HAUT_HAUT_GAUCHE_GAUCHE_HAUT_HAUT_GAUCHE_HAUT_HAUT_GAUCHE_DROITE_GAUCHE_HAUT_HAUT_GAUCHE_HAUT_DROITE_GAUCHE_HAUT_HAUT_GAUCHE_GAUCHE_GAUCHE_GAUCHE_HAUT_DROITE_GAUCHE_GAUCHE_DROITE_HAUT_HAUT_DROITE_GAUCHE_HAUT_BAS_HAUT_HAUT_BAS_GAUCHE_HAUT_HAUT_BAS_GAUCHE_HAUT_BAS_BAS_GAUCHE_HAUT_HAUT_BAS_BAS_BAS_DROITE_GAUCHE_BAS_BAS_HAUT_GAUCHE_HAUT_DROITE_GAUCHE_DROITE_BAS_GAUCHE_BAS_HAUT_BAS_GAUCHE_GAUCHE_GAUCHE_BAS_DROITE_HAUT_BAS_GAUCHE_GAUCHE_DROITE_BAS_GAUCHE_GAUCHE_BAS_BAS_HAUT_GAUCHE_DROITE_HAUT_BAS_HAUT_DROITE_GAUCHE_DROITE_GAUCHE_BAS_BAS_HAUT_BAS_HAUT_BAS_HAUT_HAUT_DROITE_BAS_HAUT_BAS_BAS_GAUCHE_GAUCHE_HAUT_GAUCHE_BAS_DROITE_BAS_BAS_GAUCHE_BAS_GAUCHE_HAUT_HAUT_HAUT_HAUT_BAS_GAUCHE_HAUT_HAUT_BAS_GAUCHE_HAUT_GAUCHE_BAS_BAS_DROITE_HAUT_DROITE_HAUT_BAS_GAUCHE_DROITE_BAS_BAS_BAS_GAUCHE_DROITE_GAUCHE_DROITE_DROITE_BAS_GAUCHE_GAUCHE_HAUT_GAUCHE_HAUT_DROITE_GAUCHE_BAS_HAUT_BAS_BAS_GAUCHE_HAUT_DROITE_DROITE_GAUCHE_HAUT_DROITE_HAUT_GAUCHE_DROITE_HAUT_DROITE_HAUT_GAUCHE_GAUCHE_BAS_BAS_BAS_GAUCHE_GAUCHE_DROITE_GAUCHE_BAS_DROITE_BAS_GAUCHE_DROITE_GAUCHE_GAUCHE_GAUCHE_HAUT_BAS_BAS_DROITE_DROITE_HAUT_BAS_DROITE_DROITE_HAUT_BAS_BAS_DROITE_GAUCHE_HAUT_DROITE_GAUCHE_HAUT_DROITE_BAS_DROITE_DROITE_BAS_DROITE_DROITE_HAUT_HAUT_BAS_HAUT_BAS_GAUCHE_DROITE_HAUT_GAUCHE_BAS_BAS_DROITE_DROITE_BAS_DROITE_HAUT_GAUCHE_DROITE_DROITE_HAUT_DROITE_HAUT_GAUCHE_BAS_DROITE_DROITE_BAS_HAUT_BAS_BAS_HAUT_DROITE_HAUT_HAUT_BAS_GAUCHE_BAS_HAUT_HAUT_DROITE_GAUCHE_GAUCHE_DROITE_DROITE_HAUT";

	int h = strlen(fly);

	do{
		if (fly[i] == 'B'){
			if (barnabeH != -2){
				barnabeH = barnabeH - 1;
			}
			i = i + 4;
		}
		else if (fly[i] == 'H'){
			barnabeH = barnabeH + 1;
			i = i + 5;
		} 
		else if (fly[i] == 'G'){
			barnabe = barnabe - 1;
			i = i + 7;
			printf("%d", barnabe);
		} 
		else if (fly[i] == 'D'){
			barnabe = barnabe + 1;
			i = i + 7;
		}
	}while(i < h);

	printf("Barnabe est à la hauteur de %d et sur la case %d :\n", barnabeH, barnabe);

	
	exit(0);
}