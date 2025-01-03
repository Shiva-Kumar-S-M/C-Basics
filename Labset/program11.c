#include<stdio.h>
#include<stdlib.h>

int a [50][50],n,visited[50];
int q[20],front=-1,rear=-1;
int s[20],top=-1;count=0;

void bfs(int v)
{
    int i,cur;
    visited[v]=1;
    q[++rear]=v;
    while(front!=rear)
    {
        cur=q[++front];
        for(i=1;i<=n;i++)
        {
            if((a[cur][i]==1) && (visited[i]==0)) 
            {
                q[++rear]=i;
                visited[i]=1;
                printf("%d",i);
            }
        }
    }
}

void dfs(int v)
{
    int i;
    visited[v]=1;
    s[++top]=v;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && visited[i]==0)
        {
            printf("%d",i);
            dfs(i);
        }
    }

}

int main()
{
    int ch ,start,i,j;
    printf("\n Enter the number of vertices in graph:");
    scanf("%d",&n);
    printf("\n Enter the adjacency matrix: ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
    visited[i]=0;
    printf("Enter the starting vertex:");
    scanf("%d",&start);


    printf("\n==>1.BFS:Print all nodes reachable from given starting node");
    printf("\n==>2.DFS:Print all nodes reachable from given starting node");
    printf("\n Exit");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("\n The nodes rechable from starting vertex is %d",start);
        bfs(start);
        for(i=1;i<=n;i++)
        {
        
            if(visited[i]==0)
            printf("\n vertex that is not reachable is %d",i);
        }
            break;
            case 2: printf("\n Nodes reachable from starting vertex is %d",start);
            dfs(start);
            break;
            case 3: exit(0);
            default:printf("\n Enter a valid choice");
    }
}

