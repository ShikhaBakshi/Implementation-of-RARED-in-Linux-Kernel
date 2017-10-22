	.file	"bounds.c"
# GNU C89 (Ubuntu 5.4.0-6ubuntu1~16.04.4) version 5.4.0 20160609 (x86_64-linux-gnu)
#	compiled by GNU C version 5.4.0 20160609, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -nostdinc -I ./arch/x86/include
# -I ./arch/x86/include/generated -I ./include -I ./arch/x86/include/uapi
# -I ./arch/x86/include/generated/uapi -I ./include/uapi
# -I ./include/generated/uapi -imultiarch x86_64-linux-gnu -D __KERNEL__
# -D CONFIG_X86_X32_ABI -D CONFIG_AS_CFI=1 -D CONFIG_AS_CFI_SIGNAL_FRAME=1
# -D CONFIG_AS_CFI_SECTIONS=1 -D CONFIG_AS_FXSAVEQ=1 -D CONFIG_AS_SSSE3=1
# -D CONFIG_AS_CRC32=1 -D CONFIG_AS_AVX=1 -D CONFIG_AS_AVX2=1
# -D CONFIG_AS_AVX512=1 -D CONFIG_AS_SHA1_NI=1 -D CONFIG_AS_SHA256_NI=1
# -D CC_HAVE_ASM_GOTO -D CC_USING_FENTRY -D KBUILD_BASENAME="bounds"
# -D KBUILD_MODNAME="bounds"
# -isystem /usr/lib/gcc/x86_64-linux-gnu/5/include
# -include ./include/linux/kconfig.h -MD kernel/.bounds.s.d kernel/bounds.c
# -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -mno-80387
# -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup
# -mtune=generic -mno-red-zone -mcmodel=kernel -mfentry -march=x86-64
# -auxbase-strip kernel/bounds.s -g -gdwarf-4 -O2 -Wall -Wundef
# -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
# -Wno-format-security -Wno-sign-compare -Wframe-larger-than=1024
# -Wno-unused-but-set-variable -Wdeclaration-after-statement
# -Wno-pointer-sign -Werror=implicit-int -Werror=strict-prototypes
# -Werror=date-time -Werror=incompatible-pointer-types
# -Werror=designated-init -std=gnu90 -p -fno-strict-aliasing -fno-common
# -fshort-wchar -fno-PIE -falign-jumps=1 -falign-loops=1 -funit-at-a-time
# -fno-asynchronous-unwind-tables -fno-delete-null-pointer-checks
# -fstack-protector-strong -fno-omit-frame-pointer
# -fno-optimize-sibling-calls -fno-var-tracking-assignments
# -fno-strict-overflow -fconserve-stack -fverbose-asm
# --param allow-store-data-races=0 -fstack-protector-strong
# options enabled:  -faggressive-loop-optimizations -falign-labels
# -fauto-inc-dec -fbranch-count-reg -fcaller-saves
# -fchkp-check-incomplete-type -fchkp-check-read -fchkp-check-write
# -fchkp-instrument-calls -fchkp-narrow-bounds -fchkp-optimize
# -fchkp-store-bounds -fchkp-use-static-bounds
# -fchkp-use-static-const-bounds -fchkp-use-wrappers
# -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
# -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
# -fdevirtualize-speculatively -fdwarf2-cfi-asm -fearly-inlining
# -feliminate-unused-debug-types -fexpensive-optimizations
# -fforward-propagate -ffunction-cse -fgcse -fgcse-lm -fgnu-runtime
# -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
# -fif-conversion -fif-conversion2 -findirect-inlining -finline
# -finline-atomics -finline-functions-called-once -finline-small-functions
# -fipa-cp -fipa-cp-alignment -fipa-icf -fipa-icf-functions
# -fipa-icf-variables -fipa-profile -fipa-pure-const -fipa-reference
# -fipa-sra -fira-hoist-pressure -fira-share-save-slots
# -fira-share-spill-slots -fisolate-erroneous-paths-dereference -fivopts
# -fkeep-static-consts -fleading-underscore -flifetime-dse -flra-remat
# -flto-odr-type-merging -fmath-errno -fmerge-constants
# -fmerge-debug-strings -fmove-loop-invariants -foptimize-strlen
# -fpartial-inlining -fpeephole -fpeephole2 -fprefetch-loop-arrays
# -fprofile -free -freg-struct-return -freorder-blocks
# -freorder-blocks-and-partition -freorder-functions -frerun-cse-after-loop
# -fsched-critical-path-heuristic -fsched-dep-count-heuristic
# -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
# -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
# -fsched-stalled-insns-dep -fschedule-fusion -fschedule-insns2
# -fsemantic-interposition -fshow-column -fshrink-wrap -fsigned-zeros
# -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-phiopt
# -fstack-protector-strong -fstdarg-opt -fstrict-volatile-bitfields
# -fsync-libcalls -fthread-jumps -ftoplevel-reorder -ftrapping-math
# -ftree-bit-ccp -ftree-builtin-call-dce -ftree-ccp -ftree-ch
# -ftree-coalesce-vars -ftree-copy-prop -ftree-copyrename -ftree-cselim
# -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
# -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
# -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
# -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
# -ftree-vrp -funit-at-a-time -fvar-tracking -fverbose-asm
# -fzero-initialized-in-bss -m128bit-long-double -m64 -malign-stringops
# -mavx256-split-unaligned-load -mavx256-split-unaligned-store -mfentry
# -mfxsr -mglibc -mieee-fp -mlong-double-80 -mno-fancy-math-387
# -mno-red-zone -mno-sse4 -mpush-args -mskip-rax-setup
# -mtls-direct-seg-refs -mvzeroupper

	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.unlikely,"ax",@progbits
