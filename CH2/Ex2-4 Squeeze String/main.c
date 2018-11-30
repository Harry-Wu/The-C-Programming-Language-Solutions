/* squeeze(s1, s2)�����ַ���s1 ���κ����ַ���s2 ���ַ�ƥ����ַ�
 * ��ɾ����
 */
#include<stdio.h>
#include<math.h>

void squeeze(char s1[], char s2[])
{
    int j, k;

    for(int i = k = 0; s1[i] != '\0'; i++)
    {

        for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)  //��s2ÿһλ�Աȣ��������ͬ������s2��һ�ַ��Ա�
            ;
        if (s2[j] == '\0')  //�����s2�ַ�������ǰ�ҵ���һ���ַ���i�ͻ�+1��k++��ִ�оͲ���
        {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}

int main(void)
{
    char *leftstr[] =
    {
        "",
        "a",
        "antidisestablishmentarianism",
        "beautifications",
        "characteristically",
        "deterministically",
        "electroencephalography",
        "familiarisation",
        "gastrointestinal",
        "heterogeneousness",
        "incomprehensibility",
        "justifications",
        "knowledgeable",
        "lexicographically",
        "microarchitectures",
        "nondeterministically",
        "organizationally",
        "phenomenologically",
        "quantifications",
        "representationally",
        "straightforwardness",
        "telecommunications",
        "uncontrollability",
        "vulnerabilities",
        "wholeheartedly",
        "xylophonically", /* if there is such a word :-) */
        "youthfulness",
        "zoologically"
    };
    char *rightstr[] =
    {
    "",
    "a",
    "the",
    "quick",
    "brown",
    "dog",
    "jumps",
    "over",
    "lazy",
    "fox",
    "get",
    "rid",
    "of",
    "windows",
    "and",
    "install",
    "linux"
    };

    char buffer[32];
    size_t numlefts = sizeof leftstr / sizeof leftstr[0];
    size_t numrights = sizeof rightstr / sizeof rightstr[0];
    size_t left = 0;
    size_t right = 0;

    for(left = 0; left < numlefts; left++)
    {
        for(right = 0; right < numrights; right++)
        {
            strcpy(buffer, leftstr[left]);

            squeeze(buffer, rightstr[right]);

            printf("[%s] - [%s] = [%s]\n", leftstr[left], rightstr[right], buffer);
        }
    }
    return 0;
}
