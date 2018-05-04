#include <iostream>

using namespace std;

int v[10000];

int cautareBinara(int n, int searchterm)
{int start=0,mid,endt=n;
    sort(v,v+n);
    while(true)
    {
        mid=(endt-start)/2;
        if(searchterm=v[mid])
        {
            return mid;
            break;
        }
        else if(searchterm>v[mid])
        {
            start=mid;
            endt=n;
        }
        else
        {
            endt=mid;
            start=n;
        }
    }
}

int main()
{

    cautareBinara(50);
    return 0;
}
