/*
    precedence for simple operators
    1./,*,%
    2.+,-
    3.=
    
    NOTE: Incase if same precedence operator occurs in a question then use 'ASSOCIATIVITY' rule
    for example x=4*3/6*2, then by left to right ASSOCIATIVITY rule ...
        4*3=12...12/6=2...2*2=4 
        
    NOTE: Incase if "()" occurs in question,it is solved first.

*/

#include <stdio.h>

int main()
{
    int a;
    a=4+9*10; // 9*10=90...90+4=94
    printf("%d",a);
    
    int b;
    b=4*3/6*2; // 4*3=12...12/6=2...2*2=4
    printf("\n%d",b);
    
    int c;
    c=5*2-2*3; // 5*2=10...2*3=6...10-6=4
    printf("\n%d",c);
    
    int d;
    d=5*2/2*3; // 5*2=10...10/2=5...5*3=15
    printf("\n%d",d);
    
    int e;
    e=5*(2/2)*3; // (2/2)=1...5*1=5...5*3=15
    printf("\n%d",e);
    
    int f;
    f=5+2/2*3; // 2/2=1...1*3=3...5+3=8
    printf("\n%d",f);

    return 0;
}
