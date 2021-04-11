#include <stdio.h>
#include <string.h>

int WordCount(char str[255])
{
	int word = 0;
		for(int t=0;t<strlen(str);t++){
			if(str[t] ==' ' && str[t+1] != ' '|| str[t] != ' ' && str[t]=='\n') {
				word++;
			}
		}
	return word;
}
int CharacterCount(char str[255])
{
	int tam,t;
	int i = strlen(str);
		for(t=0,tam=0;t<strlen(str);t++){
			if(str[t] == ' ') {
				tam--;
			}else{
				tam++;
			}
		}
	return tam;
}
void main () {

	//khai bao
	FILE *fo;
	int wc,cc,i=0;
	char c,tenfile[255],str[255];
	//main
	printf("Vui long dat file cung thu muc voi file nay! \n");
 	printf("Nhap ten file(.txt) dien day du duoi: ");
 	scanf("%s",tenfile);
 	
 	fo = fopen(tenfile, "r");
	while((c = fgetc(fo)) != EOF)  {
		*(str+i)=c;
		i++;	
	}
	wc = WordCount(str);
	printf("so tu trong file: %d \n",wc);
	
	cc = CharacterCount(str);
	printf("so ky tu trong file: %d \n",cc);

 	fclose(fo);
 	
}
