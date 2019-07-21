//implementing Head And Tail Recursion
#include<bits/stdc++.h>

void head(int n)
{
  if(n>0)
  {
    //head statements here
    cout<<"Executing "<<n<<" \n";
    head(n-1);
  }
}

void tail(int n)
{
  if(n>0)
  {
    tail(n-1);
    //head statements here
    cout<<"Executing "<<n<<" \n";
  }
}

int main()
{
  head(5);
  tail(5);
  return 0;
}
