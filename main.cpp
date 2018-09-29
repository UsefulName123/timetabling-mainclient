#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
struct classinfo
{
    int snum;
    int teacher,sbjcode,ttime;
    int floc,dloc;
};
struct studentclass
{
    vector<int> student;
    int teacher,sbjcode,ttime;
    int floc,dloc;//floor location, location details
};
struct group
{
    int maxtime;
    vector<studentclass> subject;
};
struct submit
{
    vector<int> sbjcode;
};
submit s2[100];
submit s3[100];
classinfo c[100];
vector<group> g2;
vector<group> g3;
int sn;//subjectnumber
bool cdevide(classinfo x,classinfo y)
{
    if(x.snum/20>y.snum/20) return true;
    else if(x.snum/20<y.snum/20) return false;
    else if(x.ttime>y.ttime) return true;
    else return false;
}
int main()
{
    int i,j;
    //scan submit
    //scan classinfo_teacher, sbjcpde,ttime,floc,dloc
    sort(c,c+sn,cdevide);
    return 0;
}
