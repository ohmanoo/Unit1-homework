/*10 排序 (5分)
请编写程序对不超过50000个整数递增排序。

输入格式:
输入第一行一个正整数n，表示待排序的元素个数。第二行为n个整数，表示待排序的元素。n不超过50000。

输出格式:
输出为一行，表示排序结果，每个整数后一个空格。

输入样例:
5
5 4 3 2 1
输出样例:
1 2 3 4 5 */
#include <iostream>

void qasort(int A[],int l,int r)
{
    if(l==r||l>r)return;
    int a=l;int b=r;
    int key=A[b];
    while(a<b)
    {
        while(a<b&&A[a]<=key)a++;
        if(a<b)A[b--]=A[a];
        while(a<b&&A[b]>=key)b--;
        if(a<b)A[a++]=A[b];
    }
    A[a]=key;
    qasort(A,l,a-1);
      qasort(A,a+1,r);
}

int main()
{
    int n;
    int A[50000];
    scanf("%d",&n);
    for(int i=0; i<n; i++)scanf("%d",&A[i]);
    qasort(A,0,n-1);
    for(int i=0; i<n; i++)printf("%d ",A[i]);
    return 0;
}
