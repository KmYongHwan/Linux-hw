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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x793ad815, "devm_hwrng_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1c093c05, "usb_hid_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x31e0547e, "usb_poison_urb" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v000010C4p00008ACF");

MODULE_INFO(srcversion, "9C59BB28B38A62A6145CA53");
