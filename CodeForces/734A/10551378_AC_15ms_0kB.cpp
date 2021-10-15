#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    char ch[n];

    scanf("%s", ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]=='A')
            count1++;
        else if(ch[i]=='D')
            count2++;
    }
    if(count1>count2)
        printf("Anton\n");
    else if(count2>count1)
        printf("Danik\n");
    else if(count1==count2)
        printf("Friendship\n");
}
