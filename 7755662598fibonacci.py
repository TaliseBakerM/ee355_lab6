import sys
import subprocess

def main():
    # Take care of the command line
    if len(sys.argv) != 2:
        print("You need to input a number")
        sys.exit(1)
    
    n = sys.argv[1]

    # Compile the code like in lab 1
    subprocess.run(["g++", "7755662598fibonacci_dp.cpp", "-o", "dp.out"])
    
    # Run the code line in lab 1
    direct_output = subprocess.run(["./dp.out", n], stdout=subprocess.PIPE)

    # Convert to string like in lab 1
    outprint = str(direct_output.stdout) [2:-1]

    # Split lines
    output_lines = outprint.split("\\n")

    # Print the message
    if output_lines[0] == "1":
        print("Congratulations! You have the Fibonacci " + n)
    else:
        next_fib = output_lines[1]
        print("Sorry! " + n + " is not a Fibonacci number but the next Fibonacci number to it is " + next_fib)

if __name__ == "__main__":
    main()