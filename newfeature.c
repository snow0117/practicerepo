#include <stdio.h>
#include <unistd.h>

int main() {
	char pwd[1024];

	getcwd(pwd, sizeof(pwd));
	printf("%s\b", pwd);

	FILE *fp = fopen("pwd.log", "a");
	if (fp != NULL) {
		fprintf(fp, "%s\n", pwd);
		fclose(fp);

	}

	return 0;



}
