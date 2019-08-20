#include <stdio.h>
int main()
{
    char author[30], lang[30], url[30];
    fgets(author);
    printf("author: %s\n", author);
    fgets(lang);
    printf("lang: %s\n", lang);
    fgets(url);
    printf("url: %s\n", url);

    return 0;
}