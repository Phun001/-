keyword:

auto	extern     short	while
break 	float	   signed	_Alignas
case	for 	   sizeof	_Alignof
char	goto	   static	_Atomic

const	if 	   struct	_Bool
continue inline     switch       _Complex
default int        union	_Imaginary
do	long	   typedef	_Generic
double  register   unsigned	_Noreturn
else    restrict   void		_Static_assert
enum	return 	   volatile     _Thread_local

/* 零散得知识点 */

"浮点数分成小数和指数部分"

"""
ox或(OX)前缀表示十六进制
0(零)前缀表示八进制

十进制格式化数字  %d(%hd short int 类型)
八进制格式化数字  %o(%ho short...)
十六进制格式化数字 %x

%#x、%#o显示不同进制前缀
"""



"_Bool布尔型，C语言中0为false, 1为true。只占一位(bit)"



short int 	long int(long)	   long long int(long long)
unsigned int(unsigned) 	  %u
C90标准:  unsigned long int(unsigned long)
	  unsigned int	unsigned short
C99标准:  unsigned long long int (unsigned long long)

long or long long 表示的数字: 0l(0L) 或 0ll(0LL)
		  无符号数字: 0lu(0LU) 或 0llu(0LLU)


overflow(上溢)	underflow(下溢)
"损失全精度的浮点数值为不完整浮点数(subnormal)"


C语言3中负数类型: float _Complex、double _Complex、long double _Complex
      ...虚数...: float _Imaginary、 double _Imaginary、long double _Imaginary

<complex.h>头文件: complex代替_Complex、imaginary代替_Imaginary

"第一次更新"
#define 定义字段(宏)
C90提供的const字段
const 定义只读字段(需要声明类型, 不可更改)

"第二次更新"
命名规范: 变量名前加(i_)前缀表示 int 类型 (us_)前缀表示 unsigned short 类型
<limit.h> 和 <float.h> 整型和浮点类型大小限制相关的详细信息

C99使用趋零截断 -3.8转换为 int 为 -3

运算符顺序: +	—  (一元)从右往左
	    =		 从右往左
	    其他	 从左往右


size_t (无符号类型)  语言定义的标准类型
typedef double real; (real就是double的别名)


求模运算符: %	(常用语控制程序流)
求模规则: 如果第一运算对象是负数，那求模结果为负，反之一位正。
求模: "a % b" 等价于 "a - (a / b) * b"

++a和a++区别？
++a为前缀(先增，在做运算)	a++为后缀(先运算，再增加)
q = 2 * ++a = 2 * (a + 1)	q = 2 * a++ = 2 * a; a = a + 1;

类型转换: 由低字节向高字节转换(隐式转换类型) 	强制类型转换(需要注意类型位数，是否能放下所有bit位数)


C99新增_Bool类型
引入<stdbool.h>头文件可以用 bool 代替 _Bool 声明布尔型变量
布尔型变量只占一个bit 	0为false 1为true

关系运算符比赋值运算符优先级高
关系运算符之间不同的优先级
高级优先级组: < <= > >=
低级优先级组: == !=

数组和字符串的一点区别:	字符串以字符 '\n' 结尾, 字符数组不是字符串

C语言不支持幂运算，但是在<math.h>头文件有pow()函数实现幂运算
幂运算函数实现方法: pow(double x, int y) x的y次幂
for(int i = 0; i < y; i++)
	x *= x;

getchar() 和 putchar()函数只处理字符
ch = getchar(); 等价于 scanf("%c", &ch);
putchar(ch);	等价于 printf("%c", ch);

头文件<ctype.h>关于字符串的一些处理和判断

if else 匹配问题: 如果没有花括号else与最近的if匹配。

逻辑运算符:
&& 	与
||	或
！	非
引入<ios646.h>头文件可以用 and 代替 &&, or 代替 ||, not 代替 ！。
!优先级最该仅次于括号， &&优先级高于||, 但两个优先级都低于关系运算符，比赋值运算符优先级高。
while(x++ < 10 && x + y < 20)
	如果x < 10 为假后面x + y < 20 不做判断，逻辑直接为假


条件表达式：x = (y < 0)? -y: y;
max = (a > b)? a: b;

if else 和 switch 的选择问题: 在一定范围有确定值决定程序流的去向用 switch.
switch 的执行速度比 if else 快！








































































