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
	{ 0x5bc6e3b5, "orinoco_tx_timeout" },
	{ 0x9c4d9c13, "orinoco_change_mtu" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xf3ca81c, "orinoco_set_multicast_list" },
	{ 0x5119ec10, "orinoco_stop" },
	{ 0x325137ab, "orinoco_open" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xe0f3e65d, "free_orinocodev" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xc890a7e6, "orinoco_if_del" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xede283d, "release_firmware" },
	{ 0x74ecbf6f, "orinoco_if_add" },
	{ 0x6cf3d081, "orinoco_init" },
	{ 0x71deb539, "request_firmware" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3a583436, "alloc_orinocodev" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x15314fce, "consume_skb" },
	{ 0xacbb5acd, "orinoco_process_xmit_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x150128e, "__orinoco_ev_rx" },
	{ 0x80addc3d, "__orinoco_ev_info" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "orinoco,cfg80211");

MODULE_ALIAS("usb:v049Fp001Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D98p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Cp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5002d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5B11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630pFF81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep047Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9C00F4AC0166581F90E45DA");
