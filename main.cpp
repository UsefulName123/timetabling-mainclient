#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string.h>
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
classinfo c2[100];
classinfo c3[100];
vector<group> g2;
vector<group> g3;
int sn2,sn3,stn2,stn3;//subjectnumber
bool cdevide(classinfo x,classinfo y)
{
    if(x.snum/20>y.snum/20) return true;
    else if(x.snum/20<y.snum/20) return false;
    else if(x.ttime>y.ttime) return true;
    else if(x.snum>y.snum) return true;
    else return false;
}
void devide4(int grade)
{
    int i,j,n,s=-1,f;
    group t1,t2,t3,t4;
    if(grade==2)
    {
        for(i=0;i<sn2;i++)
        {
            if((c2[i].snum+19)/4==cnumber&&s==-1) s=i;
            if((c2[i].snum+19)/4<cnumber)
            {
                f=i;
                break;
            }
        }
        for(i=s;i<f;i+=4)
        {
            memset(&t1,0,sizeof(struct group));
            memset(&t2,0,sizeof(struct group));
            memset(&t3,0,sizeof(struct group));
            memset(&t4,0,sizeof(struct group));
            for(i=1;i<=stn2;i++)
            n=g2.size();
        }
    }
}
int main()
{
    int i,j;
    //scan submit
    //scan classinfo_teacher, sbjcpde,ttime,floc,dloc
    //scan stn2_2gradestudent,stn3_3gradestudent,sn2_2gradesubject,sn3_3gradesubject
    sort(c2,c2+sn,cdevide);
    sort(c3,c3+sn,cdevide);
    devide4(2);
    devide3(2);
    devide2(2);
    devide1(2);
    devide4(3);
    devide3(3);
    devide2(3);
    devide1(3);
    return 0;
}
