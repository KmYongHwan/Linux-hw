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
	{ 0x9e1da47c, "gspca_suspend" },
	{ 0xff0b9cd6, "gspca_dev_probe" },
	{ 0x7600dd5e, "gspca_resume" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x1e567d78, "gspca_disconnect" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xc8b32074, "gspca_frame_add" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9ce89892, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v05E1p0893d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E3DC629891A405C1E97DDC0");
