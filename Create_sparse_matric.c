#include<stdio.h>
#include<conio.h>

struct element
{
	int i,j,x;
};

struct sparse
{
	int m,n,num;
	struct element *e;
};
void create(struct sparse *s){
	int i;
	printf("Enter Dimensions");
	scanf("%d%d",&s->m,&s->n);
	printf("Enter no. of non-zero");
	scanf("%d",&s->num);
	s->e=(struct *)malloc(s->num*sizeof(struct element))
	printf("Enter all elements");
	for(i=0;i<s->num;i++){
		scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
	}	
}
int main(){
	struct sparse s;
	create(&s);
	return 0;
}
