#TargetName : Dependencies
#<TAB>commands

Build : main.c library_management.c
	gcc main.c library_managemet.c -o Calculator.out

Run : Build
	./Calculator.out

Clean:
	rm -rf *.o *.out *.i *.s