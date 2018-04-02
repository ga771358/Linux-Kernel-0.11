SECTIONS
{
	. = 0x0;
	.bootsect : 
	{
		 boot/bootsect 
	}
	. = 0x200;
	.hello : 
	{
		 boot/hello
	}
	. = 0x400;
	.setup : 
	{
		 boot/setup 
	}
	. = 0xc00;
	.kernel : 
	{
		 tools/kernel 
	}
}
