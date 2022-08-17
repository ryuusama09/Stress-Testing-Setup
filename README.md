" # stress-testing-setup " 
# this tool helps you to test your code over very large test-cases
# which can generally go as big as 2*1e5 . The setup is extremely simple 
# download the files . over here the script cannot be modified (be sure to have all the files in the same folder)
# brute file -> this is the file where you write the brute force code 
               ( which is usually the approach  we first think of for tough problems) . It should be correct and be sure that it produces the correct output

# code file -> In this file you implement the actual code , which you have written and you want to test the codes against large input.
# gen file -> dont the contents of this file , except few lines which i will describe :
               you can change the variables from line 12 onwards .
               The rand function produces a random output and it is suggested not to change the function 
               You can alter according to the input format asked by the question and accordingly change the input format.
               ps ( dont get confused as why the input is getting printed . This is because an input file will be generated 
                    by the sript itself)
 #script.ssh -> when you are done with coding all the files.Then just run the script file in git bash and then all the files will get an executable and run                  
