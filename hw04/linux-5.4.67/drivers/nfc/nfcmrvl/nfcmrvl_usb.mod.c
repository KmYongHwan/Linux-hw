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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfe4752a0, "nfcmrvl_nci_unregister_dev" },
	{ 0x25e9cbaa, "nfcmrvl_nci_recv_frame" },
	{ 0x9778e580, "usb_get_from_anchor" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x233f20fc, "nfcmrvl_nci_register_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "nfcmrvl");

MODULE_ALIAS("usb:v1286p2046d*dc*dsc*dp*icFFisc04ip01in*");

MODULE_INFO(srcversion, "8090A6559EBB91CF2BBB5DE");
