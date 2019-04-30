#include <stdio.h>
#include <string.h>

void Function(int satir, int sutun, char a[50], char islem){
	int boyut=satir*sutun;
	int ms=boyut;

	int i,j,k,m,n=0;
	
	for(i=1; ms<strlen(a); i++){
		ms+=boyut;
	}
	
		int matris[i][satir][sutun]; // i matris boyutunu tutar
		
	if(islem=='E'){
		
		for(j=0; j<i; j++){ //Kaç matrisin olduðunu tutan döngü
			for(k=0; k<satir; k++){ //matrisin satýrýný tutan döngü
				for(m=0; m<sutun; m++){ //matrisin sütununu tutan döngü
					matris[j][k][m]= a[n]; // matris doldurma iþlemleri
					n++;	
				
				}
			}
		}
	
	
	printf(" \n ");
	//matrisi ekrana yazdýrma
	
for(j=0; j<i; j++){ 
			for(k=0; k<sutun; k++){ 
				for(m=0; m<satir; m++){ 
				printf("%c", matris[j][m][k]);	
				}
			}
		}
	
	
	
	
	}else if(islem == 'D'){
		
		for(j=0; j<i; j++){ //Kaç matrisin olduðunu tutan döngü
			for(k=0; k<sutun; k++){ //matrisin sutununu tutan döngü
				for(m=0; m<satir; m++){ //matrisin satýrýný tutan döngü
					matris[j][m][k]= a[n]; // matris doldurma iþlemleri
					n++;	
				
				}
			}
		}
	
	
	printf(" \n ");
	//matrisi ekrana yazdýrma
	
for(j=0; j<i; j++){ 
			for(k=0; k<satir; k++){ 
				for(m=0; m<sutun; m++){ 
				printf("%c", matris[j][k][m]);	
				}
			}
		}
		
	}
	
}



int main(){
	
	int str,stn;
	char cumle[50],secim;

while(true){
	
printf("\nSatir girin : ");
scanf("%d", &str);
printf("\nSutun girin : ");
scanf("%d", &stn);
getchar();
printf("encode icin E, decode icin D : ");
scanf("%c",&secim);
 getchar();
 

printf("Cumle Gir :");
gets(cumle);
Function(str,stn,cumle,secim);

}


	
	return 0;
}
