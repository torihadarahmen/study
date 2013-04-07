#include <stdio.h>
#include <stdlib.h>
int main() {
	char card_name[3];
	puts("カード名を入力して下さい");
	scanf("%2s", card_name);
	int val = 0;

	switch (card_name[0]) {
		case 'K': 
		case 'Q': 
		case 'J': 
			val = 10;
			break;
		case 'A': 
			val = 11;
			break;
		default : 
			val = atoi(card_name);
	}

	//値が3から6かどうかを調べる
	if ( (val > 2) && (val < 7) ) {
		puts("カウントが増えます");
	} else if (val == 10) {
		puts("カウントが減ります");	
	}
	printf("カードの値: %i\n", val);
	return 0;
}
