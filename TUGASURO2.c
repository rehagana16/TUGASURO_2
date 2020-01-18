/*
 * TUGASURO2.c
 *
 *  Created on: Jan 11, 2020
 *      Author: KELOMPOK URO AUDRIC, REHAGANA
 */

#include <stdio.h>

int main() {
    char operator;
    double first,second;
    int p, i;
    printf("Enter an operator (+, -, *, d): \n"); /* note d= derivative*/
    scanf("%c", &operator);

    if (operator == 'd') {
        printf("Pangkat berapa: \n");
        scanf("%d", &p);
        int angka[p],o;
        for(i=0; i <= p; i=i+1)
        {
        	printf("koefisien dari pangkat ke %d= ", i);
        	scanf("%d", &angka[i]);
        }
        
        for(i=0; i <= p; i=i+1)
        {
        	angka[i] = i * angka[i];
        	o = i - 1;
        	if(i>0 && angka[i]>=0) {
        		printf(" +%dx^%d", angka[i], o);
        	}
        	else {
        	    printf(" %dx^%d", angka[i], o);
        	}
        }
    }
    return 0;
}
