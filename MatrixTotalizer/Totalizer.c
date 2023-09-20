#include<stdio.h>
#include<stdlib.h>

int main() {
	int** matris, l, m;
	int matris1[10][10] = { 1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10,
							1,2,3,4,5,6,7,8,9,10, };
	int i = 0, j;
	//Pointer matrisini oluþturuyoruz.
	matris = (int**)malloc(10 * sizeof(int));
	for (l = 0; l < 10; l++) {//10 döngü 10 stun olacaðý anlamýna gelir.

		matris[l] = (int*)malloc(10 * sizeof(int));

	}//10 defa 10 tane satýr tanýmlandý.matris[10][10].100 elamanlý.

	 /* for(l=0;l<3;l++)
	 for(m=0;m<3;m++){

	 printf("%d.%d eleman :",l,m);

	 scanf("%d",&matris[l][m]);//Ayný dizilerdeki mantýk ile elemanlara ulaþabiliriz.

	 }*/
	for (i = 0, l = 0; i < 10, l < 10; i++, l++) {

		for (j = 0, m = 0; j < 10, m < 10; j++, m++)
		{


			matris[l][m] = matris1[i][j];

		}
	}

	int r = 0;
	int c = 0;
	int satir = 0;
	int sutun = 0;

	static int satirtop[10], sutuntop[10];

	int k;
	int temp = 0;
	printf("toplanacak satirin uzunluk miktarini girin=");
	scanf_s("%d", &r);
	printf("toplanacak sutunun uzunluk miktarini girin=");
	scanf_s("%d", &c);
	printf("satiri baslatacaginiz indisi girin\n");
	printf("Dikkat!!!gireceginiz indis satirin uzunluk miktarindan buyuk olmamali=");
	scanf_s("%d", &satir);
	printf("sutunu baslatacaginiz indisi girin\n");
	printf("Dikkat!!!gireceginiz indis sutunun uzunluk miktarindan buyuk olmamali=");
	scanf_s("%d", &sutun);

	//satýrlarý topluyor
	i = 0;
	j = 0;
	while (i < r) {

		for (j = satir; j < c; j++) {
			temp = temp + matris[i][j];

		}
		satirtop[i] = temp;
		i++;
		temp = 0;

	}
	//sutunlarý topluyor
	i = 0;
	j = 0;
	while (j < r) {

		for (i = sutun; i < c; i++) {
			temp = temp + matris[i][j];

		}
		sutuntop[j] = temp;
		j++;
		temp = 0;

	}

	// ekrana sonucu bastýrma
	for (k = 0; k < r; k++)
	{
		printf("\n\n");
		printf("%d. satirin toplami %2d", k, satirtop[k]);

	}

	for (k = 0; k < c; k++)
	{
		printf("\n\n");
		printf("%d. sutunun toplami %2d", k, sutuntop[k]);

	}
	getch();
	return 0;
}