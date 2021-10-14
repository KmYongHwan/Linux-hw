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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0xf587fb54, "crypto_ahash_final" },
	{ 0x7e8685, "crypto_ahash_setkey" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe6f812f0, "crypto_alloc_skcipher" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x7a4497db, "kzfree" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0xc2e3aba0, "crypto_req_done" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F24793B7FB45B28016EA8DC");
