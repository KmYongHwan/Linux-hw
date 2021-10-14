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
	{ 0x37a0cba, "kfree" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0x7a4497db, "kzfree" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xb18156be, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a4178b2, "crypto_shash_final" },
	{ 0xd25eb83e, "crypto_shash_update" },
	{ 0xfb578fc5, "memset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3bf58509, "crypto_shash_setkey" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211,libarc4");


MODULE_INFO(srcversion, "2E869C89131AE4A54B8F55A");
