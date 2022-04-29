#include <stdio.h>

// 取名规则为 log+数据类型 取首字母组合 
// 封装整形输出函数
void li(int n){	
	printf("%d\n",n); 
}

// 封装字符串输出函数
void lc(char s[]){	
	printf("%s\n",s); 
}

// 封装数组输出函数
void la(int a[],int l){	
	for(int i = 0;i<l;i++){
		printf("%d,",*a);
		a++;
	} 
}
