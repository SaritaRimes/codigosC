#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &c)
{
    unsigned ai = 0, bi = 0, ci = 0;
    while(bi != b.size() && ci != c.size())
    {
        if(b[bi] == c[ci])
        {
            a[ai++] = b[bi++];
            a[ai++] = c[ci++];
        }
        else
        {
            if(b[bi] < c[ci])
                a[ai++] = b[bi++];
            else
                a[ai++] = c[ci++];
        }
    }
    while(bi != b.size())
        a[ai++] = b[bi++];
    while(ci != c.size())
        a[ai++] = c[ci++];
}

void merge_sort(vector<int> &a, int *numcomp)
{
    if(a.size() <= 1)
        return;
    int k = a.size()/2;
    ++(*numcomp);
    vector<int> b = vector<int>(a.begin(),a.begin()+k);
    vector<int> c = vector<int>(a.begin()+k,a.end());
    merge_sort(b, numcomp);
    merge_sort(c, numcomp);
    merge(a, b, c);
}

int main()
{
    int i, n = 0;
    vector<int> v = {2,6,7,9,0,1};
    merge_sort(v, &n);

    cout << "o numero de comparacoes eh n = " << n << endl;
    for(i = 0; i < 6; ++i)
        cout << v[i] << " ";
}
