#include <stdio.h>
int main()
{
	printf("你好 啦啦啦啦啦啦\n");
	printf("你担心你的体重超标吗?\n");
	printf("来，我们检查一下\n");
	printf("请输入你的体重，单位是 kg: ");
	
	float weight = 0.0;
	scanf("%f", &weight);
	printf("你的体重为: %.2f 千克/kg\n", weight);
	return 0;
}
