#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
struct classinfo
{
    vector<int> student;
    int techer,sbjcode,ttime;
    int floc,dloc;//floor location, location details
};
struct group
{
    int maxtime;
    vector<classinfo> subject;
};
vector<group> g;
int main()
{
    int i,j;
    return 0;
}
