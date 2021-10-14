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
	{ 0x601aeedc, "can_change_mtu" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x164e2a63, "can_free_echo_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8eb937e0, "close_candev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x127bd30c, "open_candev" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0xf2acf242, "free_candev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x4013106f, "unregister_candev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "D84FB35E6F871E34533C29C");
