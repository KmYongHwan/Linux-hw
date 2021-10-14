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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x1e567d78, "gspca_disconnect" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xc8b32074, "gspca_frame_add" },
	{ 0x9ce89892, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v045Ep02AEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02BFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "73FAE5C139A9FC4CC8D30BA");
