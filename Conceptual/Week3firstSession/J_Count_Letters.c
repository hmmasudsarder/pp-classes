#include<stdio.h>
int main (){
    char s[1000001];
    scanf("%s", s);
    int freq[26] = {0};
    int lent = strlen(s);
    for (int i = 0; i < lent; i++)
    {
        int inx = s[i] -97;
        freq[inx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
           printf("%c : %d\n", i+97, freq[i]);
        }
        
    }
    
    return 0;
}