.LCOLDB0:
	.text
.LHOTB0:
	.p2align 4,,15
	.section	.text.unlikely
.Ltext_cold0:
	.text
	.globl	foo
	.type	foo, @function
foo:
.LFB134:
	.file 1 "kernel/bounds.c"
	.loc 1 16 0
	.cfi_startproc
1:	call	__fentry__
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	.loc 1 18 0
#APP
# 18 "kernel/bounds.c" 1
	
.ascii "->NR_PAGEFLAGS $25 __NR_PAGEFLAGS"	#
# 0 "" 2
	.loc 1 19 0
# 19 "kernel/bounds.c" 1
	
.ascii "->MAX_NR_ZONES $5 __MAX_NR_ZONES"	#
# 0 "" 2
	.loc 1 21 0
# 21 "kernel/bounds.c" 1
	
.ascii "->NR_CPUS_BITS $13 ilog2(CONFIG_NR_CPUS)"	#
# 0 "" 2
	.loc 1 23 0
# 23 "kernel/bounds.c" 1
	
.ascii "->SPINLOCK_SIZE $4 sizeof(spinlock_t)"	#
# 0 "" 2
	.loc 1 25 0
#NO_APP
	popq	%rbp	#
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE134:
	.size	foo, .-foo
	.section	.text.unlikely
.LCOLDE0:
	.text
.LHOTE0:
.Letext0:
	.section	.text.unlikely
