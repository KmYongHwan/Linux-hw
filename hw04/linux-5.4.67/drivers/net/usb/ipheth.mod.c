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
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa6c77a72, "usb_altnum_to_altsetting" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "D1974959E1DEE80DC5C79DD");
