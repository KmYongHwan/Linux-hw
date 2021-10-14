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
	{ 0x4851cb9, "regulator_list_voltage_linear_range" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,twl4030-vaux1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux2C*");
MODULE_ALIAS("of:N*T*Cti,twl5030-vaux2");
MODULE_ALIAS("of:N*T*Cti,twl5030-vaux2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux3");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux3C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux4");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux4C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vsim");
MODULE_ALIAS("of:N*T*Cti,twl4030-vsimC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdac");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdacC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vio");
MODULE_ALIAS("of:N*T*Cti,twl4030-vioC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintdig");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintdigC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v5");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v5C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v8");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v8C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb3v1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb3v1C*");

MODULE_INFO(srcversion, "92B33646065E2B858E121A1");
