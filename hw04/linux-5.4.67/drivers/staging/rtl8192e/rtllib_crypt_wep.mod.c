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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x85113593, "lib80211_unregister_crypto_ops" },
	{ 0x814f273a, "lib80211_register_crypto_ops" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xb18156be, "skb_pull" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa17f5f47, "crypto_alloc_sync_skcipher" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "DE720E7D653B1190A3FDF31");
