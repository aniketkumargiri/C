#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Introduction to Trees Data Structure\n");

    return 0;
}

// Tree: Non-linear data structure
// -->Ideal for representing a hierarchical data
// Tree's terminologies:

// 1. Root-->Topmost Node
// 2. Parent-->Node which connect a child
// 3. Child-->Node which is connected by another node is its child
// 4. Leaf/External Node-->Nodes with no children
// 5. Internal Node-->Nodes with atleast one child
// 6. Depth-->Number of edges from root to the node
// 7. Height-->Number of edges from node to the deapest leaf
// 8. Siblings-->Nodes belonging to the same parent
// 9. Ancestors/Descendents-->Nodes belonging to the same root/parent/child

/*
Tree:
                          7-->root
                        / | \-->edges
                       8  10  11-->nodes
                      / \ /   \
                     1  4 2    3-->leaf nodes
                               /
                               4
*/
