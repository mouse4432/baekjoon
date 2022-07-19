#include <iostream>
#include <string>
using namespace std;

int main()
{

    string sentence;
    int cnt = 0;
   
    getline(cin, sentence);

    if(!sentence.size()==0){
        for(int i=0; i<sentence.size(); i++)
            if(sentence[i] == ' ')
                cnt++;
        cnt++;
    }
    if(sentence[0] == ' ')
        cnt--;
    if(sentence[sentence.size()-1] == ' ')
        cnt--;
    cout << cnt;
}