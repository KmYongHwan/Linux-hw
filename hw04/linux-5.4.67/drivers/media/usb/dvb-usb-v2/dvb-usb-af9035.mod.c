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
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x298d856e, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0xa7d95dae, "dvb_usbv2_generic_rw_locked" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x1195ba8e, "dvb_usbv2_probe" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5835c164, "dvb_usbv2_disconnect" },
	{ 0xf720a60b, "module_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c603790, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x6fa4eddc, "dvb_usbv2_reset_resume" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "dvb_usb_v2,rc-core");

MODULE_ALIAS("usb:v15A4p9035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp1867d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA867d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp0825d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1779d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp0337d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpA115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v048Dp9135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v048Dp9005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v048Dp9006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp1835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp2835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp3835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp4835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp0335d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE409d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10AEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pF900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0262d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v048Dp9306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp1871d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5542A650CE8CA3581F49803");
