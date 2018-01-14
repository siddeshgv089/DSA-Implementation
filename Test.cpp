#include"Node.h"
#include"LinkedList.h"
using namespace std;


int main()
{
	LinkedList <char>*l = new LinkedList<char>();
	try {
		
		l->append('a');
		l->append('b');
		l->append('c');
		l->append('d');
		l->append('e');
		l->append('f');
		l->append('g');
		

		l->PrintData();

		l->deleteAtBegin();
		l->deleteAtEnd();
		l->deleteItem('e');

		l->PrintData();

		l->insertAtBegin('a');
		l->insertAtEnd('g');
		l->insertAtPos(5, 'e');

		l->PrintData();

		l->updateAtBegin('A');
		l->updateAtEnd('G');
		l->updateAtPos(5,'E');

		l->PrintData();
		

	}
	catch (exception e)
	{
		cout << e.what()<< endl;
	}
	
	return 0;
}