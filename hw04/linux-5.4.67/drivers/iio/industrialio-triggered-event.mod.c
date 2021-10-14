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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9c596159, "iio_alloc_pollfunc" },
	{ 0x68b4379d, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "7ED29CEFA5669A2DF866A59");
