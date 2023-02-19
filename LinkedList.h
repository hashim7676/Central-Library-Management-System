#include"Node.h"

// CLASS LINKED LIST
class linkedlist : public Node
{
	// PRIVATE ATTRIBUTES
	private:
		Node * head;
	// PUBLIC ATTRIBUTES	
	public:
		
		// GETTER SETTER METHODS
		Node * getHead()
    	{
  			return head;
  		}
  		void setHead(Node*h)
  		{
  			head=h;
  		}	
  		// CONSTRUCTOR WITHOUT PARAMETRE
  		linkedlist()
		{
    		head = NULL;
  		}
		//FUNCTION TO CHECK IS LIST EMPTY OR NOT
		bool isTreeEmpty()
		{
    		if (getHead() == NULL)
			 {
      			return true;
    		 }
		 
			else
			{
      			return false;
    		}
  		}
		// FUNCTION FOR INSERTING DATA IN TREE BY LINKEDLIST
  		void insert_book(string name)
		{
  	
  			Node*new_node=new Node();
  			new_node->setBook_name(name) ;
  	
    		if (getHead() == NULL)
			{
      			setHead(new_node) ;
      			cout << "Value Inserted as head node!" << endl;
    		}
			else
			{
				
        		Node * temp = getHead();
      			while (temp != NULL)
				{
					// CHECK IF BOOK IS ALREADY INSERTED
        			if (new_node -> getBook_name() == temp -> getBook_name())
					{
        				cout << "Book Already exist,Insert another Book!" << endl;
          				return;
        			}
        			// CHECK IF FIRST LEFT NODE IS AVAILABLE AND INSERT IN THAT NODE IF VALUE OF BOOK IS LESS THAN VALUE OF PREVIOUS NODE
					else if ((new_node -> getBook_name() < temp -> getBook_name()) && (temp -> getLeft() == NULL))
					{
        				temp -> setLeft(new_node) ;
        				cout << "Book Inserted to the left!" << endl;
        				break;
        			}
        			// CHECK IF VALUE OF BOOK IS LESS THAN VALUE OF PREVIOUS NODE AND INSERT IN IT
					else if (new_node -> getBook_name() < temp -> getBook_name())
					{
						// traverses to the left child
        				temp = temp -> getLeft();
        			}
					else if ((new_node -> getBook_name() > temp -> getBook_name()) && (temp -> getRight() == NULL)) 
					{
        				temp -> setRight(new_node) ;
        				cout << "Book Inserted to the right!" << endl;
        				break; 
        			}
					else 
					{
						// traverses to right child
        				temp = temp -> getRight();
        			}
      			}
    		}
  		}
		// FUNCTION FOR SEARCHING DATA OR NODES 
	 	Node* search_book(Node * r, string name) 
		{
  			Node*newnode=new Node();
    		if (r -> getBook_name() == name)
      		newnode = r;

    		else if (name < r -> getBook_name())
      		newnode =  search_book(r -> getLeft(), name);

    		else
       		newnode = search_book(r -> getRight(), name);
      
      		if (newnode->getBook_name() == name) 
      		
         	cout << "Value found" << endl;
       
	  		else
         	cout << "Value NOT found" << endl;
		}
		//FUNCTION FOR DELETING DATA 
    	Node * delete_book(Node * r, string v)
		{
    		 
    		Node*l;
    		Node*x;

    		if (r == NULL) 
			{
      			return NULL;
    		}
    			// If the data to be deleted is smaller than the head's data, then it lies in left subtree
    		else if (v < r -> getBook_name()) 
			{
      			l= delete_book(r -> getLeft(), v);//r->left=deleteNode(r -> getLeft(), v);
      			r -> setLeft(l) ;
    		}
    			// If the data to be deleted is greater than the head's data, then it lies in right subtree 
    			
    		else if (v > r -> getBook_name()) 
			{
      			x= delete_book(r -> getRight(), v);
      			r -> setRight(x); 
	  
    		}
    		 
    		else 
			{
      		// check if node with only one child or no child  at left
      			if (r -> getLeft() == NULL) 
				{	
        			Node * temp;
					temp = r -> getRight();
        			delete r;
        			return temp;
      			} 
      			//check if node with only one child or no child  at right
				else if  (r -> getRight() == NULL) 
				{
        			Node * temp;
					temp = r -> getLeft();
        			delete r;
        			return temp;
      			} 
				else 
				{
					// if parent node gets deleted
					Node *temp;
					cout<<"every child node of this parent node will be deleted as it is a parent node that is been deleted";
					delete r;
					return temp;
      			}
        	}
    			return r;
   		}
			
   		Node * traverse(string v) 
   		{
    		if (getHead() == NULL) 
			{
      			return getHead();
    		}	 
			else 
			{
      			Node * temp = getHead();
      			while (temp != NULL) 
				{
        			if (v == temp -> getBook_name()) 
					{
          				return temp;
        			}
					else if (v < temp -> getBook_name()) 
					{
          				temp = temp -> getLeft();
        			} 
					else 
					{
          				temp = temp -> getRight();
        			}
      			}
      			return NULL;
    		}
  		}

};
