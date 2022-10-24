#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define MAX 100

using namespace std;

void push(char);
int top = -1;
bool isFull();
bool isEmpty();
char tumpukan[100];
char pop();
string proses_pesan(string);
string pesan = "H**AL***O**AP***AK*A**B*****A*R****";

int main()
{

    cout << "Sebelum diubah = " << pesan << endl;
    cout << "Setelah diubnah = ";
    proses_pesan(pesan);

    return 0;
}

bool isFull(){
    if(top==MAX-1){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

void push(char x){
    if(isFull()){
        cout << "Stack penuh" << endl;
    }
    else{
        top++;
        tumpukan[top]=x;
    }
}

char pop(){
    char ch;
    if(isEmpty()){
        cout << "Stack kosong" << endl;
    }
    else{
        ch=tumpukan[top];
        tumpukan[top--];
        return ch;
}
}

string proses_pesan(string psn){
    int i = 0;
    string pst="";

    while(psn[i]!='\0'){
        if(psn[i]>='a' && psn[i]<='z' || psn[i]>='A' && psn[i]<='Z'){
            push(psn[i]);
            i++;
        }
        else if (psn[i]=='*'){
            i++;
        }

    }

    for (int i = 0; i <= top; i++){
            cout << tumpukan[i];
        }

}
