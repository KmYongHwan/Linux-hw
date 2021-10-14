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
	{ 0x93f3fa6c, "hci_recv_diag" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd5ef1a68, "hci_set_fw_info" },
	{ 0x718b8b7, "bt_info" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7e2d4ee, "__hci_cmd_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7312D0036C6DFD3C9DD3B58");
