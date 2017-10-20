#include <stdio.h>
#include <math.h>

float temperatura (int primeiraopcao, int segundaopcao, float temp){
	float conversao;
	if(primeiraopcao==1 && segundaopcao==2){
		conversao= (temp-32)/1.8;
		return conversao;
	}
	if(primeiraopcao==1 && segundaopcao==3){
		conversao= temp+273;
		return conversao;
	}
	if(primeiraopcao==2 && segundaopcao==1){
		conversao= 1.8*temp+32;
		return conversao;
	}
	if(primeiraopcao==2 && segundaopcao==3){
		conversao= (1.8*temp+32)+273;
		return conversao;
	}
	if(primeiraopcao==3 && segundaopcao==1){
		conversao= temp-273;
		return conversao;
	}
	if(primeiraopcao==3 && segundaopcao==2){
		conversao= (temp-305)/1.8;
		return conversao;
	}
}


int basenumerica (float numero, int primeiraopcao, int segundaopcao){
	float resto;
	if (primeiraopcao==1 && segundaopcao==2){
		
