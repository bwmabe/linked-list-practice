
test:
	mkdir -p test
	gcc src/linked_list.c src/test.c -o test/ll_test

clean:
	rm -f bin/*
	rm -rf test

