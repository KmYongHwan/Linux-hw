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
	{ 0x752832c, "noop_llseek" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x81b2f3c5, "usb_register_dev" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x8d14b8b, "usb_get_intf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x90cb6031, "usb_put_intf" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xa1bb3cd0, "usb_deregister_dev" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b4eab8b, "usb_find_interface" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07C0p1500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1504d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1506d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "92DD515200ED650FB612735");
