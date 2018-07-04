#include <stdio.h>
#include <time.h> 
/*
  有9个方格 三个一组构成一个数字，两个数相加等于第三个数，这9个数从1~9中选取
  且每个数字只能使用一次使得等式成立  例如 173+286=459   
  请问一种有多少中合理的组合？ 
*/ 

int main(int argc, char *argv[])
{
	int a[10],i,total=0;   // a[1]~a[9] 表示这9个数 
	double start,end;
	start = clock();
	for(a[1]=1;a[1]<=9;++a[1])  // 第一个数的百位
	for(a[2]=1;a[2]<=9;++a[2])  // 第一个数的十位 
	for(a[3]=1;a[3]<=9;++a[3])  // 第一个数的个位
	for(a[4]=1;a[4]<=9;++a[4])  // 第二个数的百位
	for(a[5]=1;a[5]<=9;++a[5])  // 第二个数的十位
	for(a[6]=1;a[6]<=9;++a[6])  // 第二个数的个位
	for(a[7]=1;a[7]<=9;++a[7])  // 第三个数的百位
	for(a[8]=1;a[8]<=9;++a[8])  // 第三个数的十位
	for(a[9]=1;a[9]<=9;++a[9])  // 第三个数的个位
	{   // 接下来判断每一位上的数互不相等
		if(a[1]!=a[2] && a[1]!=a[3] && a[1]!=a[4] && a[1]!=a[5] && a[1]!=a[6] && a[1]!=a[7] && a[1]!=a[8] && a[1]!=a[9]
		              && a[2]!=a[3] && a[2]!=a[4] && a[2]!=a[5] && a[2]!=a[6] && a[2]!=a[7] && a[2]!=a[8] && a[2]!=a[9]
		                            && a[3]!=a[4] && a[3]!=a[5] && a[3]!=a[6] && a[3]!=a[7] && a[3]!=a[8] && a[3]!=a[9]
                                                  && a[4]!=a[5] && a[4]!=a[6] && a[4]!=a[7] && a[4]!=a[8] && a[4]!=a[9]
                                                                && a[5]!=a[6] && a[5]!=a[7] && a[5]!=a[8] && a[5]!=a[9]
                                                         				      && a[6]!=a[7] && a[6]!=a[8] && a[6]!=a[9]
                                                         				      			    && a[7]!=a[8] && a[7]!=a[9]                                                     				      			                  && a[8]!=a[9]
			
			&& a[1]*100+a[2]*10+a[3] + a[4]*100+a[5]*10+a[6] == a[7]*100+a[8]*10+a[9] )
			{
				total++;
				printf("%d%d%d+%d%d%d=%d%d%d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
			} 	
	} 
	end = clock();
	printf("\ntotal=%d\n\n",total/2);   // 因为输出的有重复的 比如 173+286=459 与 286+173=459是一样的 
	printf("total cost time:%lfs\n",(end-start)/1000);
	return 0;
}
