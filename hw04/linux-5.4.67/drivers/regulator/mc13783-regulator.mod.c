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
	{ 0x6e84a0ac, "mc13xxx_fixed_regulator_set_voltage" },
	{ 0x5bba4f6, "regulator_list_voltage_table" },
	{ 0xedafc97f, "mc13xxx_fixed_regulator_ops" },
	{ 0x439f5c, "mc13xxx_regulator_ops" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6f486f60, "rdev_get_dev" },
	{ 0xe0cd3249, "mc13xxx_reg_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1b26689, "mc13xxx_unlock" },
	{ 0xae80939b, "mc13xxx_reg_read" },
	{ 0x70eb7a7e, "mc13xxx_lock" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-regulator-core,mc13xxx-core");


MODULE_INFO(srcversion, "70330C9816472402F3BFF17");
