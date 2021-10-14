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
	{ 0xf9a482f9, "msleep" },
	{ 0xac14880c, "dvb_module_probe" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x298d856e, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0xa7d95dae, "dvb_usbv2_generic_rw_locked" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1195ba8e, "dvb_usbv2_probe" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5835c164, "dvb_usbv2_disconnect" },
	{ 0xacf1c9a7, "dvb_module_release" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c603790, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x6fa4eddc, "dvb_usbv2_reset_resume" },
	{ 0x3608de, "m88ds3103_get_agc_pwm" },
};

MODULE_INFO(depends, "dvb-core,dvb_usb_v2,rc-core,m88ds3103");

MODULE_ALIAS("usb:v0572p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p960Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p680Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC699d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC68Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "04CEACB1265EED5F6A01B17");
