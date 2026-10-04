#include<iostream>
using namespace std;
void encrypt(char *plaintext,int key)
{
    int i = 0;

    while(plaintext[i] != '\0')
    {
        if(plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            plaintext[i] = (((plaintext[i] - 'A' )+ key) % 26) + 'A';
        }
        if(plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            plaintext[i] =(((plaintext[i] - 'a') + key) % 26) + 'a';
        }
        i++;
        
    }
}

int main()
{
    char name[100];
    int key;
    cout <<"Enter your full name:";
    cin.getline(name,100);

    cout << "Enter the key:";
    cin>>key;
    encrypt(name, key);
    cout << "Name: " << name << endl;
    

    return 0;
}