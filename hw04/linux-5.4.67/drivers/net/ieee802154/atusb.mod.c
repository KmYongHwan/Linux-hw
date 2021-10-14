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
	{ 0x9a43e199, "_dev_info" },
	{ 0x546e109c, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x428a36f, "ieee802154_alloc_hw" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0x6c5b8787, "ieee802154_xmit_complete" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x1530bda3, "ieee802154_wake_queue" },
	{ 0x54d29d1e, "ieee802154_rx_irqsafe" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xb18156be, "skb_pull" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe1f074c8, "ieee802154_free_hw" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xa19ac719, "ieee802154_unregister_hw" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x9778e580, "usb_get_from_anchor" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("usb:v20B7p1540d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "97B1836FA9D2878CA785887");
