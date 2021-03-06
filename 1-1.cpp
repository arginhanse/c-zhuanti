/*
本题要求实现一个对数组进行循环左移的简单函数：
一个数组a中存有n（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向左移m（≥0）个位置，
即将a中的数据由（a0 a1 ⋯ an−1）变换为（am ⋯ an−1 a0 a1 ⋯ am−1（最前面的m个数循环移至最后面的m个位置。
如果还需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？
输入格式:
输入第1行给出正整数n（≤100）和整数m（≥0）；第2行给出n个整数，其间以空格分隔。

输出格式:
在一行中输出循环左移m位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

输入样例：
8 3
1 2 3 4 5 6 7 8

输出样例：
4 5 6 7 8 1 2 3
*/

#include <stdio.h>

int main() {
    int n,m,i;
    scanf("%d ",&n);
    scanf("%d\n",&m);
    int a[200];
    for (i=0;i<=n;i++) {
        scanf("%d",&a[i]);
    }

    for (i = 0;i<n;i++) {
        a[100+i] = a[(m+i)%n];
    }
    
    for (i=0;i<n-1;i++) {
        printf("%d ",a[100+i]);
    }
    printf("%d",a[100+n-1]);
    return 0;
}
