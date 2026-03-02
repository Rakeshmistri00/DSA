#include<stdio.h>
#include<ctype.h>
    int p(char c){
        if(c=='+'||c=='-')return 1;
        if(c=='*'||c=='/')return 2;
        if(c=='^')return 3;
        return 0;
    }
    int main(){
            char a[100],b[100],s[100];
            int t=-1,i,j=0;
            printf("Enter Expressiion:");
            scanf("%s",&a);
                for(i=0;a[i]!='\0';i++){
                    if(isalnum(a[i])){
                        b[j++]=a[i];
                    }
                    else if(a[i]=='('){
                        s[j++]=a[i];
                    }
                    else if(a[i]==')'){
                        while(s[t]!='('){
                            b[j++]=s[t--];
                        }
                        t--;
                    }
                    else{
                        while(t!=-1&&p(s[t])>=p(a[i])){
                            b[j++]=s[t--];
                        }
                        s[++t]==a[i];
                    }
                }
                while(t!=-1){
                    b[j++]=s[t--];
                }
                b[j]='\0';
                printf("post fix:%s\n",b);
                return 0;
    }
