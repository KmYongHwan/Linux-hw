#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0x3da213d, "write_bytes_to_xdr_buf" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x749e329a, "gss_mech_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xf587fb54, "crypto_ahash_final" },
	{ 0xa17f5f47, "crypto_alloc_sync_skcipher" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x6b87c75a, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0xfb578fc5, "memset" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xacde0476, "crypto_shash_digest" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x3bf58509, "crypto_shash_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x74d246bf, "gss_mech_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7e8685, "crypto_ahash_setkey" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x7a4497db, "kzfree" },
	{ 0x809989a2, "read_bytes_from_xdr_buf" },
	{ 0xdcdc6a8d, "xdr_process_buf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0xb83e788, "xdr_buf_trim" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "auth_rpcgss,sunrpc");


MODULE_INFO(srcversion, "CD4ABD6AB696F007796FF78");
