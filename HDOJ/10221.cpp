////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2011-09-23 20:40:21
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1022
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:212KB
//////////////////System Comment End//////////////////
#include<stdio.h>

typedef struct node{
	int data;
}Node;

typedef struct linkstack{
	Node data[10];
	int top;
}linkstack;

void push(linkstack &stack,Node &node){
	if(stack.top!=9){
		stack.top++;
		stack.data[stack.top].data=node.data;
	}
}

void del(linkstack &stack){
	if(stack.top>=0)
		stack.top--;
}

bool check(linkstack &stack,int num,Node node1[],Node node2[]){
	int i=0,j=0;
	while(stack.top>=0)
		del(stack);
	push(stack,node1[0]);
    for(i=1;i<num;i++){
		while(j<num&&stack.top>=0&&stack.data[stack.top].data==node2[j].data){
			del(stack);
			j++;
		}
		push(stack,node1[i]);
	}
    while(j<num&&stack.top>=0&&stack.data[stack.top].data==node2[j].data){
		del(stack);
		j++;
	}
	if(stack.top==-1)
		return 1;
	else
		return 0;
}

void display(linkstack &stack,int num,Node node1[],Node node2[]){
	int i=0,j=0;
	while(stack.top>=0)
		del(stack);
	push(stack,node1[i]);
	printf("in\n");
    for(i=1;i<num;i++){
		while(j<num&&stack.top>=0&&stack.data[stack.top].data==node2[j].data){
			del(stack);
			printf("out\n");
			j++;
		}
		push(stack,node1[i]);
		printf("in\n");
	}
    while(j<num&&stack.top>=0&&stack.data[stack.top].data==node2[j].data){
		del(stack);
		printf("out\n");
		j++;
	}
	printf("FINISH\n");
}

int main(){
	int m,i;
	linkstack stack;
	Node node1_1[10],node1_2[10];
	stack.top=-1;
	while(scanf("%d",&m)!=EOF){
	for(i=0;i<m;i++)
		scanf("%1d",&node1_1[i]);
	for(i=0;i<m;i++)
		scanf("%1d",&node1_2[i]);
	if(check(stack,m,node1_1,node1_2)){
		printf("Yes.\n");
		display(stack,m,node1_1,node1_2);
	}
	else
		printf("No.\nFINISH\n");
	}
	return 0;
}

