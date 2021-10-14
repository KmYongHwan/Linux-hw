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
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7fc8b95d, "spi_bitbang_stop" },
	{ 0xc5850110, "printk" },
	{ 0x85880327, "spi_new_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7ea19302, "put_device" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x83e67d89, "spi_bitbang_start" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4963523, "parport_claim" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,spi-bitbang");


MODULE_INFO(srcversion, "AEEE8D02BFCFB7DCE6541C1");
