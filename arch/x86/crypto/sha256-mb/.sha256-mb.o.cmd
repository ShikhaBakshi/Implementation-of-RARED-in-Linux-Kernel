cmd_arch/x86/crypto/sha256-mb/sha256-mb.o := ld -m elf_x86_64   -r -o arch/x86/crypto/sha256-mb/sha256-mb.o arch/x86/crypto/sha256-mb/sha256_mb.o arch/x86/crypto/sha256-mb/sha256_mb_mgr_flush_avx2.o arch/x86/crypto/sha256-mb/sha256_mb_mgr_init_avx2.o arch/x86/crypto/sha256-mb/sha256_mb_mgr_submit_avx2.o arch/x86/crypto/sha256-mb/sha256_x8_avx2.o 
