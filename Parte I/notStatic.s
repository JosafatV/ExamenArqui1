	.file	"notStatic.c"
	.text
	.globl	method_without_static_variables
	.type	method_without_static_variables, @function
method_without_static_variables:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	addl	$1, -4(%rbp)
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	addl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%eax, %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	ret
	.size	method_without_static_variables, .-method_without_static_variables
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1~18.10) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
