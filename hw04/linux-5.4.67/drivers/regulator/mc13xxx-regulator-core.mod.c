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
	{ 0x5bba4f6, "regulator_list_voltage_table" },
	{ 0x32dcd44d, "mc13xxx_reg_rmw" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6f486f60, "rdev_get_dev" },
	{ 0xae80939b, "mc13xxx_reg_read" },
};

MODULE_INFO(depends, "mc13xxx-core");


MODULE_INFO(srcversion, "B4451EF37A10F1EF7804A98");
