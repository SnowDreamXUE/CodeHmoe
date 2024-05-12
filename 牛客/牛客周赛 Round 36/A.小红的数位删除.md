小红的数位删除

https://ac.nowcoder.com/acm/contest/76609/A

```cpp
#include<cstdio>
int main()
{
    char s[100];
    scanf("%s",s);
    int len=0;
    for(int i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(int i=0;i<len-3;i++)
        printf("%c",s[i]);
}
```

