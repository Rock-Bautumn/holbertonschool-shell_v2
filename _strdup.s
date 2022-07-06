	.file	"_strdup.c"
	.text
	.p2align 4
	.globl	_strlen
	.type	_strlen, @function
_strlen:
.LFB67:
	.cfi_startproc
	endbr64
	cmpb	$0, (%rdi)
	je	.L4
	movl	$1, %eax
	.p2align 4,,10
	.p2align 3
.L3:
	movl	%eax, %r8d
	addq	$1, %rax
	cmpb	$0, -1(%rdi,%rax)
	jne	.L3
	movl	%r8d, %eax
	ret
	.p2align 4,,10
	.p2align 3
.L4:
	xorl	%r8d, %r8d
	movl	%r8d, %eax
	ret
	.cfi_endproc
.LFE67:
	.size	_strlen, .-_strlen
	.p2align 4
	.globl	_strdup
	.type	_strdup, @function
_strdup:
.LFB68:
	.cfi_startproc
	endbr64
	testq	%rdi, %rdi
	je	.L23
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	movzbl	(%rdi), %r12d
	movq	%rdi, %rbx
	testb	%r12b, %r12b
	je	.L9
	movl	$1, %eax
	.p2align 4,,10
	.p2align 3
.L10:
	leal	-1(%rax), %ebp
	movq	%rax, %rdi
	addq	$1, %rax
	cmpb	$0, -1(%rbx,%rax)
	jne	.L10
	addq	$1, %rdi
	call	malloc@PLT
	testq	%rax, %rax
	je	.L8
	movslq	%ebp, %rbp
	xorl	%edx, %edx
	jmp	.L13
	.p2align 4,,10
	.p2align 3
.L27:
	movzbl	1(%rbx,%rdx), %r12d
	movq	%rcx, %rdx
.L13:
	movb	%r12b, (%rax,%rdx)
	leaq	1(%rdx), %rcx
	cmpq	%rdx, %rbp
	jne	.L27
.L7:
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L9:
	.cfi_restore_state
	popq	%rbx
	.cfi_remember_state
	.cfi_restore 3
	.cfi_def_cfa_offset 24
	movl	$1, %edi
	popq	%rbp
	.cfi_restore 6
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_restore 12
	.cfi_def_cfa_offset 8
	jmp	malloc@PLT
.L8:
	.cfi_restore_state
	xorl	%eax, %eax
	jmp	.L7
.L23:
	.cfi_def_cfa_offset 8
	.cfi_restore 3
	.cfi_restore 6
	.cfi_restore 12
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE68:
	.size	_strdup, .-_strdup
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
