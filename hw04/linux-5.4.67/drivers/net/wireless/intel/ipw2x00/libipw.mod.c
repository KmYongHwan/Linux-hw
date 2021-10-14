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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0x9610c292, "lib80211_crypt_delayed_deinit" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x94436f75, "lib80211_crypt_info_free" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x53874969, "wireless_spy_update" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0xd8af3e0f, "lib80211_get_crypto_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd5dcf14b, "lib80211_crypt_info_init" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211,lib80211");


MODULE_INFO(srcversion, "FF99C1573B09E9EF3A250BA");
