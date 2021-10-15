#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "Russian");
    int i;
    char n;
    printf("Программа позволяет расшифровать текст, зашифрованный при помощи Шифра Цезаря.\nСначала необходимо ввести ключ шифрования( по умолчанию это 1)\nДалее введите зашифрованный текст:\n");
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
                    if (n < 'А')
                        n -= 26;
        }
        printf("%c", n); 
        scanf("%c", &n);
    }
        return 0;        
        
}