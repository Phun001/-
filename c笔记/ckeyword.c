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
