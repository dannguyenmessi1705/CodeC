#include<stdio.h>
#include<math.h>
main(){
	int n;
	scanf("%d", &n);
	int a[n][n], s[n], f[n];
	//nhap ma tran
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		int dem = 0, p = 0;
		//kiem tra so nguyen to
		for(int j = 0; j < n; j++){
			if(a[i][j] == 2 || a[i][j] == 3) {
				dem++;
				s[p] = a[i][j];
				p++;
			}
			else if(a[i][j] > 3){
				int check = 1;
				for(int g = 2; g <= sqrt(a[i][j]); g++){
					if(a[i][j] % g == 0){
						check = 0;
						break;
					}
				}
				//luu so nguyen to vao mang s
				if(check == 1){
					dem++;
					s[p] = a[i][j];
					p++;
				}
			}
		}
		//so sanh so so nguyen to cua hang sau voi so so nguyen to lon nhat cua cac hang truoc
		if(dem > max){
			max = dem;
			f[0] = i + 1; // gan thu tu hang co nhieu so nguyen to nhat vao f[0]
			for(int y = 1; y <= max; y++){
				f[y] = s[y-1]; // gan cac gia tri tu mang s sang mang f tu vi tri 1
			}
		}
	}
	printf("%d\n", f[0]);
	for(int i = 1; i <= max; i++){
		printf("%d ", f[i]);
	}
}