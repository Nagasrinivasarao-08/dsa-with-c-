	.file	"pattern8.cpp"
	.text
	.align 2
	.def	__ZSt17__verify_groupingPKcjRKSs;	.scl	3;	.type	32;	.endef
__ZSt17__verify_groupingPKcjRKSs:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSs4sizeEv
	decl	%eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	decl	%eax
	movl	%eax, -12(%ebp)
	leal	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-4(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt3minIjERKT_S2_S2_
	movl	(%eax), %eax
	movl	%eax, -8(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, -16(%ebp)
	movb	$1, -17(%ebp)
	movl	$0, -24(%ebp)
L2:
	movl	-24(%ebp), %eax
	cmpl	-8(%ebp), %eax
	jae	L5
	cmpb	$0, -17(%ebp)
	je	L5
	movl	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSsixEj
	movsbl	(%eax),%edx
	movl	8(%ebp), %eax
	addl	-24(%ebp), %eax
	movsbl	(%eax),%eax
	cmpl	%eax, %edx
	sete	%al
	movb	%al, -17(%ebp)
	leal	-16(%ebp), %eax
	decl	(%eax)
	leal	-24(%ebp), %eax
	incl	(%eax)
	jmp	L2
L5:
	cmpl	$0, -16(%ebp)
	je	L6
	cmpb	$0, -17(%ebp)
	je	L6
	movl	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSsixEj
	movsbl	(%eax),%edx
	movl	8(%ebp), %eax
	addl	-8(%ebp), %eax
	movsbl	(%eax),%eax
	cmpl	%eax, %edx
	sete	%al
	movb	%al, -17(%ebp)
	leal	-16(%ebp), %eax
	decl	(%eax)
	jmp	L5
L6:
	movl	$0, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSsixEj
	movsbl	(%eax),%edx
	movl	8(%ebp), %eax
	addl	-8(%ebp), %eax
	movsbl	(%eax),%eax
	cmpl	%eax, %edx
	jg	L8
	movzbl	-17(%ebp), %eax
	andl	$1, %eax
	movb	%al, -25(%ebp)
	jmp	L9
L8:
	movb	$0, -25(%ebp)
L9:
	movzbl	-25(%ebp), %eax
	movb	%al, -17(%ebp)
	movzbl	-17(%ebp), %eax
	leave
	ret
.lcomm __ZSt8__ioinit,16
	.section .rdata,"dr"
LC0:
	.ascii " \0"
LC1:
	.ascii "*\0"
	.text
	.align 2
.globl __Z8pattern8i
	.def	__Z8pattern8i;	.scl	2;	.type	32;	.endef
__Z8pattern8i:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	$0, -4(%ebp)
L11:
	movl	-4(%ebp), %eax
	cmpl	8(%ebp), %eax
	jge	L10
	movl	$0, -8(%ebp)
L14:
	movl	-8(%ebp), %eax
	cmpl	-4(%ebp), %eax
	jge	L15
	movl	$LC0, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-8(%ebp), %eax
	incl	(%eax)
	jmp	L14
L15:
	movl	$0, -8(%ebp)
L17:
	movl	8(%ebp), %eax
	leal	(%eax,%eax), %edx
	movl	-4(%ebp), %eax
	addl	%eax, %eax
	negl	%eax
	leal	(%edx,%eax), %eax
	decl	%eax
	cmpl	-8(%ebp), %eax
	jle	L18
	movl	$LC1, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-8(%ebp), %eax
	incl	(%eax)
	jmp	L17
L18:
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZNSolsEPFRSoS_E
	leal	-4(%ebp), %eax
	incl	(%eax)
	jmp	L11
L10:
	leave
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.align 2
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	andl	$-16, %esp
	movl	$0, %eax
	addl	$15, %eax
	addl	$15, %eax
	shrl	$4, %eax
	sall	$4, %eax
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	call	__alloca
	call	___main
	movl	$6, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, (%esp)
	call	__Z8pattern8i
	movl	$0, %eax
	leave
	ret
	.section	.text$_ZSt3minIjERKT_S2_S2_,"x"
	.linkonce discard
	.align 2
.globl __ZSt3minIjERKT_S2_S2_
	.def	__ZSt3minIjERKT_S2_S2_;	.scl	2;	.type	32;	.endef
__ZSt3minIjERKT_S2_S2_:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$4, %esp
	movl	12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	(%eax), %eax
	cmpl	(%edx), %eax
	jae	L22
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
	jmp	L21
L22:
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
L21:
	movl	-4(%ebp), %eax
	leave
	ret
	.text
	.align 2
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	cmpl	$65535, 12(%ebp)
	jne	L24
	cmpl	$1, 8(%ebp)
	jne	L24
	movl	$__ZSt8__ioinit, (%esp)
	call	__ZNSt8ios_base4InitC1Ev
L24:
	cmpl	$65535, 12(%ebp)
	jne	L23
	cmpl	$0, 8(%ebp)
	jne	L23
	movl	$__ZSt8__ioinit, (%esp)
	call	__ZNSt8ios_base4InitD1Ev
L23:
	leave
	ret
	.align 2
	.def	__GLOBAL__I__Z8pattern8i;	.scl	3;	.type	32;	.endef
__GLOBAL__I__Z8pattern8i:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	ret
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__I__Z8pattern8i
	.text
	.align 2
	.def	__GLOBAL__D__Z8pattern8i;	.scl	3;	.type	32;	.endef
__GLOBAL__D__Z8pattern8i:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$65535, 4(%esp)
	movl	$0, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	ret
	.section	.dtors,"w"
	.align 4
	.long	__GLOBAL__D__Z8pattern8i
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNKSsixEj;	.scl	2;	.type	32;	.endef
	.def	__ZNKSs4sizeEv;	.scl	2;	.type	32;	.endef
