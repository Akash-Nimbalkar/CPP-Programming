#include <iostream>
using namespace std;

int main()
{
    string str = "How      are you my world";
    int vowel = 0, cons = 0, word = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] == ' ' || str[i] == '\t')
        {
            word++;
        }
        else
        {
            cons++;
        }
    }

    cout << "No. of vowels " << vowel << endl;
    cout << "No. of consonents " << cons << endl;
    cout << "No. of words " << word + 1 << endl;

    return 0;
}