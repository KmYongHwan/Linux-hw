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
	{ 0xf9a482f9, "msleep" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xede283d, "release_firmware" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x71deb539, "request_firmware" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v086Ap0110d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0186AEE8A144A0A4D68EDB0");
