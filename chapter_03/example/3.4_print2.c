#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void) {
    system("chcp 65001");

    printf("char\t%d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("转换说明符：\n");
    char c1 = '~';
    printf("%%c: %c, %%hhd: %hhd, %%hhi: %hhi, %%hhu: %hhu, %%hho: %hho, %%hhx: %hhx\n", c1, c1, c1, c1, c1, c1);
    printf("%%hd: %hd, %%hi: %hi, %%hu: %hu, %%ho: %ho, %%hx: %hx\n", c1, c1, c1, c1, c1);
    printf("%%d: %d, %%i: %i, %%u: %u, %%o: %o, %%x: %x\n", c1, c1, c1, c1, c1);
    char c2 = 125;
    printf("%%c: %c, %%hhd: %hhd, %%hhi: %hhi, %%hhu: %hhu, %%hho: %hho, %%hhx: %hhx\n", c2, c2, c2, c2, c2, c2);
    printf("%%hd: %hd, %%hi: %hi, %%hu: %hu, %%ho: %ho, %%hx: %hx\n", c2, c2, c2, c2, c2);
    printf("%%d: %d, %%i: %i, %%u: %u, %%o: %o, %%x: %x\n", c2, c2, c2, c2, c2);
    char c3 = -128;
    printf("%%c: %c, %%hhd: %hhd, %%hhi: %hhi\n", c3, c3, c3);
    printf("%%hd: %hd, %%hi: %hi\n", c3, c3);
    printf("%%d: %d, %%i: %i\n\n", c3, c3);
    // char 可以使用的转换说明符有：
    // char:    %c %hhd %hhi
    // short:   %hd %hi
    // int:     %d %i

    printf("unsigned char\t0 ~ %d\n", UCHAR_MAX);
    printf("转换说明符：\n");
    unsigned char c4 = 255;
    printf("%%c: %c, %%hhu: %hhu, %%hho: %hho, %%hhx: %hhx\n", c4, c4, c4, c4);
    printf("%%hd: %hd, %%hi: %hi, %%hu: %hu, %%ho: %ho, %%hx: %hx\n", c4, c4, c4, c4, c4);
    printf("%%d: %d, %%i: %i, %%u: %u, %%o: %o, %%x: %x\n\n", c4, c4, c4, c4, c4);
    // unsigned char 可以使用的转换说明符有：
    // unsigned char:   %hhu %hho %hhx %hhX
    // short:           %hd %hi
    // unsigned short:  %hu %ho %hx %hX
    // int:             %d %i
    // unsigned int:    %u %o %x %X

    printf("short\t%d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("转换说明符：\n");
    short sh = 32767;
    printf("%%hd: %hd, %%hi: %hi, %%hu: %hu, %%ho: %ho, %%hx: %hx\n", sh, sh, sh, sh, sh);
    printf("%%d: %d, %%i: %i, %%u: %u, %%o: %o, %%x: %x\n", sh, sh, sh, sh, sh);
    short sh2 = -32768;
    printf("%%hd: %hd, %%hi: %hi\n", sh2, sh2);
    printf("%%d: %d, %%i: %i\n\n", sh2, sh2);
    // short 可以使用的转换说明符有：
    // short:   %hd %hi
    // int:     %d %i

    printf("unsigned short\t0 ~ %d\n", USHRT_MAX);
    printf("转换说明符：\n");
    unsigned short sh3 = 65535;
    printf("%%hu: %hu, %%ho: %ho, %%hx: %hx\n", sh3, sh3, sh3);
    printf("%%d: %d, %%i: %i, %%u: %u, %%o: %o, %%x: %x\n\n", sh3, sh3, sh3, sh3, sh3);
    // unsigned short 可以使用的转换说明符有：
    // unsigned short:  %hu %ho %hx %hX
    // int:             %d %i
    // unsigned int:    %u %o %x %X

    printf("int\t%d ~ %d\n", INT_MIN, INT_MAX);
    printf("转换说明符：\n");
    int in = 2147483647;
    printf("%%d: %d, %%i: %i, %%u: %u, %%o: %o, %%x: %x\n", in, in, in, in, in);
    int in2 = -2147483648;
    printf("%%d: %d, %%i: %i\n\n", in2, in2);
    // int 只可以使用 int 的转换说明符: %d %i

    printf("unsigned int\t0 ~ %u\n", UINT_MAX);
    printf("转换说明符：\n");
    unsigned int uin = 4294967295;
    printf("%%u: %u, %%o: %o, %%x: %x\n\n", uin, uin, uin);
    // unsigned int 只可以使用 unsigned int 的转换说明符: %u %o %x %X

    printf("long\t%ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("转换说明符：\n");
    long lo = 2147483647;
    printf("%%ld: %ld, %%li: %li, %%lu: %lu, %%lo: %lo, %%lx: %lx\n", lo, lo, lo, lo, lo);
    long lo2 = -2147483648;
    printf("%%ld: %ld, %%li: %li\n\n", lo2, lo2);
    // long 只可以使用 long 的转换说明符: %ld %li

    printf("unsigned long\t0 ~ %lu\n", ULONG_MAX);
    printf("转换说明符：\n");
    unsigned long ulo = 4294967295;
    printf("%%lu: %lu, %%lo: %lo, %%lx: %lx\n\n", ulo, ulo, ulo);
    // unsigned long 只可以使用 unsigned long 的转换说明符: %lu %lo %lx %lX

    printf("long long\t%lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
    printf("转换说明符：\n");
    long long ll = 9223372036854775807;
    printf("%%lld: %lld, %%lli: %lli, %%llu: %llu, %%llo: %llo, %%llx: %llx\n", ll, ll, ll, ll, ll);
    long long ll2 = LLONG_MIN;
    printf("%%lld: %lld, %%lli: %lli\n\n", ll2, ll2);
    // long long 只可以使用 long long 的转换说明符: %lld %lli

    printf("unsigned long long\t0 ~ %llu\n", ULLONG_MAX);
    printf("转换说明符：\n");
    unsigned long long ull = 18446744073709551615u;
    printf("%%llu: %llu, %%llo: %llo, %%llx: %llx\n\n", ull, ull, ull);
    // unsigned long long 只可以使用 unsigned long long 的转换说明符: %llu %llo %llx %llX

    printf("float\t%e ~ %e\n", FLT_MIN, FLT_MAX);   // 如果用 %f 打印 FLT_MIN，将会现实 0.000000
    printf("转换说明符：\n");
    float f = 3.402823e+38f;
    printf("%%f: %f, %%F: %F\n%%e: %e, %%E: %E\n%%g: %g, %%G: %G\n%%a: %a, %%A: %A\n", f, f, f, f, f, f, f, f);
    printf("%%lf: %lf, %%lF: %lF\n%%le: %e, %%lE: %lE\n%%lg: %lg, %%lG: %lG\n%%la: %la, %%lA: %lA\n", f, f, f, f, f, f,
           f, f);
    float f2 = 123.321f;
    printf("%%g: %g\n\n", f2);

    printf("double\t%e ~ %e\n", DBL_MIN, DBL_MAX);
    printf("转换说明符：\n");
    double d = 1.797693e+308;
    printf("%%f: %f, %%F: %F\n%%e: %e, %%E: %E\n%%g: %g, %%G: %G\n%%a: %a, %%A: %A\n", d, d, d, d, d, d, d, d);
    printf("%%lf: %lf, %%lF: %lF\n%%le: %le, %%lE: %lE\n%%lg: %lg, %%lG: %lG\n%%la: %la, %%lA: %lA\n\n", d, d, d, d, d,
           d, d, d);
    // float/double 可以使用的转换说明符: %f %F %e %E %g %G %a %A %lf %lF %le %lE %lg %lG %la %lA

    printf("long double\t%Le ~ %Le\n", LDBL_MIN, LDBL_MAX);
    // long double 可以使用的转换说明符: %Lf %LF %Le %LE %Lg %LG %La %LA

    return 0;
}