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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x194ce418, "i2c_match_id" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:mcp4017-502");
MODULE_ALIAS("i2c:mcp4017-103");
MODULE_ALIAS("i2c:mcp4017-503");
MODULE_ALIAS("i2c:mcp4017-104");
MODULE_ALIAS("i2c:mcp4018-502");
MODULE_ALIAS("i2c:mcp4018-103");
MODULE_ALIAS("i2c:mcp4018-503");
MODULE_ALIAS("i2c:mcp4018-104");
MODULE_ALIAS("i2c:mcp4019-502");
MODULE_ALIAS("i2c:mcp4019-103");
MODULE_ALIAS("i2c:mcp4019-503");
MODULE_ALIAS("i2c:mcp4019-104");

MODULE_INFO(srcversion, "C780CB3B4683D21250264FB");
