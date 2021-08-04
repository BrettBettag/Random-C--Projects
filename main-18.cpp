#include <iostream>

using namespace std;

int main()
{ int i,j; for(i=1;i<=4;i++) { for(j=1;j<=10;j++)
cout<<'*';
cout<<endl; }
return 0;

#include<iostream>
using namespace std;
int main()
{ int i,j; for(i=1;i<=5;i++) { for(j=1;j<=i;j++)
cout<<'*';
cout<<endl; }
return 0;

#include<iostream>
using namespace std;
int main()
{ int i,j,k; for(i=1;i<=5;i++) { for(j=5;j>i;j--)
cout<<' '; for(k=1;k<=i;k++)
cout<<'*';
cout<<endl; }
return 0; }

#include<iostream>
using namespace std;
int main()
{ int i,j,k; for(i=1;i<=5;i++) { for(j=5;j>i;j--)
cout<<' '; for(k=1;k<2*i;k++)
cout<<'*';
cout<<endl; }
return 0; }

#include<iostream>
using namespace std;
int main()
{ int i,j,k; for(i=1;i<=5;i++) { for(j=5;j>i;j--)
cout<<' '; for(k=1;k<2*i;k++)
cout<<i;
cout<<endl; }
return 0; }

#include<iostream>
using namespace std;
int main()
{ int i,j,k,l; for(i=1;i<=5;i++) { for(j=5;j>i;j--)
cout<<' '; for(k=i;k>=1;k--)
cout<<k; for(l=2;l<=i;l++)
cout<<l;
cout<<endl; }

return 0; }
