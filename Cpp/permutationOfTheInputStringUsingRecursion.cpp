#include <iostream>
#include <string>
using namespace std;
void helper(string input, string output)
{
    if(input[0]=='\0')
    {
    	cout<<output<<endl;
        return ;
    }
    
    for(int i=0;i<=output.length();i++){
        helper(input.substr(1),output.substr(0,i)+input[0]+output.substr(i));
    }
}

void printPermutations(string input){
    helper(input,"");
    
}

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}