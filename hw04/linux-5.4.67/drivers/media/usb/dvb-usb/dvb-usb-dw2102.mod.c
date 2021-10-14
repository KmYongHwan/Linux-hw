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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xac9619b0, "dvb_usb_device_exit" },
	{ 0x169cd143, "dvb_usb_device_init" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf720a60b, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe0380d7b, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xede283d, "release_firmware" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "dvb-usb,dvb-core,rc-core");

MODULE_ALIAS("usb:v04B4p2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p2104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3011pB012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD660d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3034p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD481d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD482d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1FE1p5456d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpD220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD483d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD484d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD662d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "037F50D93986BF7C2249F23");
