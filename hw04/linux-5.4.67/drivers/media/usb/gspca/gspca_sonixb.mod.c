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
	{ 0x9e1da47c, "gspca_suspend" },
	{ 0xff0b9cd6, "gspca_dev_probe" },
	{ 0x3b09619d, "gspca_expo_autogain" },
	{ 0x7600dd5e, "gspca_resume" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x1e567d78, "gspca_disconnect" },
	{ 0x9e2c5952, "gspca_coarse_grained_expo_autogain" },
	{ 0x5ada0011, "input_event" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc8b32074, "gspca_frame_add" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9ce89892, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v0C45p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p600Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6083d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p608Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p608Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60B0d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5A9E1FA5338EDC38FBCFD56");
