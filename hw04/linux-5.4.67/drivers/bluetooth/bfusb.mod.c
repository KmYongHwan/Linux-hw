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
	{ 0x4d1a1157, "skb_push" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0xede283d, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CF624B3F05A1D418436FDB");
