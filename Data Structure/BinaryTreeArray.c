#include<stdio.h>

void buildTree(int a[], int i, int item)
{
    a[i] = item;
    int val;
    char ch;

    // Insert left child
    printf("Do you want to insert a left child of %d (y/n): ", item);
    scanf(" %c", &ch);  // Space before %c to ignore newline
    if(ch == 'y' || ch == 'Y')
    {
        printf("Enter the left child of %d: ", item);
        scanf("%d", &val);
        buildTree(a, (2*i) + 1, val);
    }

    // Insert right child
    printf("Do you want to insert a right child of %d (y/n): ", item);
    scanf(" %c", &ch);  // Space before %c to ignore newline
    if(ch == 'y' || ch == 'Y')
    {
        printf("Enter the right child of %d: ", item);
        scanf("%d", &val);
        buildTree(a, (2*i) + 2, val);
    }
}

void main()
{
    int a[100], item, i;
    
    // Initialize the array
    for(i = 0; i < 100; i++)
        a[i] = -1;
    
    // Input the root node
    printf("Enter the root node: ");
    scanf("%d", &item);
    
    // Build the tree starting from the root
    buildTree(a, 0, item);
    
    // Display the binary tree
    printf("\nTHE BINARY TREE IS:\n");
    for(i = 0; i < 100; i++)
    {
        if(a[i] == -1)
            printf("-");  // Print dash for empty node
        else
            printf("%d", a[i]);  // Print actual node value
        
        // Add space between nodes for clarity
        if (i < 99)
            printf("\t");  // Use tabs for better spacing between nodes
    }
    printf("\n");
}
