/*10 ���� (5��)
���д����Բ�����50000��������������

�����ʽ:
�����һ��һ��������n����ʾ�������Ԫ�ظ������ڶ���Ϊn����������ʾ�������Ԫ�ء�n������50000��

�����ʽ:
���Ϊһ�У���ʾ��������ÿ��������һ���ո�

��������:
5
5 4 3 2 1
�������:
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
