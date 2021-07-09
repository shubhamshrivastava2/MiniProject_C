# LIBRARY = all.exe


SRC = library.c src/add_book.c src/book_info.c src/books_by_author.c

INC = inc

target : $(SRC) $(INC)
	gcc $(SRC) -I$(INC) -o all.exe
	
run: target
	./all.exe
	
clean:
	rm all.exe
