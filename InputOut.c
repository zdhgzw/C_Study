#include <stdio.h>

#define N 1

/** printf() 
 *   
 *  记住 ： 只有 %d 能输出有符号数
 *  %x  %o  输出都是无符号数
 * 
 * 
 *  输出位数：
 *  %02x   不足两位，前面补零
 * 
 *  格式控制符完整形式
 * 
 *  %[flag][width][.precision]type
 *  
 *  flag: 标志字符
 *  0: + width 宽度不足，左侧补0
 * 
 *  -：表示左对齐。如果没有，就按照默认的对齐方式，默认一般为右对齐
 *  #：加上进制前缀
 *  空格：用于整数或者小数，输出值为正时冠以空格，为负时冠以负号
 * 
 *  width: 最小输出宽度，默认是右对齐，所以输出结果宽度小时是在左侧补空格
 *  
 *  .precision:
 *  1) 确定小数的输出位数：小数部分位数小于precision时，后面补0；大于时四舍五入，然后丢掉后面的
 *     注意 小数点 . 也算位数
 * 
 *  2) ！！！ 用于整数时：precision表示最小输出宽度，但和 width不同的是，在左侧补的是 0       ！！！！
 *     当
 *  3) 用于字符串：precision 表示最大输出长度，输出结果大会被截取
 * 
 * 
 *  type: 输出类型
 *  %d  %u  %ld %x %o 
 * 
 * 
 * **/
#if N == 1
int main(){
    int a =  ~10;        // 
    printf("%#x\n", a);     // 0x
    printf("%#o\n", a);     // 0.. 



    char c1 = -1;
	printf("%02x\n", c1); // ffffffff
 
	char c2 = 250;
	printf("%02x\n", c2); // fffffffa
 
	printf("heheda\n");
 
	unsigned char c3 = -1;
	printf("%02x\n", c3); // ff
 
	unsigned char c4 = 250;
	printf("%02x\n", c4); // fa

    int i = 1;
    printf("%4.2x\n", i);  // 同时作用，


    float f = 4.6565;
    printf("%08.3f\n", f);   // 0004.656  . 
    return 0;
}
#endif

#if N == 2
int main(){

    return 0;
}
#endif
