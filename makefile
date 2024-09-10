COURSE = cs310
SEMESTER = fall2024
CP_NUMBER = 2
LASTNAME = Lewis
GITUSERID = mlewis608
EXE = register

REPODIR = ../$(COURSE)-$(SEMESTER)-cp$(CP_NUMBER)-$(GITUSERID)
TARFILE = ../CP$(CP_NUMBER)_$(LASTNAME)_$(USER)_$(GITUSERID).tar

FLAGS = -Wall -Wextra -g
# FLAGS = -Wall -O3
CC = g++
BIN = bin
OBJ = obj

all: $(BIN)/$(EXE)

$(BIN)/$(EXE): $(OBJ)/RegisteredVotersVector.o $(OBJ)/Voter.o $(OBJ)/register.o
	$(CC) $(FLAGS) $(OBJ)/RegisteredVotersVector.o $(OBJ)/Voter.o \
		$(OBJ)/register.o -o $@

# Specify how the object files should be created from source files
$(OBJ)/Voter.o: Voter.cpp Voter.h
	$(CC) $(FLAGS) -c Voter.cpp -o $@

$(OBJ)/RegisteredVotersVector.o: RegisteredVotersVector.cpp RegisteredVotersVector.h RegisteredVotersBase.h Voter.h
	$(CC) $(FLAGS) -c RegisteredVotersVector.cpp -o $@

$(OBJ)/register.o: register.cpp RegisteredVotersBase.h RegisteredVotersVector.h Voter.h
	$(CC) $(FLAGS) -c register.cpp -o $@

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o register


tar:	clean
	tar cvvf $(TARFILE) $(REPODIR)
	gzip $(TARFILE)
	@echo "Tarred and gzipped file is in the directory one level up"
	@echo $(TARFILE)".gz"

clean:
	rm -f $(OBJ)/*.o $(BIN)/$(EXE) *.tar.gz
