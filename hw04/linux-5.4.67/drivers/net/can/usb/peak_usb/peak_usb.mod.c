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
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0x754d539c, "strlen" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8eb937e0, "close_candev" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xba312d7b, "current_task" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf2acf242, "free_candev" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x601aeedc, "can_change_mtu" },
	{ 0x34d75208, "can_change_state" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4013106f, "unregister_candev" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x127bd30c, "open_candev" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x1498124e, "alloc_canfd_skb" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0x164e2a63, "can_free_echo_skb" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "57934AC26FA7BCBBE3D7D57");
