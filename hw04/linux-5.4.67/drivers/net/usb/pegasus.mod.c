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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc5850110, "printk" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x15314fce, "consume_skb" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("usb:v0506p4601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p110Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap1046d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5046d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p0986d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p07C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3334p1701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0121d*dc00dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0986d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0987d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0988d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p811Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0913d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056EpABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep007Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B39p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B39p0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15E8p9100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15E8p9110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "40214E9884104299EEDC4C2");
