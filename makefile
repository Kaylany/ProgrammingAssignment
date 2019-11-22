ifeq ($(OS), Windows_NT)
	RM = del /Q
	FILE = edit_dist.exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -f
		FILE = edit_dist
	endif
endif

buildEditDist : main.cpp edit_dist_matrix.cpp edit_dist_matrix.hpp
	g++ main.cpp edit_dist_matrix.cpp -o $(FILE)

clean : 
	$(RM) $(FILE)