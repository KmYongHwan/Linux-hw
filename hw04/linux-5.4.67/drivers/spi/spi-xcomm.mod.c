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
	{ 0x8271648f, "spi_finalize_current_message" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x7ea19302, "put_device" },
	{ 0x4ebbffb7, "devm_spi_register_controller" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:spi-xcomm");

MODULE_INFO(srcversion, "6264035286FD922AF903CD9");
