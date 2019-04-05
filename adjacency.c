#include<stdio.h>
int adj[100][100];
int main (){
int vertex,edge;
printf("How many vertex?");
scanf("%d",&vertex);
printf("How many edges?");
scanf("%d",&edge);

int node1, node2;
for (int i=0; i<edge;i++){
    scanf("%d %d",&node1,&node2);
    adj[node1][node2]=1;
    adj[node2][node1]=1;
}

for (int i=0; i<vertex; i++){
    for(int j=0; j<vertex; j++){
        printf("%d\t", adj[i][j]);
    }
    printf("\n");
}

return 0;


}
