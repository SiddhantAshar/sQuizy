#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char data_w[] = "asdasd";
	char data_r[100];
	fp = fopen("db.csv", "r");

	while(fgets(data_r, 100, fp))
	{
		printf("%s\n", data_r);
	}

	fclose(fp);

	return 0;
}
