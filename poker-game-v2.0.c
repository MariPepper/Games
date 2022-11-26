#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
	int i;
	char *max[14];

	max[1] = "Two";
	max[2] = "Three";
	max[3] = "Four";
	max[4] = "Five";
	max[5] = "Six";
	max[6] = "Seven";
	max[7] = "Eight";
	max[8] = "Nine";
	max[9] = "Ten";
	max[10] = "Jack";
	max[11] = "Queen";
	max[12] = "King";
	max[13] = "Ace";

	char *min[5];
	min[1] = "Hearts";
	min[2] = "Clubs";
	min[3] = "Diamonds";
	min[4] = "Spades";

	char *play[9];
	play[0] = "Single Pair";    // 1 de max[i] * 2 min[i]                              **
	play[1] = "Two Pair";       // 1 de max[i] * 2 min[i] + 1 de max[i] * 2 min[i]     **
	play[2] = "Three of a Kind";// 1 max[i]* 3 min[i]                                  **
	play[3] = "Four of a Kind"; // 1 max[i] * 4 min[i]                                 **
	play[4] = "Flush";          // 5 max[i] * 1 min[i]                                 **
	play[5] = "Straight Flush"; // 5 de max[0] a max[8] * 1 min[i]                     **
	play[6] = "Full House";     // 1 max[i] * 3 min[i] + 1 max[i] * 2 min[i]           **
	play[7] = "Straight";       // 5 de max[0] a max[8] * 4 min[i] + 1 min[i]          **
	play[8] = "High Card";      // all the rest.                                       **

	int j;
	int jogada;
	int a, b, c, d, e, f, g, h, l, m;
	do {
		srand(time(0));
		printf("\n----------------------Display Numbers----------------------\n");
		printf("\nIgnore.\n");
		a = rand() %13 + 1;
		printf("\n%d \n", a);
		b = rand() %4 + 1;
		printf("%d \n", b);
		c = rand() %13 +1;
		printf("%d \n", c);
		d  = rand() %4 +1;
		printf("%d \n", d);
		e = rand() %13 + 1;
		printf("%d \n", e);
		f  = rand() %4 + 1;
		printf("%d \n", f);
		g = rand() %13 +1;
		printf("%d \n", g);
		h  = rand() %4 +1;
		printf("%d \n", h);
		l = rand() %13 +1;
		printf("%d \n", l);
		m  = rand() %4 +1;
		printf("%d \n", m);
	} while(a == c || a == e || a == g || a == l || c == e || c == g || c == l || e == g || e == l || g == l);
	do {
		printf("\n----------------------Display Message----------------------\n");
		printf("\n1.Primeira Jogada 2.Segunda Jogada 3.Terceria Jogada 4.Sair\n");
		scanf("\n%d", &jogada);
		switch(jogada) {

			case 1:
				printf("\nPrimeira etapa.\n");
				if(a != c && b == d) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("\n%s\n", play[0]); // Single Pair
				}
				if(a != c && b != d) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("\nNot a Pair. \n"); // Not a Pair
				}
				break; /* optional */

			case 2:
				printf("\nSegunda etapa.\n");
				if(e != g && f == h) {
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					printf("\n%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("\n%s\n", play[0]); // Single Pair
				}
				if(e != g && f != h) {
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					printf("\n%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("\nNot a Pair.\n"); // Not a Pair
				}
				if(a != c && e != g && b == d && f == h) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("\n%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("\n%s\n", play[1]); // Two Pair. **
				}
				if(b == d && b == f && b == h && d == f && d == h && f == h && a != c && a != e && c != e) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("%s of %s\n", max[e], min[f]);
					printf("\n%s of %s\n", max[g], min[h]);
					printf("\n%s\n", play[2]); // Three of a Kind, 3 cartas do mesmo naipe. **
				}
				if(b == d && b == f && b == h && d == f && d == h && f == h && a != c && a != e && a != g && c != e && c != g && e != g) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("\n%s\n", play[3]); // Four of a Kind, 4 cartas do mesmo naipe. **
				}
				break; /* optional */

			case 3:
				printf("\nTerceira etapa.\n");
				if(b == d && b == f && b == h && b == m && d == f && d == h && d == m && f == h && f == m && h == m) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					max[i=l] = max[l];
					min[i=m] = min[m];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("%s of %s\n", max[l], min[m]);
					printf("\n%s\n", play[4]); // Flush de 5 cartas fo mesmo naipe. **
				}
				if(b == d && b == f && b == h && b == m && d == f && d == h && d == m && f == h && f == m && h == m && a < c && c < e && e < g && g < l) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					max[i=l] = max[l];
					min[i=m] = min[m];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("%s of %s\n", max[l], min[m]);
					printf("\n%s\n", play[5]); // Straight Flush, seq de 5 cartas do mesmo naipe.
				}
				if(b == d && b == f && b != h && b != m && d == f && d != h && d != m && f != h && f != m && h == m ) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					max[i=l] = max[l];
					min[i=m] = min[m];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("%s of %s\n", max[e], min[f]);
					printf("\n%s of %s\n", max[g], min[h]);
					printf("%s of %s\n", max[l], min[m]);
					printf("\n%s\n", play[6]); // Full House com 3 naipes iguais + 2 naipes iguais.
				}
				if(b == d && b == f && b == h && b != m && d == f && d == h && d != m && f == h && f != m && h != m && a < c && c < e && e < g && g < l) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					max[i=l] = max[l];
					min[i=m] = min[m];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("\n%s of %s\n", max[l], min[m]);
					printf("\n%s\n", play[7]); // Straight com seq de 5 cartas com 4 naipes iguais + 1 naipe igual.
				}
				if(a != c || a != e || a != g || a != l || c != e || c != g || c != l || e != g || e != l || g != l 
				   || b != d || b != d && f != h || b != d && b != f && d != f || b != d && f == h) {
					max[i=a] = max[a];
					max[i=c] = max[c];
					min[i=b] = min[b];
					min[i=d] = min[d];
					max[i=e] = max[e];
					max[i=g] = max[g];
					min[i=f] = min[f];
					min[i=h] = min[h];
					max[i=l] = max[l];
					min[i=m] = min[m];
					printf("--------Total Count--------\n");
					printf("\n%s of %s\n", max[a], min[b]);
					printf("%s of %s\n", max[c], min[d]);
					printf("%s of %s\n", max[e], min[f]);
					printf("%s of %s\n", max[g], min[h]);
					printf("%s of %s\n", max[l], min[m]);
					printf("\n%s\n", play[8]); // High Card, cartas todas diferentes com 1 carta alta. **
				}
				break; /* optional */

			case 4:
				printf("\nExit.\n");
				break; /* optional */

			/* you can have any number of case statements */
			default: /* Optional */
				printf("\nWrong choice.\n");
		}
	} while(jogada <= 4);
}
