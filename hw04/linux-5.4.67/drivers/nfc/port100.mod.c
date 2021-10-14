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
	{ 0x69acdf38, "memcpy" },
	{ 0x1b6f5bda, "nfc_digital_register_device" },
	{ 0x5b4b8b39, "nfc_digital_allocate_device" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xfd94814e, "complete_all" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb18156be, "skb_pull" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x536a8955, "nfc_digital_free_device" },
	{ 0x7f4c1002, "nfc_digital_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc_digital");

MODULE_ALIAS("usb:v054Cp06C1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp06C3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "374DD1E1345017744B1FD56");
