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
	{ 0xc5850110, "printk" },
	{ 0xf0d1a95, "map_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x81279a8a, "mtd_device_unregister" },
};

MODULE_INFO(depends, "chipreg,mtd");


MODULE_INFO(srcversion, "F21A0FC7E89ABF338D5E6B0");
