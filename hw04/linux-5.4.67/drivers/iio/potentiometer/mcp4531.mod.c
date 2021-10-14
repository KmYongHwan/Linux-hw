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
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x194ce418, "i2c_match_id" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:mcp4531-502");
MODULE_ALIAS("i2c:mcp4531-103");
MODULE_ALIAS("i2c:mcp4531-503");
MODULE_ALIAS("i2c:mcp4531-104");
MODULE_ALIAS("i2c:mcp4532-502");
MODULE_ALIAS("i2c:mcp4532-103");
MODULE_ALIAS("i2c:mcp4532-503");
MODULE_ALIAS("i2c:mcp4532-104");
MODULE_ALIAS("i2c:mcp4541-502");
MODULE_ALIAS("i2c:mcp4541-103");
MODULE_ALIAS("i2c:mcp4541-503");
MODULE_ALIAS("i2c:mcp4541-104");
MODULE_ALIAS("i2c:mcp4542-502");
MODULE_ALIAS("i2c:mcp4542-103");
MODULE_ALIAS("i2c:mcp4542-503");
MODULE_ALIAS("i2c:mcp4542-104");
MODULE_ALIAS("i2c:mcp4551-502");
MODULE_ALIAS("i2c:mcp4551-103");
MODULE_ALIAS("i2c:mcp4551-503");
MODULE_ALIAS("i2c:mcp4551-104");
MODULE_ALIAS("i2c:mcp4552-502");
MODULE_ALIAS("i2c:mcp4552-103");
MODULE_ALIAS("i2c:mcp4552-503");
MODULE_ALIAS("i2c:mcp4552-104");
MODULE_ALIAS("i2c:mcp4561-502");
MODULE_ALIAS("i2c:mcp4561-103");
MODULE_ALIAS("i2c:mcp4561-503");
MODULE_ALIAS("i2c:mcp4561-104");
MODULE_ALIAS("i2c:mcp4562-502");
MODULE_ALIAS("i2c:mcp4562-103");
MODULE_ALIAS("i2c:mcp4562-503");
MODULE_ALIAS("i2c:mcp4562-104");
MODULE_ALIAS("i2c:mcp4631-502");
MODULE_ALIAS("i2c:mcp4631-103");
MODULE_ALIAS("i2c:mcp4631-503");
MODULE_ALIAS("i2c:mcp4631-104");
MODULE_ALIAS("i2c:mcp4632-502");
MODULE_ALIAS("i2c:mcp4632-103");
MODULE_ALIAS("i2c:mcp4632-503");
MODULE_ALIAS("i2c:mcp4632-104");
MODULE_ALIAS("i2c:mcp4641-502");
MODULE_ALIAS("i2c:mcp4641-103");
MODULE_ALIAS("i2c:mcp4641-503");
MODULE_ALIAS("i2c:mcp4641-104");
MODULE_ALIAS("i2c:mcp4642-502");
MODULE_ALIAS("i2c:mcp4642-103");
MODULE_ALIAS("i2c:mcp4642-503");
MODULE_ALIAS("i2c:mcp4642-104");
MODULE_ALIAS("i2c:mcp4651-502");
MODULE_ALIAS("i2c:mcp4651-103");
MODULE_ALIAS("i2c:mcp4651-503");
MODULE_ALIAS("i2c:mcp4651-104");
MODULE_ALIAS("i2c:mcp4652-502");
MODULE_ALIAS("i2c:mcp4652-103");
MODULE_ALIAS("i2c:mcp4652-503");
MODULE_ALIAS("i2c:mcp4652-104");
MODULE_ALIAS("i2c:mcp4661-502");
MODULE_ALIAS("i2c:mcp4661-103");
MODULE_ALIAS("i2c:mcp4661-503");
MODULE_ALIAS("i2c:mcp4661-104");
MODULE_ALIAS("i2c:mcp4662-502");
MODULE_ALIAS("i2c:mcp4662-103");
MODULE_ALIAS("i2c:mcp4662-503");
MODULE_ALIAS("i2c:mcp4662-104");

MODULE_INFO(srcversion, "400350FC7A02F1979CAD46F");
