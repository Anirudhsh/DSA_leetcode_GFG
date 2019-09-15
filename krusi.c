#include <stdio.h>
#include <stdlib.h>

int G[10][10];
int p[10];
struct edge
{
    int source;
    int dest;
    int weight;
};

int sparent(int x,int y,int n);
int parent(int x,int n);

int main()
{
    int i,j,n,k,x,count;
    struct edge ed[100];
    int ans[10];
    int  temp;
    for(i=0;i<10;i++)
    {
        p[i]=i;
    }
    printf("Enter No. of vertices (Less than 10)\n");
    scanf("%d",&n);
    printf("Enter Adj Mat\n");
    
    k=0;
    //te = (struct edge *)malloc(sizeof(struct edge));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            //ed[k] = (struct edge *)malloc(sizeof(struct edge));
            scanf("%d",&G[i][j]);
            ed[k].source=i;
            ed[k].dest=j;
            ed[k].weight=G[i][j];
            k++;
        }
    }
    printf("__________________\n");
    for(i=0;i<n*n;i++)
    {
        printf("%d %d %d\n",ed[i].source,ed[i].weight,ed[i].dest);
    }
    for(i=0;i<n*n;i++)
    {
        for(j=0;j<n*n-i-1;j++)
        {
            if((ed[j].weight)>(ed[j+1].weight))
            {
                 temp = ed[j].weight;
                 ed[j].weight = ed[j+1].weight;
                 ed[j+1].weight = temp;  
                 temp = ed[j].dest;
                 ed[j].dest = ed[j+1].dest;
                 ed[j+1].dest = temp; 
                 temp = ed[j].source;
                 ed[j].source = ed[j+1].source;
                 ed[j+1].source = temp;          
            }
        }
    }
    printf("__________________\n");
    for(i=0;i<n*n;i++)
    {
        printf("%d %d %d\n",ed[i].source,ed[i].weight,ed[i].dest);
    }
    printf("__________________\n");
    i=0;
    count=0;
    while(count<n-1)
    {
        if(ed[i].source==ed[i].dest)
        {
            i++;
            continue;
        }
        else
        {
            if(!sparent(ed[i].source,ed[i].dest,n))
            {
                ans[count++]=i;
                p[ed[i].source]=ed[i].dest; 
            }
            i++;
        }
        
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d %d %d\n",ed[ans[i]].source,ed[ans[i]].weight,ed[ans[i]].dest);
    }



    return 0;

}
int parent(int x,int n)
{
    if(x==p[x])
    {
        return x;
    }
    else
    {
        return parent(p[x],n);
    }
    
}
int sparent(int x,int y,int n)
{
    int c1=parent(x,n);
    int c2=parent(y,n);
    if(c1==c2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
