#include <stdio.h>
#include <stdlib.h>

typedef struct str_node {
	int val;
	struct str_node * nxt;
} Node;
int n;


int main () {
	while (scanf("%d", &n) == 1) {
		Node* head = malloc(4*sizeof(int));
		scanf("%d", &head -> val);
		Node* last = head;
		last -> nxt = NULL;
		int i;
		for (i = 2; i <= n; i++) {
			last -> nxt = malloc(4*sizeof(int));
			scanf("%d", &last -> nxt -> val);
			last = last -> nxt;
			last -> nxt = NULL;
		}

		//  sort
		int is_or;
		for (i = 1; i <= n; i++) {
			is_or = 1;
			Node* p;
			for (p = head; p -> nxt != NULL; p = p -> nxt) {
				if (p -> val > p -> nxt -> val) {
					is_or = 0;
					int t = p -> val;
					p -> val = p -> nxt -> val;
					p -> nxt -> val = t;
				}
			}
			if (is_or) break;
		}
// output:
			// for (p = head;  p != NULL; p = p -> nxt) {
			// 	printf("%d\n", p -> val);
			// }
// ----------------
		printf("%d\n", i-1);
	}
	return 0;
}