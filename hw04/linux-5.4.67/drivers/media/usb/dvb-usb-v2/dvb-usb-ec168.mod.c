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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x298d856e, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x1195ba8e, "dvb_usbv2_probe" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5835c164, "dvb_usbv2_disconnect" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c603790, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v18B4p1689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4pFFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4pFFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4p1002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E48FE627CE76ABAF8C1999");
