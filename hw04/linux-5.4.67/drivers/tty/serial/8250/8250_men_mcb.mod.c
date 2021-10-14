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
	{ 0xa033d651, "mcb_unregister_driver" },
	{ 0x3ed4e735, "__mcb_register_driver" },
	{ 0x11b04550, "serial8250_register_8250_port" },
	{ 0x8de483cc, "mcb_get_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xb6e98199, "mcb_get_resource" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "00098ECE048803C2EA36838");
