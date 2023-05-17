#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int fc[256]={0};
    int i,min,max;
    for (i=0;a[i];i++)
    fc[a[i]]++;
    for (i=0;i<256;i++){
        if (fc[i]!=0)
        break;
    }
    min=max=i;
    for (i++;i<256;i++){
        if (fc[i]==0)
        continue;
        if (fc[i]<fc[min])
        min=i;
        if (fc[i]>fc[max])
        max=i;
    }
    printf("Min %c = {frequency} %d \nMax %c = {frequency} %d",min,fc[min],max,fc[max]);
    return 0;
}
