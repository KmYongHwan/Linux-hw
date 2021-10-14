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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xfb578fc5, "memset" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x72b243d4, "free_dma" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xc5850110, "printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5534d64, "ioread16" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccirrus,cs8900");
MODULE_ALIAS("of:N*T*Ccirrus,cs8900C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs8920");
MODULE_ALIAS("of:N*T*Ccirrus,cs8920C*");

MODULE_INFO(srcversion, "B73172F8F8F1F07BB9E0658");
