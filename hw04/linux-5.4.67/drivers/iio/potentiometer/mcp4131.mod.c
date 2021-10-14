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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:mcp4131-502");
MODULE_ALIAS("spi:mcp4131-103");
MODULE_ALIAS("spi:mcp4131-503");
MODULE_ALIAS("spi:mcp4131-104");
MODULE_ALIAS("spi:mcp4132-502");
MODULE_ALIAS("spi:mcp4132-103");
MODULE_ALIAS("spi:mcp4132-503");
MODULE_ALIAS("spi:mcp4132-104");
MODULE_ALIAS("spi:mcp4141-502");
MODULE_ALIAS("spi:mcp4141-103");
MODULE_ALIAS("spi:mcp4141-503");
MODULE_ALIAS("spi:mcp4141-104");
MODULE_ALIAS("spi:mcp4142-502");
MODULE_ALIAS("spi:mcp4142-103");
MODULE_ALIAS("spi:mcp4142-503");
MODULE_ALIAS("spi:mcp4142-104");
MODULE_ALIAS("spi:mcp4151-502");
MODULE_ALIAS("spi:mcp4151-103");
MODULE_ALIAS("spi:mcp4151-503");
MODULE_ALIAS("spi:mcp4151-104");
MODULE_ALIAS("spi:mcp4152-502");
MODULE_ALIAS("spi:mcp4152-103");
MODULE_ALIAS("spi:mcp4152-503");
MODULE_ALIAS("spi:mcp4152-104");
MODULE_ALIAS("spi:mcp4161-502");
MODULE_ALIAS("spi:mcp4161-103");
MODULE_ALIAS("spi:mcp4161-503");
MODULE_ALIAS("spi:mcp4161-104");
MODULE_ALIAS("spi:mcp4162-502");
MODULE_ALIAS("spi:mcp4162-103");
MODULE_ALIAS("spi:mcp4162-503");
MODULE_ALIAS("spi:mcp4162-104");
MODULE_ALIAS("spi:mcp4231-502");
MODULE_ALIAS("spi:mcp4231-103");
MODULE_ALIAS("spi:mcp4231-503");
MODULE_ALIAS("spi:mcp4231-104");
MODULE_ALIAS("spi:mcp4232-502");
MODULE_ALIAS("spi:mcp4232-103");
MODULE_ALIAS("spi:mcp4232-503");
MODULE_ALIAS("spi:mcp4232-104");
MODULE_ALIAS("spi:mcp4241-502");
MODULE_ALIAS("spi:mcp4241-103");
MODULE_ALIAS("spi:mcp4241-503");
MODULE_ALIAS("spi:mcp4241-104");
MODULE_ALIAS("spi:mcp4242-502");
MODULE_ALIAS("spi:mcp4242-103");
MODULE_ALIAS("spi:mcp4242-503");
MODULE_ALIAS("spi:mcp4242-104");
MODULE_ALIAS("spi:mcp4251-502");
MODULE_ALIAS("spi:mcp4251-103");
MODULE_ALIAS("spi:mcp4251-503");
MODULE_ALIAS("spi:mcp4251-104");
MODULE_ALIAS("spi:mcp4252-502");
MODULE_ALIAS("spi:mcp4252-103");
MODULE_ALIAS("spi:mcp4252-503");
MODULE_ALIAS("spi:mcp4252-104");
MODULE_ALIAS("spi:mcp4261-502");
MODULE_ALIAS("spi:mcp4261-103");
MODULE_ALIAS("spi:mcp4261-503");
MODULE_ALIAS("spi:mcp4261-104");
MODULE_ALIAS("spi:mcp4262-502");
MODULE_ALIAS("spi:mcp4262-103");
MODULE_ALIAS("spi:mcp4262-503");
MODULE_ALIAS("spi:mcp4262-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-104C*");

MODULE_INFO(srcversion, "1F04A165848CA1EC86D8C8C");
