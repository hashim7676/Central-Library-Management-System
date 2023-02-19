// LIBRARIES
#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#define SPACE 10

using namespace std;
//CLASS NODE
class Node 
{
	// PRIVATE ATTRIBUTES
	private:
		
		string book_name;
  		Node * left;
  		Node * right;
  	// PUBLIC ATTRIBUTES	
  	public:
  		Node * next;
  		// CONSTRUCTOR WITHOUT PARAMETRE
  		Node()
		{
    		book_name = " ";
    		left = NULL;
    		right = NULL;
  		}	
  		// GETTER SETTER METHODS
  		void setBook_name(string name)
  		{
  			book_name = name;
  		}
  		string getBook_name()
  		{
  			return book_name;
  		}
  
  		Node * getLeft()
  		{
  			return left;
  		}
  		Node * getRight()
  		{
  			return right;
  		}
  		void setLeft(Node*l)
  		{
  			left=l;
  		}
  		void setRight(Node*r)
  		{
  			right=r;
  		}
  // CONSTRUCTOR WITH PARAMETRE
  		Node(string book_name)
		{
    		this -> book_name = book_name;
    		this->left = NULL;
    		this->right = NULL;
  		}
};



