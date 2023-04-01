typedef  struct book
{	
	int id;
	char bname[20];
	char author[10];
	double price;	
}book;
void display(book*,int);
void storevalue(book*,int);
void search(book* ,int);
void append(book*,int);
void update(book*,int);
void delite(book*,int);
void sort(book*,int); 

