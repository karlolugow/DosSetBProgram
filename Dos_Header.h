#ifndef dos_h
#define dos_h
#define COUNT 8
#define MAX_CHAR 100
#pragma warning(disable:4996)


#include <conio.h>
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <Windows.h>
struct Node
{
    char data[MAX_CHAR];
    int commission;
    struct Node* left, * right;
};



struct Node* newNode(char* data);
void print2DUtil(Node* root, int space);
void print2D(Node* root);
Node* search(Node* root, char* data);
void showTree(Node* root, int level);
int compensateUpline(Node* root, char* data);
void downline(Node* root, char* tmpUpID, char* tmpID);
void displayDownlines(Node* root, char* data);
int checkDupe(Node* root, char* name);
//int getLevelUtil(Node* node, char* data, int level);
//int getLevel(Node* node, char* data);
#endif // !dos_h
