#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    string sentence;
    int cnt = 0;
   
    getline (cin, sentence);
    if(!sentence.size()==0){
        for(int i=1; i<sentence.size()-1; i++)
            if(sentence[i] == ' ')
                cnt++;
        cnt++;
    }
    
    cout << cnt;
}