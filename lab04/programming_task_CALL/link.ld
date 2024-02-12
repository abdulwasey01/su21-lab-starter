OUTPUT_ARCH( "riscv" )
ENTRY(_start)
SECTIONS
{
  . = 0x80000000;
  .text.init : { *(.text.init) }
  
  . = 0x80001000;
  .data : { *(.data) }
  .data.string : { *(.data.string)}


}

