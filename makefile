library: main.o add_book.o update_book.o remove_book.o search_book.o view_books.o issue_book.o return_book.o list_issued_books.o save_data.o
	gcc *.o -o library

main.o: main.c book.h
	gcc -c main.c

add_book.o: add_book.c book.h
	gcc -c add_book.c

update_book.o: update_book.c book.h
	gcc -c update_book.c

remove_book.o: remove_book.c book.h
	gcc -c remove_book.c

search_book.o: search_book.c book.h
	gcc -c search_book.c

view_books.o: view_books.c book.h
	gcc -c view_books.c

issue_book.o: issue_book.c book.h
	gcc -c issue_book.c

return_book.o: return_book.c book.h
	gcc -c return_book.c

list_issued_books.o: list_issued_books.c book.h
	gcc -c list_issued_books.c

save_data.o: save_data.c book.h
	gcc -c save_data.c

clean:
	rm -f *.o library
