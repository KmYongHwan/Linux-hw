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
	{ 0x6e6d1aa0, "bmc150_accel_pm_ops" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x16e6bbb5, "bmc150_accel_core_probe" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x71b58b20, "bmc150_regmap_conf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xda9259bc, "bmc150_accel_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmc150-accel-core");

MODULE_ALIAS("of:N*T*Cbosch,bmc150_accel");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_accelC*");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_accel");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_accelC*");
MODULE_ALIAS("of:N*T*Cbosch,bma255");
MODULE_ALIAS("of:N*T*Cbosch,bma255C*");
MODULE_ALIAS("of:N*T*Cbosch,bma250e");
MODULE_ALIAS("of:N*T*Cbosch,bma250eC*");
MODULE_ALIAS("of:N*T*Cbosch,bma222e");
MODULE_ALIAS("of:N*T*Cbosch,bma222eC*");
MODULE_ALIAS("of:N*T*Cbosch,bma280");
MODULE_ALIAS("of:N*T*Cbosch,bma280C*");
MODULE_ALIAS("i2c:bmc150_accel");
MODULE_ALIAS("i2c:bmi055_accel");
MODULE_ALIAS("i2c:bma255");
MODULE_ALIAS("i2c:bma250e");
MODULE_ALIAS("i2c:bma222e");
MODULE_ALIAS("i2c:bma280");
MODULE_ALIAS("acpi*:BSBA0150:*");
MODULE_ALIAS("acpi*:BMC150A:*");
MODULE_ALIAS("acpi*:BMI055A:*");
MODULE_ALIAS("acpi*:BMA0255:*");
MODULE_ALIAS("acpi*:BMA250E:*");
MODULE_ALIAS("acpi*:BMA222E:*");
MODULE_ALIAS("acpi*:BMA0280:*");
MODULE_ALIAS("acpi*:BOSC0200:*");

MODULE_INFO(srcversion, "23D547BE34BAFBF19B7574C");
