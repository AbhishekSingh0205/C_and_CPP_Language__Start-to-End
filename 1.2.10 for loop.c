/*5
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
  1 2 3 4
   1 2 3
    1 2
     1
     */
     
     #include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=1;row<=input-1;row++){
		for(column=0;column<=input-row;column++){
			printf(" ");
		}
		for(column=1;column<=(row);column++){
			printf("%d ",column);
		}
		printf("\n");
	}
	for(row=0;row<=input-1;row++){
		for(column=0;column<=row;column++){
			printf(" ");
		}
		for(column=1;column<=(input-row);column++){
			printf("%d ",column);
		}
		printf("\n");
	}

	return 0;
}
