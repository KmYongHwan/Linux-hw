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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xdf3916c9, "usbnet_set_link_ksettings" },
	{ 0xe497e793, "usbnet_get_link_ksettings" },
	{ 0x34dbbe18, "usbnet_get_link" },
	{ 0x4f87e6b7, "usbnet_nway_reset" },
	{ 0xf93d1693, "usbnet_set_msglevel" },
	{ 0xdd2fbeed, "usbnet_get_msglevel" },
	{ 0x12faebc3, "usbnet_get_drvinfo" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0xca102794, "usbnet_open" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0xa17e8e13, "usbnet_change_mtu" },
	{ 0x1c7b51a6, "mii_ethtool_gset" },
	{ 0xd20fc08f, "mii_check_media" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x46c7ab16, "usbnet_read_cmd_nopm" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x71de7e1f, "usbnet_write_cmd_nopm" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xb18156be, "skb_pull" },
	{ 0xbd6841d4, "crc16" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xdd46729b, "usbnet_defer_kevent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7E5788BEF9C16AE9EF1CF91");
