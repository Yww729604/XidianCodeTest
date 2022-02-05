	.file	"problem1.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
_ZStL13allocator_arg:
	.space 1
_ZStL6ignore:
	.space 1
.lcomm _ZStL8__ioinit,1,1
	.align 4
_ZN9__gnu_cxxL21__default_lock_policyE:
	.long	2
_ZStL10defer_lock:
	.space 1
_ZStL11try_to_lock:
	.space 1
_ZStL10adopt_lock:
	.space 1
	.align 4
_ZNSt15regex_constantsL5icaseE:
	.long	1
	.align 4
_ZNSt15regex_constantsL6nosubsE:
	.long	2
	.align 4
_ZNSt15regex_constantsL8optimizeE:
	.long	4
	.align 4
_ZNSt15regex_constantsL7collateE:
	.long	8
	.align 4
_ZNSt15regex_constantsL10ECMAScriptE:
	.long	16
	.align 4
_ZNSt15regex_constantsL5basicE:
	.long	32
	.align 4
_ZNSt15regex_constantsL8extendedE:
	.long	64
	.align 4
_ZNSt15regex_constantsL3awkE:
	.long	128
	.align 4
_ZNSt15regex_constantsL4grepE:
	.long	256
	.align 4
_ZNSt15regex_constantsL5egrepE:
	.long	512
	.align 4
_ZNSt15regex_constantsL12__polynomialE:
	.long	1024
	.align 4
_ZNSt15regex_constantsL13match_defaultE:
	.space 4
	.align 4
_ZNSt15regex_constantsL13match_not_bolE:
	.long	1
	.align 4
_ZNSt15regex_constantsL13match_not_eolE:
	.long	2
	.align 4
_ZNSt15regex_constantsL13match_not_bowE:
	.long	4
	.align 4
_ZNSt15regex_constantsL13match_not_eowE:
	.long	8
	.align 4
_ZNSt15regex_constantsL9match_anyE:
	.long	16
	.align 4
_ZNSt15regex_constantsL14match_not_nullE:
	.long	32
	.align 4
_ZNSt15regex_constantsL16match_continuousE:
	.long	64
	.align 4
_ZNSt15regex_constantsL16match_prev_availE:
	.long	128
	.align 4
_ZNSt15regex_constantsL14format_defaultE:
	.space 4
	.align 4
_ZNSt15regex_constantsL10format_sedE:
	.long	256
	.align 4
_ZNSt15regex_constantsL14format_no_copyE:
	.long	512
	.align 4
_ZNSt15regex_constantsL17format_first_onlyE:
	.long	1024
	.align 4
_ZNSt15regex_constantsL13error_collateE:
	.space 4
	.align 4
_ZNSt15regex_constantsL11error_ctypeE:
	.long	1
	.align 4
_ZNSt15regex_constantsL12error_escapeE:
	.long	2
	.align 4
_ZNSt15regex_constantsL13error_backrefE:
	.long	3
	.align 4
_ZNSt15regex_constantsL11error_brackE:
	.long	4
	.align 4
_ZNSt15regex_constantsL11error_parenE:
	.long	5
	.align 4
_ZNSt15regex_constantsL11error_braceE:
	.long	6
	.align 4
_ZNSt15regex_constantsL14error_badbraceE:
	.long	7
	.align 4
_ZNSt15regex_constantsL11error_rangeE:
	.long	8
	.align 4
_ZNSt15regex_constantsL11error_spaceE:
	.long	9
	.align 4
_ZNSt15regex_constantsL15error_badrepeatE:
	.long	10
	.align 4
_ZNSt15regex_constantsL16error_complexityE:
	.long	11
	.align 4
_ZNSt15regex_constantsL11error_stackE:
	.long	12
	.align 4
_ZNSt8__detailL19_S_invalid_state_idE:
	.long	-1
	.globl	input
	.bss
	.align 32
input:
	.space 4004
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "yes\0"
.LC1:
	.ascii "no\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB8745:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$80, %rsp
	.seh_stackalloc	80
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	__main
.L18:
	leaq	-36(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	-36(%rbp), %eax
	testl	%eax, %eax
	jne	.L2
	movl	$0, %eax
	jmp	.L19
.L2:
	movl	-36(%rbp), %eax
	cmpl	$1, %eax
	jne	.L4
	leaq	.LC0(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	jmp	.L18
.L4:
	movl	$0, -4(%rbp)
.L7:
	movl	-36(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L6
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	addl	$1, -4(%rbp)
	jmp	.L7
.L6:
	movl	$0, -8(%rbp)
.L13:
	movl	-36(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L8
	movl	$1, -12(%rbp)
	movl	$0, -16(%rbp)
.L11:
	movl	-36(%rbp), %eax
	subl	-8(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -16(%rbp)
	jge	.L9
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-16(%rbp), %eax
	addl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	(%rdx,%rax), %eax
	cmpl	%eax, %ecx
	jge	.L10
	movl	$0, -12(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, -28(%rbp)
	movl	-16(%rbp), %eax
	addl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	movl	-16(%rbp), %eax
	addl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	-28(%rbp), %ecx
	movl	%ecx, (%rdx,%rax)
.L10:
	addl	$1, -16(%rbp)
	jmp	.L11
.L9:
	cmpl	$0, -12(%rbp)
	jne	.L20
	addl	$1, -8(%rbp)
	jmp	.L13
.L20:
	nop
.L8:
	movl	$1, -20(%rbp)
	movl	4+input(%rip), %edx
	movl	input(%rip), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -32(%rbp)
	movl	$2, -24(%rbp)
.L16:
	movl	-36(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	jge	.L14
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-24(%rbp), %eax
	subl	$1, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	input(%rip), %rax
	movl	(%rdx,%rax), %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	cmpl	%eax, -32(%rbp)
	je	.L15
	leaq	.LC1(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	movl	$0, -20(%rbp)
	jmp	.L14
.L15:
	addl	$1, -24(%rbp)
	jmp	.L16
.L14:
	cmpl	$0, -20(%rbp)
	je	.L18
	leaq	.LC0(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	jmp	.L18
.L19:
	addq	$80, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB10122:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB10121:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L24
	cmpl	$65535, 24(%rbp)
	jne	.L24
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L24:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_input;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_input
_GLOBAL__sub_I_input:
.LFB10145:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_input
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, "dr"
	.globl	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.linkonce	discard
.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_:
	.quad	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
