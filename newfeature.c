#include <stdio.h>
#include <unistd.h>

int main() {
	// [v1.1] print and log current working dir.
	char pwd[1024]

	getcwd(pwd, sizeof(pwd));
	print("%s\n", pwd)
	

	FILE *fp = fopen("pwd.log", "a");
	if (fp != NULL) {
		fprintf(fp, "%s\n", pwd);
	}

	return 0;

}
