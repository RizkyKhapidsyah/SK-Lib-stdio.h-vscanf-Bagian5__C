#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2022
*/

int call_vscanf(char* format, ...) {
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vscanf(format, arglist);
    va_end(arglist);
    return result;
}

int call_vwscanf(wchar_t* format, ...) {
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vwscanf(format, arglist);
    va_end(arglist);
    return result;
}

int main() {
    int   i, result;
    float fp;
    char  c, s[81];
    wchar_t wc, ws[81];
    result = call_vscanf("%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws);
    printf("The number of fields input is %d\n", result);
    printf("The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
    result = call_vwscanf(L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws);
    wprintf(L"The number of fields input is %d\n", result);
    wprintf(L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);

    _getch();
    return 0;
}