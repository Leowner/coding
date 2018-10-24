#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node* next;
} Node;


int main (){
    int n;
    while (scanf("%d",&n) != EOF){
    	Node* head =(Node*) malloc( sizeof(Node));  
		Node* last = head; 
		last -> next = NULL; 
		int i,j,m, exit1; 
		for(i = 1; i <= n; i++ ){
			if ( i<=n-1){
			
			scanf("%d", &last -> num);
			last -> next = malloc(sizeof(Node));
			last = last -> next; 
			last -> next = NULL;		
			}
			if (i == n){
				scanf("%d", &last ->num);
				last -> next = NULL;
			}
		}
		
		
			Node* da;
    		for(j = 1; j < n; j++){
				for( da = head; da -> next != NULL; da = da ->next){
    				exit1 = 1;
					if( da -> num  >  da -> next -> num ){
    					exit1 = 0;
						m = da -> num;
						da ->num = da -> next ->num ;	
						da -> next -> num = m;    				
					}	
    			}
				if(exit1 == 1){
						break;
					} 		
    		} 
		printf("%d\n",j-1);
		}	
		
	return 0;
}


    
