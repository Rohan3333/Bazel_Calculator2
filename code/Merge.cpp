#include"Merge.h"

int merge(int n1,int n2, char s)
{
    if(s=='+')
    {
        return add(n1,n2);
        //return n1+n2;
    }
    else if(s=='-')
    {
        return subs(n1,n2);
        //return n1-n2;
    }
    else if(s=='*')
    {
        return multi(n1,n2);
        //return n1*n2;
    }
    else{
        return divi(n1,n2);
        //return n1/n2;
    }
}
