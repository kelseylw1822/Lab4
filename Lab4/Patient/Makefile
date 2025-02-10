COMPILER = g++
OPTIONS = -Wall
PROGRAM = hospitalCharges.out

all : $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): hospitalCharges.cpp Patient.cpp Patient.h
	$(COMPILER) $(OPTIONS) hospitalCharges.cpp Patient.cpp Patient.h -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
