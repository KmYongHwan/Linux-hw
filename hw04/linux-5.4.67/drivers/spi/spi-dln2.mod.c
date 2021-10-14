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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3054c596, "spi_controller_resume" },
	{ 0x7ea19302, "put_device" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4ebbffb7, "devm_spi_register_controller" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x69acdf38, "memcpy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x963cf8c8, "get_device" },
	{ 0x41ebe6dd, "spi_controller_suspend" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94ee1f58, "dln2_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dln2");


MODULE_INFO(srcversion, "E3A9B8FC494A538A73E89D9");
