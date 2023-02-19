#include"LinkedList.h"

class Tree : public linkedlist
{
	
	// PUBLIC ATTRIBUTES
  	public:
  
		// FUNCTION FOR GRAPHICAL REPRESENTATION
  		void display_graphical(Node * r, int space) 
		{
    		if (r == NULL)
      		return;
    		space += SPACE; 
    		display_graphical(r -> getRight(), space);  
    		cout << endl;
    		for (int i = SPACE; i < space; i++) 
      		cout << " "; 
    		cout << r -> getBook_name() << "\n"; 
    		display_graphical(r -> getLeft(), space);
  		}

  

		// FUNCTION FOR DETERMINING HEIGHT OF TREE
  		int height(Node * r) 
		{
			int left_height;
			int right_height;
    		if (r == NULL)
      		return -1;
    		else 
			{	
      			left_height = height(r -> getLeft());
      			right_height = height(r -> getRight());
      			if (left_height > right_height)
        		return (left_height + 1);
      			else 
				return (right_height + 1);
    		}
  		}
  		// FUNCTION FOR DISPLAYING
  		void display(Node * r, int level) 
		{
    		if (r == NULL)
     		return;
    		else if (level == 0)
    		{
      		cout << r -> getBook_name() << "->"; 
      		}
    		else 
    		{
    			display(r -> getLeft(), level - 1);
      			display(r -> getRight(), level - 1);
      			
    		}
  		}
  		// FUNCTION FOR DISPLAYING IN BREADTH FIRST SEARCH ORDER
  		void display_BFS(Node * r) 
		{
    		int h;
			h = height(r);
    		for (int i = 0; i <= h; i++)
      		display(r, i);
      		cout << "NULL" << endl;
  		}
};
