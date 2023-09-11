#include<iostream>
using namespace std;
void String(string name){  //This function is used to find the lowercases and uppercases characters
    int i, lc=0, uc=0; //lc= lowercase, uc= uppercase
    for(i=0; name[i]!='\0'; i++){ //in this loop i am traversing my string
        if(name[i]>='a' && name[i]<='z'){  //this condition is for the lowercase characters
            lc++;       //if this condition is true then set lc=lc+1;
        }
        else if(name[i]>='A' && name[i]<='Z'){  //this condition is for the uppercase characters
            uc++;  //if this condition is true then set uc=uc+1;
        }
    }
    cout<<"Total length= "<<i<<endl;  //printing the length of the string
    cout<<"Lowercase= "<<lc<<endl;    //printing the lowercase characters length
    cout<<"Uppercase= "<<uc<<endl;    //printing the uppercase characters length
}
int main(){
    String("AmitKumar@123");  //Calling String function
    return 0;
}