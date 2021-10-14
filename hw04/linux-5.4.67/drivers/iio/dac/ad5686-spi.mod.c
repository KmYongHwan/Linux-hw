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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x40d41069, "ad5686_probe" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xe86eb0fc, "ad5686_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad5686");

MODULE_ALIAS("spi:ad5310r");
MODULE_ALIAS("spi:ad5672r");
MODULE_ALIAS("spi:ad5674r");
MODULE_ALIAS("spi:ad5676");
MODULE_ALIAS("spi:ad5676r");
MODULE_ALIAS("spi:ad5679r");
MODULE_ALIAS("spi:ad5681r");
MODULE_ALIAS("spi:ad5682r");
MODULE_ALIAS("spi:ad5683");
MODULE_ALIAS("spi:ad5683r");
MODULE_ALIAS("spi:ad5684");
MODULE_ALIAS("spi:ad5684r");
MODULE_ALIAS("spi:ad5685");
MODULE_ALIAS("spi:ad5685r");
MODULE_ALIAS("spi:ad5686");
MODULE_ALIAS("spi:ad5686r");

MODULE_INFO(srcversion, "61922103BE9975EA79CFDCB");
