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
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BA5A7A34D39E81F002254C9");
