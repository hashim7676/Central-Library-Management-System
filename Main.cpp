#include"Queue.h"

//MAIN FUNCTION	
int main() {
	//NODEs CREATED
	Node*newnode= new Node();
	Node *newnode1 = new Node();
	
	
  cout<<"\t\t\t\tCreated by MUHAMMAD HASHIM" <<endl;
  cout<<endl;

  cout<<"\t\t\t\tRegistration Number : 2020303" <<endl;	
  cout<<endl;
  cout<<endl;
  cout<<endl;
	
  cout << "\t\t\t\tLibrary Management System" <<endl;
	
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
  Tree obj;
  linkedlist l;
  queue p;
  // LOGIN DETAILS TO BE CHECKED BY FILE HANDLING
  int option;
  string name;
  y:
  ifstream coe;
    coe.open("LoginDetails.txt");     //file open
    
    //variable declaration and initialization
    int index=0;
    string coe_name,id,coe_id;
    cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t LOGIN TO ENTER PORTAL"<<endl;
	cout<<endl;
	cout<<endl;
	getline(cin,name);
	cout<<"\t\t\t\tUsername : ";
	getline(cin,name);
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\tPassword   : ";
	getline(cin,id);
	cout<<endl;
	cout<<endl;
  	
  do
   {
 	  getline(coe,coe_name);
	  getline(coe,coe_id);	
	  
	  
     
	 if(coe_name==name && coe_id==id)              //if else selection statements start
	 {
	 	goto x;

	 
	 }
	 
	 else
	 {
	 	cout<<"\t\t\tThe  Username or Password is Incorrect, Please Try Again"<<endl;
	 	
	 	system("pause");
	 	
	 	system("cls");            //clears screen
   	 	
	    goto y;          //function call
	 	
	 }                              //end of if else selection statement
   }while(!coe.eof());
      coe.close();
  do {
  	x:
  		// PORTAL
  		cout<<"\t\t\t\tLibraray PORTAL "<<endl;
  		cout<<endl;
  		cout<<endl;
  		cout<<endl;
  		cout<<endl;
  		cout << "\t\t\t\tWhat ammendments you want to do in library?" << endl;
  		cout<<endl;
	 	cout<<endl;

    	cout << "\t\t\t\t1. Add Book" << endl;
    	cout<<endl;
	 	cout<<endl;

	 	
    	cout << "\t\t\t\t2. Search Book" << endl;
    	cout<<endl;
	 	cout<<endl;
	 	
	 	
    	cout << "\t\t\t\t3. Remove Book" << endl;
    	cout<<endl;
	 	cout<<endl;

	 	
    	cout << "\t\t\t\t4. DISPLAY" << endl;
    	cout<<endl;
	 	cout<<endl;

	 	
    	cout << "\t\t\t\t5. Height of Tree" << endl;
    	cout<<endl;
	 	cout<<endl;

	 	
    	cout << "\t\t\t\t6. Clear Screen" << endl;
    	cout<<endl;
	 	cout<<endl;

	 	
    	cout << "\t\t\t\t7. Elements of priority queue" << endl;
    	cout<<endl;
	 	cout<<endl;

	 	
    	cout << "\t\t\t\t0. Exit Program" << endl;

    	cin >> option;
  	

    Node*new_node=new Node();
	// SWITCH STATEMENTS
    switch (option) {
    case 0:
      break;
    // CASE FOR ADDING A BOOK  
    case 1:
    	
    	system("cls");
		cout<<endl;
	  	cout<<endl;	
      	cout << " \t\t\t\t\t\tAdd Book"<<endl;
      	cout<<endl;
      	cout<<endl;
	      cout <<"\t\t\t\tEnter VALUE of TREE NODE to INSERT in BST: ";
	      cin >> name;

	      l.insert_book(name);
	      cout<<endl;
	      system("pause");
    		break;
    // CASE FOR SEARCHING A BOOK    
    case 2:
      system("cls");
	  cout<<endl;
	  cout<<endl;	
      cout << "\t\t\t\t\t\tSEARCH Book" << endl;
      cout<<endl;
      cout<<endl;
      cout << "\t\t\t\tEnter VALUE of TREE NODE to SEARCH in BST: ";
      cin >> name;
      system("pause");
      l.search_book(l.getHead(), name);
      break;
    case 3:
    	// CASE FOR REMOVING A BOOK  
      system("cls");
	  cout<<endl;
	  cout<<endl;	
      cout << "\t\t\t\t\t\tDELETE Book" << endl;
      cout<<endl;
      cout << "\t\t\t\tEnter name of the Book that you want to remove from the Library: ";
      cin >> name;
      new_node = l.traverse(name);
      if (new_node != NULL) {
        l.delete_book(l.getHead(), name);
        cout<<endl;
        cout<<endl;
        system("pause");
        cout << "\t\t\t\tBook Removed" << endl;
      } else {
      	cout<<endl;
      	cout<<endl;
        cout << "\t\t\t\tBook not found" << endl;
        system("pause");
      }
      break;
    case 4:
    	// CASE FOR DISPLAYING
      system("cls");
	  cout<<endl;
	  cout<<endl;	
      cout << " \t\t\t\t\t\tPRINT 2D: " << endl;
      obj.display_graphical(l.getHead(), 5);
      
      cout<<endl;
	  cout<<endl;	
      cout << " \t\t\t\t\t\tPrint Level Order BFS: \n";
      cout<<"\t\t\t\t\t\t";
      obj.display_BFS(l.getHead());
      cout << endl;
      system("pause");
      
      break;
    case 5:
    	// CASE TO DETERMINE HEIGHT OF TREE
      system("cls");
      
	  
      cout << "\t\t\t\t\t\tTREE HEIGHT" << endl;
      cout<<endl;
      cout<<endl;
      cout << "Height : " << obj.height(l.getHead()) << endl;
      system("pause");
      break;
    case 6:
    	// CASE FOR CLEARING SCREEN 
      system("cls");
      break;
    case 7:
    	// CASE FOR PUTTING BOOKS IN QUEUE
    	system("cls");
      p.enque(l.getHead());
      newnode1 = p.deque();
      cout<<"Book in queue : "<<newnode1->getBook_name()<<endl;
      delete newnode1;
      system("pause");
      break;
    default:
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout << "\t\t\t\tEnter Proper Option number " << endl;
    }
  } while (option!= 0);

  return 0;
}
