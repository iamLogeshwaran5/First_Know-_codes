# Simple Python program to print the Simple pyramid pattern   
n = int(input("Enter the number of rows"))       
# Here, we are declaring the integer variable to store the input rows  
# Here, we are declaring an outer loop to handle number of rows    
for i in range(0, n):    
    # Here, we are declaring an inner loop to handle number of columns    
    # Here, the values are changing according to outer loop    
        for j in range(0, i + 1):    
            # Here, we are declaring a for loop for printing stars    
            print("* ", end="")       
        # Here, we are giving the ending line after each row    
        print()    
