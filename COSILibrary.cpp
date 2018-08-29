// Version 0.01 
//written by Andy Mahoney
//last updated 8/29/2018

#include <iostream>
#include <fstream>
#include <vector>
#include <maps>
using std::string; 
using std::cout;
using std::cin;
using std::endl;

int menu();

int main(){
	int currentSizeofMap;
	struct BookInfo{
		string BookName;
		string BookAuthor;
		int bookShelf;
		int ShelfNum;
		int inStock;
		string WhoHasIt;	
	}
	std::map<int, struct> Library;
	

	return 0;
} 

int menu(){
	cout<<"Welcome to the COSI Library Menu! \n Please select an option:"<<endl;
 	cout<<"1. Look up a book"<<endl;
	cout<<"2. Check out a book"<<endl;
	cout<<"3. Return a book"<<endl;
	cout<<"4. Enter a new book into the system"<<endl;
	cout<<"5. Remove a book from the system"<<endl;
	cout<<"6. Quit"<<endl;
	int userMenuInput;
	cin>>userMenuInput;
	if(userMenuInput == 1){
		//search book
	}
	if(userMenuInput == 2){
		//check out book
	}
	if(userMenuInput == 3){
		//return a book
	}
	if(userMenuInput == 4){
		//enter a new book
	}
	if(userMennuInput == 5){
		//remove book
	}
	if(userMenuInput == 6){
		return 0;
	}

}
