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
	{ 0x76ec0f1f, "tpm_pm_resume" },
	{ 0xda4295e1, "tpm_pm_suspend" },
	{ 0x11858bc4, "tpm_chip_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xb37c09f0, "tpm_chip_register" },
	{ 0x844b5e2e, "tpmm_chip_alloc" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9408CBCB46160E76631EC8B");
