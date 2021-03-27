#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{	
	FILE *f = fopen(argv[1], "r");
	if(f == NULL)
	{
		return 1;
	}
	else {
		FILE *wf = fopen("output.txt", "a+");
		char buff[255];
		char d[20];
		int check = 0;
		fgets(buff, 255, f);
		while((fgets(buff, 255, f) != NULL)){
			if (strlen(buff) == 1) continue;
			memcpy(d, buff+21, 3);
			d[3] = '\0';
			if(!strcmp(d, "sys"))
			{
				printf("%s\n", buff);
				check ++;
				if(check == 2)
				{
					break;
				}
				else{
					continue;
				}
			}
			if(check == 1)
			{
			//if syscall
			memcpy(d, buff+11, 7);
			d[7] = buff[18];
			d[8] = '\n';
			d[9] = '\0';
			printf("%s\n", d);
			fputs(d, wf);
			}
		}
		return 0;
	}
}