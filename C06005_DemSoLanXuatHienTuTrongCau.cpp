#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Node {
	char data[50];
	int counter;
};
void AddorCount(char *tu, struct Node *cau,int *size) {
	int i;
	bool tonTai = false;
	for(i = 0; i < *size; i++) {
		if(strcmp(tu, cau[i].data) == 0) {
			cau[i].counter++;
			tonTai = true;
			break;
		}
	}
	if(!tonTai) {
		strcpy(cau[*size].data, tu);
		cau[*size].counter = 1;
		(*size) ++;
	}
}

void Tach(char *s, struct Node *cau, int *size) {
    char s1[1000];
    for(int i=0;i<strlen(s);i++){
        if((int)s[i]>=65 && (int)s[i]<=90) s1[i]=s[i]+32;
        else s1[i]=s[i];
    }
	char *p;
	const char* tach = " \n";
	for(p = strtok(s1, tach); p != NULL; p = strtok(NULL, tach)) {
		AddorCount(p, cau, size);
	}
}

void Xuat(struct Node *cau, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%s %d\n", cau[i].data, cau[i].counter);
	}
}

int main(){
	char s[1000], s1[1000];
	fgets(s, 999, stdin);
	struct Node cau[200];
	int size = 0;
	Tach(s, cau, &size);
	Xuat(cau, size);
	return 0;
}
