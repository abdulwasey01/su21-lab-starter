.globl _start
.text
_start:
main:   
    la t0,n
    lw a0,0(t0)
    li a1,1
    jal factorial
    j label
factorial:
    addi sp,sp,-8
    sw ra,4(sp)
    sw s0,0(sp)
    add s0,a0,x0
    ble a0,a1,base_case
    addi a0,a0,-1 
    jal factorial
    mul a1,s0,a1
    la t0,n
    sw a1,4(t0)
exit:    
    lw s0,0(sp)
    lw ra,4(sp)
    addi sp, sp, 8    
    jr ra    
base_case:
    addi a0,x0,1
    j exit
label:

write_tohost:
li x1, 1
sw x1, tohost, t5
j write_tohost
.data 
n: .word 8
.align 12
.section ".tohost","aw",@progbits;                            
.align 4; .global tohost; tohost: .dword 0;                     
.align 4; .global fromhost; fromhost: .dword 0;
