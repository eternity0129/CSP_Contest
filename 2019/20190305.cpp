#include<iostream>
  #include<cstdio>
  #include<cstring>
  #include<algorithm>
  #define ll long long
  using namespace std;
  const int amn=1e4+5;
  const int inf=9e7;
  ll ans[amn];
 int typ[amn],e[amn][amn],k,n,m;
 int main()
 {
     cin>>n>>m>>k;
     for(int i=1; i<=n; i++)
     {
         for(int j=1; j<=n; j++)
        {
             if(i==j)e[i][j]=0;
             else e[i][j]=inf;
         }
     }
     for(int i=1; i<=n; i++)
     {
         int tt;
         cin>>tt;
         typ[i]=tt;
     }
     int u,v,w;
     for(int i=1; i<=m; i++)
     {
         cin>>u>>v>>w;
         e[u][v]=w;
         e[v][u]=w;
     }
     for(int c=1; c<=n; c++)
     {
         for(int i=1; i<=n; i++)
         {
             for(int j=1; j<=n; j++)
                 if(e[i][k]<inf&&e[k][j]<inf&&e[i][j]>e[i][c]+e[c][j])
                     e[i][j]=e[i][c]+e[c][j];
         }
     }
 //    cout<<endl<<endl;///�鿴ͼ�����·��(������)
 //    for(int i=1; i<=n; i++)
 //    {
 //        for(int j=1; j<=n; j++)
 //        {
 //            printf("%10d",e[i][j]);
 //        }
 //        cout<<endl<<endl;
 //    }
     for(int i=1; i<=n; i++)
     {
         int top=0;
         memset(ans,0,sizeof(ans));
         for(int j=1; j<=n; j++)
         {
             if(e[i][j]<inf&&typ[j])
             {
                 ans[top++]=e[i][j];
             }
         }
         sort(ans,ans+top);
         ll sum=0;
         for(int i=0; i<k&&i<top; i++)
         {
             sum+=ans[i];
         }
         cout<<sum<<endl;
     }
     return 0;
 }
 

