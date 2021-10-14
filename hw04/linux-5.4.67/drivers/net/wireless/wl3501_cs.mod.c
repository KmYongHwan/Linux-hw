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
	{ 0x9b19ea10, "iw_handler_get_thrspy" },
	{ 0x3dcd2310, "iw_handler_set_thrspy" },
	{ 0xdd78daa8, "iw_handler_get_spy" },
	{ 0x60cc62c0, "iw_handler_set_spy" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x754d539c, "strlen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,cfg80211");

MODULE_ALIAS("pcmcia:mD601c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "527ABAE93DCFE2F06881AD4");
