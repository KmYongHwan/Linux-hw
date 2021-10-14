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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xa033d651, "mcb_unregister_driver" },
	{ 0x3ed4e735, "__mcb_register_driver" },
	{ 0x637d18c6, "watchdog_register_device" },
	{ 0x2ee76e44, "watchdog_init_timeout" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x6128abbd, "mcb_request_mem" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0x7137f851, "watchdog_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "F8FBCEF70D523BB51F7DDA5");
