#include <iostream>
#include <ctype.h>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;
void guess(); //checks the guessed character
int main()
{
    guess();
    return 0;
}
void guess()
{
    int i=0,l=0,x=9;
    char word[10],ch;
    cout<<"Enter the Word: ";
    cin>>word;
    l=strlen(word);
    char g[l];
    for(i=0;i<l;i++)
        {
            g[i]='-'; //initializes the guess() array with'-' symbols.
            cout<<g[i];
        }
    a:
        cout<<endl<<"\nGuess the word: ";
        cin>>ch;
        for(i=0;word[i]!='\0';i++)
        {
            if(word[i]==ch) //check if input character is present in the word.
            {
                g[i]=ch; //appearance of character in the word at position i.
            }
            cout<<g[i];
        }
        cout<<"\nYou have "<<x<<" chances available";
        x--;
        if(x==-1) //works till 10 chances
            {
                cout<<"\n\nSorry, Better luck next time.\n\n";
                exit(0);
            }
        if(strcmp(word,g)==0)
        {
            cout<<endl<<"\n\nYou win !!!\n\n";
            exit(0);
        }
        else
            goto a;
}

