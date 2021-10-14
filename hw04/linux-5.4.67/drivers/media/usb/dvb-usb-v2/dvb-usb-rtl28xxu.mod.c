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
	{ 0x6346cf09, "ir_raw_event_store_with_filter" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x298d856e, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xdd64e639, "strscpy" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x1195ba8e, "dvb_usbv2_probe" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5835c164, "dvb_usbv2_disconnect" },
	{ 0xb4ec4b77, "i2c_adapter_type" },
	{ 0xf720a60b, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c603790, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x6fa4eddc, "dvb_usbv2_reset_resume" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x4f935459, "ir_raw_event_set_idle" },
};

MODULE_INFO(depends, "rc-core,dvb_usb_v2");

MODULE_ALIAS("usb:v0BDAp2831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2838d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpB803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00E0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpC803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6680d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD393d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp0650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD394d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpA803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p707Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5654pCA42d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "142D71689651F47B7C93B35");
