/* http://cslibrary.stanford.edu/105/LinkedListProblems.pdf */

#include <stdio.h>
#include <limits.h>

struct LinkedList {
	struct node first;
	struct node last;
	bool is_empty;
	bool is_doubly_linked;
	int length;
}

struct node {
    void *data;   
    struct node *next;
    struct node *prev;
}

LinkedList create_linked_list(is_doubly_linked, initial_length) {
	struct LinkedList LL;
	LL.is_empty = true;

	LL.is_doubly_linked = is_doubly_linked;

	nodes_to_add = initial_length;

	while(nodes_to_add > 1) {
		LL.append_node(NULL);
		nodes_to_add--;
	}

	LL.length = initial_length;
}

void append_node(LL, n) {
	if(LL.is_empty) {
		LL.first = n;
		LL.last = n;
	} else {
		LL.last.next = n;
		if(LL.is_doubly_linked)
			n.prev = LL.last;
	}
}

