-----------dumbBuoyantPimpleFoam and hotroom_selfsolver-------------

# first we go into the file folder dumbBuoyantPimpleFoam to wmake the file.

# the new compile file is restored in the $FOAM_USER_APPBIN/dumbBuoyantPimpleFoam

# in that file we compile a new solver named dumbBuoyantPimpleFoam in .C file we add two lines: using namespace std; cout << "test for user_solver <<endl; "

# in that folder in Make directory, files have been changed a little.


# at last, you can use hotroom to have a test. allrun_selt is a changed one, in it we use our self_solver dumbBuoyantPimpleFoam to execute the program.



---------------icoHeatFoam and cavity_selfsolver--------------------

# icoHeatFoam is other file to test the self solver generate. And the case for it is cavity_selfsolver folder.

# to run the cavity case you can type "foamRunTutorials" just like the "foamCleanTutorials"

# some discriptions of this are on youtube theoong 20-21


