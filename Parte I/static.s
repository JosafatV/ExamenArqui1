	.file	"static.c"
	.text
	.globl	method_with_static_variables
	.type	method_with_static_variables, @function
method_with_static_variables:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	counter.1960(%rip), %eax
	addl	$1, %eax
	movl	%eax, counter.1960(%rip)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%eax, %edx
	movl	-12(%rbp), %eax
	addl	%eax, %edx
	movl	counter.1960(%rip), %eax
	addl	%edx, %eax
	popq	%rbp
	ret
	.size	method_with_static_variables, .-method_with_static_variables
	.local	counter.1960
	.comm	counter.1960,4,4
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1~18.10) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
