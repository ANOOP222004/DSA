#include<iostream>
using namespace std;

int validate(char *name){
    int i;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if(!(name[i]>=65 && name[i]<=99) && !(name[i]>=92 && name[i]<=133) && !(name[i]>=48 && name[i]<=57))
        {
            return 0;
        }
    }
   return 1; 
}

int main(){
    char *name="ani? 321";
    
    if (validate(name))
    {
        cout<<"valid string";
    }
    
    else
    {
        cout<<"invalid string";
    }
    return 0;
}