.Letext_cold0:
	.file 2 "./include/linux/page-flags.h"
	.file 3 "./include/linux/mmzone.h"
	.file 4 "./include/linux/printk.h"
	.file 5 "./include/linux/kernel.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x20b
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF59
	.byte	0x1
	.long	.LASF60
	.long	.LASF61
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.long	.LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.long	.LASF3
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF4
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF5
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF7
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF8
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF9
	.uleb128 0x4
	.long	0x73
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF10
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.long	.LASF11
	.uleb128 0x5
	.long	.LASF47
	.byte	0x4
	.long	0x50
	.byte	0x2
	.byte	0x4a
	.long	0x170
	.uleb128 0x6
	.long	.LASF12
	.byte	0
	.uleb128 0x6
	.long	.LASF13
	.byte	0x1
	.uleb128 0x6
	.long	.LASF14
	.byte	0x2
	.uleb128 0x6
	.long	.LASF15
	.byte	0x3
	.uleb128 0x6
	.long	.LASF16
	.byte	0x4
	.uleb128 0x6
	.long	.LASF17
	.byte	0x5
	.uleb128 0x6
	.long	.LASF18
	.byte	0x6
	.uleb128 0x6
	.long	.LASF19
	.byte	0x7
	.uleb128 0x6
	.long	.LASF20
	.byte	0x8
	.uleb128 0x6
	.long	.LASF21
	.byte	0x9
	.uleb128 0x6
	.long	.LASF22
	.byte	0xa
	.uleb128 0x6
	.long	.LASF23
	.byte	0xb
	.uleb128 0x6
	.long	.LASF24
	.byte	0xc
	.uleb128 0x6
	.long	.LASF25
	.byte	0xd
	.uleb128 0x6
	.long	.LASF26
	.byte	0xe
	.uleb128 0x6
	.long	.LASF27
	.byte	0xf
	.uleb128 0x6
	.long	.LASF28
	.byte	0x10
	.uleb128 0x6
	.long	.LASF29
	.byte	0x11
	.uleb128 0x6
	.long	.LASF30
	.byte	0x12
	.uleb128 0x6
	.long	.LASF31
	.byte	0x13
	.uleb128 0x6
	.long	.LASF32
	.byte	0x14
	.uleb128 0x6
	.long	.LASF33
	.byte	0x15
	.uleb128 0x6
	.long	.LASF34
	.byte	0x16
	.uleb128 0x6
	.long	.LASF35
	.byte	0x17
	.uleb128 0x6
	.long	.LASF36
	.byte	0x18
	.uleb128 0x6
	.long	.LASF37
	.byte	0x19
	.uleb128 0x6
	.long	.LASF38
	.byte	0x9
	.uleb128 0x6
	.long	.LASF39
	.byte	0x9
	.uleb128 0x6
	.long	.LASF40
	.byte	0xd
	.uleb128 0x6
	.long	.LASF41
	.byte	0x9
	.uleb128 0x6
	.long	.LASF42
	.byte	0x4
	.uleb128 0x6
	.long	.LASF43
	.byte	0x9
	.uleb128 0x6
	.long	.LASF44
	.byte	0xc
	.uleb128 0x6
	.long	.LASF45
	.byte	0xd
	.uleb128 0x6
	.long	.LASF46
	.byte	0x11
	.byte	0
	.uleb128 0x7
	.long	.LASF48
	.byte	0x4
	.long	0x50
	.byte	0x3
	.value	0x125
	.long	0x1a6
	.uleb128 0x6
	.long	.LASF49
	.byte	0
	.uleb128 0x6
	.long	.LASF50
	.byte	0x1
	.uleb128 0x6
	.long	.LASF51
	.byte	0x2
	.uleb128 0x6
	.long	.LASF52
	.byte	0x3
	.uleb128 0x6
	.long	.LASF53
	.byte	0x4
	.uleb128 0x6
	.long	.LASF54
	.byte	0x5
	.byte	0
	.uleb128 0x8
	.string	"foo"
	.byte	0x1
	.byte	0xf
	.quad	.LFB134
	.quad	.LFE134-.LFB134
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x9
	.long	0x49
	.long	0x1ca
	.uleb128 0xa
	.byte	0
	.uleb128 0xb
	.long	.LASF55
	.byte	0x4
	.byte	0x3e
	.long	0x1bf
	.uleb128 0xc
	.long	.LASF56
	.byte	0x5
	.value	0x1c7
	.long	0x49
	.uleb128 0x9
	.long	0x7a
	.long	0x1ec
	.uleb128 0xa
	.byte	0
	.uleb128 0xc
	.long	.LASF57
	.byte	0x5
	.value	0x215
	.long	0x1f8
	.uleb128 0x4
	.long	0x1e1
	.uleb128 0xc
	.long	.LASF58
	.byte	0x5
	.value	0x220
	.long	0x209
	.uleb128 0x4
	.long	0x1e1
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF59:
	.ascii	"GNU C89 5.4.0 20160609 -mno-sse -mno-mmx -mno-sse2 -mno-3dno"
	.ascii	"w -mno-avx -m64 -mno-80387 -mno-fp-ret-in-387 -mpreferred-st"
	.ascii	"ack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone"
	.ascii	" -mcmodel=kernel -mfentry -march=x86-64 -g -gdwarf-4 -O2 -st"
	.ascii	"d=gnu90 -p -fno-strict-aliasing -fno-common -fshort-wchar -f"
	.ascii	"no-PIE -falign-jumps=1 -falign-loops=1 -funit-at-a-time -fno"
	.ascii	"-async"
	.string	"hronous-unwind-tables -fno-delete-null-pointer-checks -fstack-protector-strong -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -fno-strict-overflow -fconserve-stack --param allow-store-data-races=0 -fstack-protector-strong"
