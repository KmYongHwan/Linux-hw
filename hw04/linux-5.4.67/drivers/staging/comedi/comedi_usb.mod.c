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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0xf6039668, "comedi_auto_config" },
	{ 0x5a8b0caa, "comedi_auto_unconfig" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9ce89892, "usb_register_driver" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "D2851511323E3DB2BC49C23");
