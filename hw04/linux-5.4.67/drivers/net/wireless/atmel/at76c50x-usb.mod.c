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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xf224939a, "led_trigger_unregister_simple" },
	{ 0xede283d, "release_firmware" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x198ef25b, "led_trigger_register_simple" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x40555496, "usb_reset_device" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x71deb539, "request_firmware" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xdcf29e6f, "ieee80211_scan_completed" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x5d6a04c4, "ieee80211_rx_irqsafe" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xb18156be, "skb_pull" },
	{ 0x4cd2cb52, "led_trigger_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc5850110, "printk" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v03EBp7603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0919d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055DpA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p5743d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p3220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2233d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12FDp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7617d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7615d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E06A9C6182AF348C1EBE764");
