#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "Russian");
    int i;
    char n;
    printf("��������� ��������� ������������ �����, ������������� ��� ������ ����� ������.\n������� ���������� ������ ���� ����������( �� ��������� ��� 1)\n����� ������� ������������� �����:\n");
    scanf("%i %c", &i, &n);
    while (n !=10)
    {
       if (n >= 'a' && n <= 'z')
        {
           n = n - i;
                if (n < 'a')
                    n -= 26;                   
        }
       else
            if (n >= 'A' && n <= 'Z')
        {
                n = n - i;
                    if (n < '�')
                        n -= 26;
        }
        printf("%c", n); 
        scanf("%c", &n);
    }
        return 0;        
        
}