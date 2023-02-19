#include"Tree.h"

 // CLASS QUEUE
 class queue : public Node
{
	// PRIVATE ATTRIBUTES
	private:
		
		Node *front; 
		Node *rear;
	
		
	// PUBLIC ATTRIBUTES
	public:
		int count1;
		int qnum;
		// CONSTRUCTOR
		queue()
		{
			front = NULL;
			rear = NULL;
		}
		// FUNCTION TO CHECK IS QUEUE EMPTY OR NOT
		bool isempty()
		{
			if(front == NULL && rear == NULL)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		// FUNCTION FOR INSERTION IN QUEUE
		void enque(Node *head)
		{
			Node* temp = head;
		while(temp != NULL)
		{
			if(isempty())
			{
				front=temp;
				rear= temp;
				cout<<"First Book added to queue successfully."<<endl;
			}
			else
			{
				rear->setRight(temp);
				rear = temp;
				cout<<"Book added to queue successfully."<<endl;	
			}
			temp =temp->getRight();
		}
	
		}
		// FUNCTION FOR DELETION IN QUEUE
		Node *deque()
		{
			// CHECK IF QUEUE IS EMPTY
			Node *temp = NULL;
			if(isempty())
			{
				
				cout<<"No books in queue."<<endl;
				return NULL;
			}
			// CHECK IF THERE IS ONLY ONE NODE
			else if(front == rear)
			{
				temp = front;
				front = NULL;
				rear = NULL;
				return temp;
			}
			else
			{
				// CHECK IF THERE IS MORE THAN ONE NODE AND AND RETURN IT
				temp = front;
				front = front->getRight();
				return temp->getRight();
			}
		}
	};