.LASF38:
	.string	"PG_checked"
.LASF52:
	.string	"ZONE_MOVABLE"
.LASF0:
	.string	"signed char"
.LASF58:
	.string	"hex_asc_upper"
.LASF33:
	.string	"PG_uncached"
.LASF6:
	.string	"long long unsigned int"
.LASF48:
	.string	"zone_type"
.LASF36:
	.string	"PG_idle"
.LASF37:
	.string	"__NR_PAGEFLAGS"
.LASF5:
	.string	"long long int"
.LASF61:
	.string	"/home/kajoljain/Desktop/Implementation-of-RARED-in-Linux-Kernel"
.LASF25:
	.string	"PG_private_2"
.LASF16:
	.string	"PG_dirty"
.LASF47:
	.string	"pageflags"
.LASF60:
	.string	"kernel/bounds.c"
.LASF10:
	.string	"long int"
.LASF22:
	.string	"PG_arch_1"
.LASF12:
	.string	"PG_locked"
.LASF17:
	.string	"PG_lru"
.LASF14:
	.string	"PG_referenced"
.LASF50:
	.string	"ZONE_DMA32"
.LASF46:
	.string	"PG_isolated"
.LASF4:
	.string	"unsigned int"
.LASF24:
	.string	"PG_private"
.LASF7:
	.string	"long unsigned int"
.LASF55:
	.string	"console_printk"
.LASF3:
	.string	"short unsigned int"
.LASF42:
	.string	"PG_savepinned"
.LASF29:
	.string	"PG_reclaim"
.LASF8:
	.string	"sizetype"
.LASF41:
	.string	"PG_pinned"
.LASF26:
	.string	"PG_writeback"
.LASF32:
	.string	"PG_mlocked"
.LASF56:
	.string	"panic_timeout"
.LASF45:
	.string	"PG_double_map"
.LASF51:
	.string	"ZONE_NORMAL"
.LASF15:
	.string	"PG_uptodate"
.LASF11:
	.string	"_Bool"
.LASF1:
	.string	"unsigned char"
.LASF39:
	.string	"PG_swapcache"
.LASF2:
	.string	"short int"
.LASF49:
	.string	"ZONE_DMA"
.LASF20:
	.string	"PG_slab"
.LASF54:
	.string	"__MAX_NR_ZONES"
.LASF53:
	.string	"ZONE_DEVICE"
.LASF9:
	.string	"char"
.LASF27:
	.string	"PG_head"
.LASF35:
	.string	"PG_young"
.LASF44:
	.string	"PG_slob_free"
.LASF13:
	.string	"PG_error"
.LASF21:
	.string	"PG_owner_priv_1"
.LASF28:
	.string	"PG_mappedtodisk"
.LASF23:
	.string	"PG_reserved"
.LASF18:
	.string	"PG_active"
.LASF57:
	.string	"hex_asc"
.LASF40:
	.string	"PG_fscache"
.LASF43:
	.string	"PG_foreign"
.LASF19:
	.string	"PG_waiters"
.LASF34:
	.string	"PG_hwpoison"
.LASF30:
	.string	"PG_swapbacked"
.LASF31:
	.string	"PG_unevictable"
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
