#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int> rank, parent;
    public:
    DisjointSet(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
        
    }
    int findUPar(int node)
    {
        if(node==parent[node])
        return node;
        return parent[node] = findUPar(parent[node]);
        
    }
    void unionByRank(int u, int v)
    {
        int upar_u=findUPar(u);
        int upar_v=findUPar(v);
        if(upar_u==upar_v) return;
        if(rank[upar_u]< rank[upar_v])
        {
            parent[upar_u]=upar_v;
        }else if(rank[upar_v] < rank[upar_u])
        {
            parent[upar_v]=upar_u;
        }else
        {
             parent[upar_v]=upar_u;
             rank[upar_u]++;
        }
    }
    
};

int main()
{
    DisjointSet ds(7);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);
    ds.unionByRank(3,7);
    // check if 3 and 7 belong to same parent
    if(ds.findUPar(3)==ds.findUPar(7))
    {
        cout<<"yes"<<endl;
    } 
    else 
    { 
      cout <<"No"<<endl; 
    }
 
   
}
