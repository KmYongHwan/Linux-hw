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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x349cba85, "strchr" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x754d539c, "strlen" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x40393bfd, "dev_set_mac_address" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x96848186, "scnprintf" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "8CF093F48E9E26DFEF9B097");
