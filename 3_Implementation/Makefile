LIBRARY = all.exe
SRC = library.c\
src\add_book.c\
src\book_info.c\
src\books_by_author.c

INC = inc

$(LIBRARY): $(SRC)
	gcc -I $(INC) $(SRC) -o all.exe
	
run: $(LIBRARY)
	$(LIBRARY)
	
clean:
	rm ./all.exe