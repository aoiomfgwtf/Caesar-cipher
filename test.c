#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "Russian");
    int i = 1;
    char n;
    printf("Пограмма позволяет использовать Шифр Цезаря для шифрования текста.\nПосле того, как Вы введете текст программа покажет зашифрованный вариант. \nПожалуйста введи текст на английском языке для шифрования одной строкой:\n");
    scanf("%c", &n);
    while (n !=10)
    {
       if (n >= 'a' && n <= 'z')
        {
           n = n + i;
                if (n < 'a')
                    n += 26;
                if (n = 'z')
                    n = 26;                    
        }
       else
            if (n >= 'A' && n <= 'Z')
        {
                n = n + i;
                    if (n < 'А')
                        n += 26;
        }
        printf("%c", n); 
        scanf("%c", &n);
    }
        return 0;        
        
}