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
	{ 0x85113593, "lib80211_unregister_crypto_ops" },
	{ 0x814f273a, "lib80211_register_crypto_ops" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xb18156be, "skb_pull" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a4497db, "kzfree" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "843C3708FAD475ADEDDCAA4");
