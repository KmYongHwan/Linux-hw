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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xe6f812f0, "crypto_alloc_skcipher" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x58f66fbe, "cryptd_free_skcipher" },
	{ 0xb3aac60b, "crypto_unregister_skciphers" },
	{ 0x4442a605, "cryptd_free_aead" },
	{ 0x2b4a77c8, "cryptd_skcipher_queued" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xd0d89c6e, "crypto_register_skciphers" },
	{ 0x6f9966e1, "crypto_unregister_skcipher" },
	{ 0x13149a05, "cryptd_aead_queued" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0xca25ee, "crypto_register_skcipher" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0xd78fa925, "cryptd_alloc_skcipher" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f68acc9, "cryptd_skcipher_child" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x300a230e, "crypto_unregister_aeads" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0xcdf37f63, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfbc240c, "crypto_unregister_aead" },
	{ 0x40d1facd, "crypto_register_aead" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xb06e55d5, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf27201db, "cryptd_alloc_aead" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "3305741DF4314BB5351FF6F");
