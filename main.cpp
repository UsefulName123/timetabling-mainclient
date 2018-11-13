#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;
FILE*fin=fopen("input.txt", "r");
FILE*fout=fopen("output.txt", "w");
struct classinfo
{
    int stn;
    int ccode,student[100];
    int lx,ly,lz;
    int cmax;
};
struct group
{
    struct classinfo gclass[100];
    int schk[100];
    int gcn;
    int gmax;
};
int gn;
int subn;
classinfo sub[100];
group a[100];
int main()
{
    int i,n,j,t,x,y,z,k;
    fscanf(fin,"%d",&subn);
    for(i=0;i<=99;i++)
    {
        a[i].gcn=0;
        a[i].gmax=0;
    }
    for(i=1;i<=subn;i++)
    {
        fscanf(fin,"%d",&t);//classcode
        fscanf(fin,"%d",&n);//studentnumber
        fscanf(fin,"%d %d %d",&x,&y,&z);
        fscanf(fin,"%d",&sub[i].cmax);
        sub[i].ccode=t;
        sub[i].stn=n;
        for(j=1;j<=n;j++)
        {
            fscanf(fin,"%d",&sub[i].student[j]);
        }
    }
    for(i=1;i<=subn;i++)
    {
        printf("%d\n",sub[i].cmax);
        if(sub[i].stn<=20)
        {
            for(j=1;j<=90;j++)
            {
                if(a[j].gcn==0)
                {
                    a[j].gcn++;
                    a[j].gclass[a[j].gcn]=sub[i];
                    break;
                }
            }
        }
        else
        {
            a[i/4*4+4].gclass[++(a[i/4*4+4].gcn)]=sub[i];
            a[i/4*4+4].gcn++;
            if(a[i/4*4+4].gmax<sub[i].cmax)
            {
                a[i/4*4+4].gmax=sub[i].cmax;
            }
            a[i/4*4+1].gclass[++(a[i/4*4+1].gcn)]=sub[i];
            a[i/4*4+1].gcn++;
            if(a[i/4*4+1].gmax<sub[i].cmax)
            {
                a[i/4*4+1].gmax=sub[i].cmax;
            }
            a[i/4*4+2].gclass[++(a[i/4*4+2].gcn)]=sub[i];
            a[i/4*4+2].gcn++;
            if(a[i/4*4+2].gmax<sub[i].cmax)
            {
                a[i/4*4+2].gmax=sub[i].cmax;
            }
            a[i/4*4+3].gclass[++(a[i/4*4+3].gcn)]=sub[i];
            a[i/4*4+3].gcn++;
            if(a[i/4*4+3].gmax<sub[i].cmax)
            {
                a[i/4*4+3].gmax=sub[i].cmax;
            }
        }
    }
    i=1;
    while(a[i].gcn!=0)
    {
        fprintf(fout,"%d %d\n",i, a[i].gcn);
        for(j=1;j<=a[i].gcn;j++)
        {
            fprintf(fout,"%d %d %d %d %d\n",a[i].gclass[j].lz,a[i].gclass[j].lx,a[i].gclass[j].ly,a[i].gclass[j].cmax);
            if(a[i].gcn!=1)
            {
                for(k=1;k<=a[i].gclass[j].stn;k++)
                {
                    if(a[i].gclass[j].student[k]>((a[i].gcn-1))*20&&a[i].gclass[j].student[k]<=((a[i].gcn))*20)
                    {
                        fprintf(fout,"%d ",k);
                    }
                }
                fprintf(fout,"\n");
            }
        }
        i++;
    }
    fprintf(fout,"%d ",i);
}
