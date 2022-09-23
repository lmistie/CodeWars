#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
	int value;
	struct node *left, *right;
};

bool search (int n, const struct node *root)
{
	if (!root)
		return false;
	else
		return (root->value == n || search(n, root->left) || search(n, root->right));
}

int main() {
    struct node *tree = &(struct node) {
		.value = 3,
		.left = &(struct node) {
			.value = 4,
			.left = &(struct node) {
				.right = &(struct node) {
					.value = 7,
					.left = &(struct node) {
						.value = 8,
						.left = &(struct node) {
						.value = 1
						}
					}
				}
			}
		}
	};
    printf("%d\n", search(4, tree));
    return 0;
}