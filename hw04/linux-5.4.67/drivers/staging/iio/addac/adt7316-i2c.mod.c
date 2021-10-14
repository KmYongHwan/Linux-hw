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
	{ 0x8d234c69, "adt7316_pm_ops" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f0bb09e, "adt7316_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adt7316");

MODULE_ALIAS("of:N*T*Cadi,adt7316");
MODULE_ALIAS("of:N*T*Cadi,adt7316C*");
MODULE_ALIAS("of:N*T*Cadi,adt7317");
MODULE_ALIAS("of:N*T*Cadi,adt7317C*");
MODULE_ALIAS("of:N*T*Cadi,adt7318");
MODULE_ALIAS("of:N*T*Cadi,adt7318C*");
MODULE_ALIAS("of:N*T*Cadi,adt7516");
MODULE_ALIAS("of:N*T*Cadi,adt7516C*");
MODULE_ALIAS("of:N*T*Cadi,adt7517");
MODULE_ALIAS("of:N*T*Cadi,adt7517C*");
MODULE_ALIAS("of:N*T*Cadi,adt7519");
MODULE_ALIAS("of:N*T*Cadi,adt7519C*");
MODULE_ALIAS("i2c:adt7316");
MODULE_ALIAS("i2c:adt7317");
MODULE_ALIAS("i2c:adt7318");
MODULE_ALIAS("i2c:adt7516");
MODULE_ALIAS("i2c:adt7517");
MODULE_ALIAS("i2c:adt7519");

MODULE_INFO(srcversion, "9E348D645F79C44A5D4D3B3");
