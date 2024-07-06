#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int c4a1=0;
int countx=0;
int counto=0;
char a1[][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};
int board(){
	printf("     1   2   3\n 1 | %c | %c | %c |\n 2 | %c | %c | %c |\n 3 | %c | %c | %c |\n\n",a1[0][0],a1[0][1],a1[0][2],a1[1][0],a1[1][1],a1[1][2],a1[2][0],a1[2][1],a1[2][2]);
}
int game(){
	srand(time(NULL));
	if(c4a1==8){
		board();
		exit(1);
	}
	if(a1[0][0]=='x'&&a1[0][1]=='x'&&a1[0][2]=='x'||a1[1][0]=='x'&&a1[1][1]=='x'&&a1[1][2]=='x'||a1[2][0]=='x'&&a1[2][1]=='x'&&a1[2][2]=='x'||a1[0][0]=='x'&&a1[1][0]=='x'&&a1[2][0]=='x'||a1[0][1]=='x'&&a1[1][1]=='x'&&a1[2][1]=='x'||a1[0][2]=='x'&&a1[1][2]=='x'&&a1[2][2]=='x'||a1[0][0]=='x'&&a1[1][1]=='x'&&a1[2][2]=='x'||a1[2][0]=='x'&&a1[1][1]=='x'&&a1[0][2]=='x'||a1[0][0]=='o'&&a1[0][1]=='o'&&a1[0][2]=='o'||a1[1][0]=='o'&&a1[1][1]=='o'&&a1[1][2]=='o'||a1[2][0]=='o'&&a1[2][1]=='o'&&a1[2][2]=='o'||a1[0][0]=='o'&&a1[1][0]=='o'&&a1[2][0]=='o'||a1[0][1]=='o'&&a1[1][1]=='o'&&a1[2][1]=='o'||a1[0][2]=='o'&&a1[1][2]=='o'&&a1[2][2]=='o'||a1[0][0]=='o'&&a1[1][1]=='o'&&a1[2][2]=='o'||a1[2][0]=='o'&&a1[1][1]=='o'&&a1[0][2]=='o'){ //i have tried so many times to make this work with a nested for loop, it never works, so this is my last option... i hate my life
		board();
		exit(1);
	}
	while(1){
		int r=rand()%3;
		int c=rand()%3;
		if(a1[r][c]!='x'&&a1[r][c]!='o'){
			a1[r][c]='o';
			c4a1+=2;
			break;
		}
	
	}
}
void main(){
	int r;
	int c;
	while(1){
		while(1){
			board();
			if(c4a1>8){
				exit(1);
			}
			printf("column: ");scanf(" %d",&c);
			printf("row: ");scanf(" %d",&r);
			c--;
			r--;
			if(a1[r][c]!='x'&&a1[r][c]!='o'&&c<3&&r<3&&r>=0&&c>=0){
				a1[r][c]='x';
				break;
			}
		}
	    	game();
	}
}
