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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x597b3a3f, "v4l2_ctrl_cluster" },
	{ 0x9e1da47c, "gspca_suspend" },
	{ 0xff0b9cd6, "gspca_dev_probe" },
	{ 0x3b09619d, "gspca_expo_autogain" },
	{ 0x7600dd5e, "gspca_resume" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1e567d78, "gspca_disconnect" },
	{ 0x5ada0011, "input_event" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xc8b32074, "gspca_frame_add" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v0458p7025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p702Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p607Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60C0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60CEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60ECd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60FBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60FCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60FEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6142d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6143d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6148d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p614Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "95734F4ECF9C5DA555873B2");
