CC = gcc
 FLAGS = -Wall -g
 AR= ar

#make all
all:mains maindloop maindrec

#  prog: main.o basicClassification.o advancedClassificationLoop.o advancedClassificationRecursion.o
# 	$(CC) $(FLAGS) -o prog basicClassification.o advancedClassificationLoop.o advancedClassificationRecursion.o
# make loops static
# loops: advancedClassificationLoop.o main.o basicClassification.o libclassloops.a 
# 		$(CC) $(FLAGS) -o loops advancedClassificationLoop.o main.o basicClassification.o libclassloops.a -lm 
#make recs static
mains:main.o recursives #libclassrec.a
	$(CC) $(FLAGS) main.o libclassrec.a -o mains -lm
# make loopd dynamic
maindloop: advancedClassificationLoop.o main.o basicClassification.o libclassloops.so
		$(CC) $(FLAGS) -o maindloop advancedClassificationLoop.o main.o basicClassification.o ./libclassloops.so -lm


# make recd dynamic
  maindrec: advancedClassificationRecursion.o main.o basicClassification.o recursived
	$(CC) $(FLAGS)  -o maindrec advancedClassificationRecursion.o main.o basicClassification.o  ./libclassrec.so -lm
# static library
recursives: advancedClassificationRecursion.o basicClassification.o
	$(AR) -rcs  libclassrec.a advancedClassificationRecursion.o basicClassification.o
# make loops static
  loops: advancedClassificationLoop.o basicClassification.o
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o
# dynamic library
 recursived: advancedClassificationRecursion.o
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o

#  libclassloops.so: advancedClassificationLoop.o
# 	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o

loopd: advancedClassificationLoop.o
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o

 main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

 advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 

#  basicClassification.o: basicClassification.c NumClass.h
# 	$(CC) $(FLAGS) -c basicClassification.c

 #make clean
.PHONY: clean all

 clean: 
	rm -f mains maindrec maindloop *.a *.so *.o

		
# # %trie.o: %trie.c $(DEPS1)
# # 	$(CC) -c $< $(CFLAGS)

# # %main.o: %main.c $(DEPS1)
# # 	$(CC) -c $< $(CFLAGS)

# # all: frequency 

# # frequency: main.c trie.c
# # 	$(CC) -c -Wall main.c trie.c 
# # 	$(CC) -o frequency main.o trie.o

# # .PHONY: clean

# # clean:
# # 	rm -f *.o *.out frequency