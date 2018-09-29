#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
struct classinfo
{
    vector<int> student;
    int teacher,sbjcode,ttime;
    int floc,dloc;//floor location, location details
};
struct group
{
    int maxtime;
    vector<classinfo> subject;
};
struct submit
{
    vector<int> sbjcode;
};
submit s2[100];
submit s3[100];
vector<group> g2;
vector<group> g3;
int main()
{
    int i,j;
    //scan submit
    //scan classinfo_teacher, sbjcpde,ttime,floc,dloc
    return 0;
}
