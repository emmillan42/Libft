/* //Testing the Function with some strings
#include <stdio.h>
#include <string.h>

static void test_strdup(const char *s)
{
    char    *og;
    char    *mine;

    og = strdup(s);
    mine = ft_strdup(s);

    printf("=====================================\n");
    printf("Input : \"%s\"\n", s);

    if (!og || !mine)
    {
        printf("strdup    : %p\n", (void *)og);
        printf("ft_strdup : %p\n", (void *)mine);
    }
    else
    {
        printf("strdup    : \"%s\"\n", og);
        printf("ft_strdup : \"%s\"\n", mine);

        printf("strcmp    : %d\n", strcmp(og, mine));

        printf("strdup address    : %p\n", (void *)og);
        printf("ft_strdup address : %p\n", (void *)mine);

        if (og != mine)
            printf("✓ Different addresses\n");
        else
            printf("✗ Same address\n");
    }

    free(og);
    free(mine);
}

int main(void)
{
    test_strdup("");
    test_strdup("a");
    test_strdup("Hello");
    test_strdup("Hello world !");
    test_strdup("42 Madrid");

    return (0);
} */
