/**************************************************************************
 File name:		BSTdriver.c
 Author:        CS, Pacific University
 Date:          10.29.2021
 Class:         CS300
 Assignment:    Binary Search Trees
 Purpose:       This file defines the data structure for a Binary Search
                Tree
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 50

typedef struct BSTNode *BSTNodePtr;
typedef struct BSTNode {
	int key;
	char szData[MAX];
	BSTNodePtr psLeftChild, psRightChild;
} BSTNode;

/**************************************************************************
 Function: 	 	bstInsert

 Description:   Inserts a node into a Binary Search Tree

 Parameters:	hsRoot - handle to the root of the BST
                key    - the key to be placed in the node
                         used to organize the BST
                szData - the data to be placed in the node
                         can be copied into the node using strncpy()
                size   - number of characters in szData

 Returned:	 	None
 *************************************************************************/
void bstInsert(BSTNode **hsRoot, int key, char *szData, int size) {

}

/**************************************************************************
 Function: 	 	bstPrintInorder

 Description:   Prints the Binary Search Tree in order

 Parameters:	psNode - pointer to the node

 Returned:	 	None
 *************************************************************************/
void bstPrintInorder(BSTNodePtr psNode) {
	if (psNode == NULL) {
		return;
	}
	bstPrintInorder(psNode->psLeftChild);
	printf("(%d,%s)-", psNode->key, psNode->szData);
	bstPrintInorder(psNode->psRightChild);
}

/**************************************************************************
 Function: 	 	bstSearch

 Description:   Searches for a node in the BST

 Parameters:	psRoot - pointer to the root of the BST
                key    - the key we are searching for
                szData - will contain the data from the node
                         can be copied using strncpy()
                size   - number of characters in szData

 Returned:	 	Result of if the node is found in the BST
 *************************************************************************/
bool bstSearch(BSTNodePtr psRoot, int key, char *szData, int size) {
	bool bFound = false;

	return bFound;
}

/**************************************************************************
 Function: 	 	bstFindLevel

 Description:   Finds the level of a node

 Parameters:	psRoot - pointer to the root of the BST
                key    - the key to be searched for in the BST
                pLevel - the level of the node

 Returned:	 	Result of if the node is found in the BST
 *************************************************************************/
bool bstFindLevel(BSTNodePtr psRoot, int key, int *pLevel) {
	bool bFound = false;

	return bFound;
}

/**************************************************************************
 Function: 	 	main()

 Description:   Used to create and test the BST

 Parameters:	none

 Returned:	 	none
 *************************************************************************/
int main() {
	BSTNodePtr psTree = NULL;
	char szFound[MAX] = "x";
	int key, level;

	bstPrintInorder(psTree);

	// Implement the function bstInsert and then test by uncommenting the
	// following:
	/*bstInsert(&psTree, 15, "Bowser", 8);
	bstInsert(&psTree, 8, "Mario", 6);
	bstInsert(&psTree, 20, "Luigi", 5);
	bstInsert(&psTree, 200, "Toad", 4);
	bstInsert(&psTree, 10, "Yoshi", 4);*/

	bstPrintInorder(psTree);

	key = 50;

	// Implement bstSearch then test by uncommenting the following
/*	if(bstSearch(psTree, key, szFound, MAX)) {
		printf("\n\nFound %d: %s", key, szFound);
	} else {
		printf("\n\nDid not find %d", key);
	}*/

	key = 15;

	// Implement bstFindLevel then test by uncommenting the following

		/*if(bstFindLevel(psTree, key, &level)) {
			printf("\n\nFound %d at level %d", key, level);
		} else {
			printf("\n\nDid not find %d", key);
		}*/

	printf("\n\nReached the end!");

	return EXIT_SUCCESS;
}
