.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    addi x4, x0, 1    # initializing the value of x4 to 1
    jal ra, factorial
    
loop:
    addi a1, a0, 0
    addi a0, x0, 1
    addi a1,x4,0
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    beq a0,x0,loop    #checking if a0 which is parameter is equal to 0 then it goes to loop and print result and exit.
    mul x4, x4, a0    #x4 isinitially 1 and it multiplies by a0 and then saves value in x4
    addi a0,a0,-1     # decrement value of a0 by 1 in every ietration until a0 values goes to 0.
    jal factorial     # continue ietrating this loop until it breaks.
    